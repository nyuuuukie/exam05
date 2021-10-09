#pragma once

#include <iostream>

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph *clone( void ) const;

		Polymorph( void );
		~Polymorph();
};


