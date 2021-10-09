#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
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
		book.learnSpell(spell);
	}
}

void Warlock::forgetSpell( std::string spellName ) {
	book.forgetSpell(spellName);
}

void Warlock::launchSpell( std::string spellName, ATarget &target ) {
	
	ASpell *spell = book.createSpell(spellName);
    
	if (spell != 0) {
        spell->launch(target);
		
		delete spell;
	}
}
