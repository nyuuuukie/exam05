#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << getName() << ": " << "This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << getName() << ": " << "My job here is done!" << std::endl;
}

const std::string &Warlock::getName( void ) const {
	return _name;
}

const std::string &Warlock::getTitle( void ) const {
	return _title;
}
	
void Warlock::setTitle( const std::string &title ) {
	this->_title = title;
}

void Warlock::introduce( void ) const {
	std::cout << getName() << ": " << "I am " << getName() << ", " << getTitle() << "!" << std::endl;
}


void Warlock::learnSpell( ASpell *spell ) {
	
	if ( spell != 0 ) {

		iterator beg = mind.begin();
		iterator end = mind.end();

		for (iterator it = beg; it != end; it++) {
			if ((*it)->getName() == spell->getName())
				return ;
		}

		mind.push_back(spell->clone());
	}
}

void Warlock::forgetSpell( std::string spellName ) {
	iterator beg = mind.begin();
	iterator end = mind.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getName() == spellName ) {
			//Deleting cloned object
			delete *it;
			
			//Removing the pointer from vector
			mind.erase(it);
		}
	}
}

void Warlock::launchSpell( std::string spellName, ATarget &target ) {
	iterator beg = mind.begin();
	iterator end = mind.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getName() == spellName ) {
			(*it)->launch(target);
		}
	}
}
