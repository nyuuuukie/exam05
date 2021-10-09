#pragma once

#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh *clone( void ) const;

		Fwoosh( void );
		~Fwoosh();
};


