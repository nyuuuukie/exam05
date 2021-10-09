#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	iterator beg = book.begin();
	iterator end = book.end();

	for (iterator it = beg; it != end; it++) {
		//Deleting cloned object
		delete *it;
			
	}
	this->book.clear();
}

void SpellBook::learnSpell( ASpell *spell ) {
	
	if ( spell != 0 ) {

		iterator beg = book.begin();
		iterator end = book.end();

		for (iterator it = beg; it != end; it++) {
			if ((*it)->getName() == spell->getName())
				return ;
		}

		book.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell( const std::string &spellName ) {
	iterator beg = book.begin();
	iterator end = book.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getName() == spellName ) {
			//Deleting cloned object
			delete *it;
			
			//Removing the pointer from vector
			book.erase(it);
		}
	}
}

ASpell *SpellBook::createSpell( const std::string &spellName ) {
	iterator beg = book.begin();
	iterator end = book.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getName() == spellName ) {
			return (*it)->clone();
		}
	}
	return 0;
}
