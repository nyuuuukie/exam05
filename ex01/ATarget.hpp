#pragma once

#include <iostream>

class ASpell;

class ATarget
{
protected:
	std::string _type;

public:
	std::string getType( void ) const;
	
	virtual ATarget *clone( void ) const = 0;

	void getHitBySpell( const ASpell &spell ) const;

	ATarget(std::string type);
	ATarget(const ATarget &other);
	ATarget & operator=(const ATarget &other);
	virtual ~ATarget();
};

#include "ASpell.hpp"