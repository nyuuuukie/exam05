#include "Dummy.hpp"

Dummy::Dummy( void ) : ATarget("Target Practice Dummy") {}

Dummy::~Dummy() {}

Dummy *Dummy::clone( void ) const {
	//It should be a deep copy, but in this case there's no difference 
	return new Dummy();
}
