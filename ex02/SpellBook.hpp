#pragma once

#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
typedef std::vector<ASpell *>::iterator iterator;

private:
	std::vector<ASpell *> book;

	SpellBook(const SpellBook &other);
	SpellBook & operator=(const SpellBook &other);
	
public:
	SpellBook( void );
	void learnSpell( ASpell *spell );
	void forgetSpell( const std::string & spellName );
	ASpell *createSpell( const std::string & spellName );

	~SpellBook();
};
