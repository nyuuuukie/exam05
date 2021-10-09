#pragma once

#include <iostream>

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball *clone( void ) const;

		Fireball( void );
		~Fireball();
};


