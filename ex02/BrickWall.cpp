#include "BrickWall.hpp"

BrickWall::BrickWall( void ) : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall() {}

BrickWall *BrickWall::clone( void ) const {
	//It should be a deep copy, but in this case there's no difference 
	return new BrickWall();
}
