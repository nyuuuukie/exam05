#pragma once

#include <iostream>

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall *clone( void ) const;

	BrickWall( void );
	virtual ~BrickWall();
};
