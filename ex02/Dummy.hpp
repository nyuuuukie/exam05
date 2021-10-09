#pragma once

#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy *clone( void ) const;

	Dummy( void );
	virtual ~Dummy();
};
