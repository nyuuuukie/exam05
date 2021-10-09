#pragma once

#include <iostream>

#include "ATarget.hpp"

class ASpell
{
protected:
	std::string _name;
	std::string _effects;

public:
	std::string getName( void ) const;
	std::string getEffects( void ) const;
	
	virtual ASpell *clone( void ) const = 0;

	void launch( const ATarget &target ) const;

	ASpell( void ); 
	ASpell(std::string name, std::string effects);
	ASpell(const ASpell &other);
	ASpell & operator=(const ASpell &other);
	
	virtual ~ASpell();
};


