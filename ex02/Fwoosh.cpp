#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone( void ) const {
	//It should be a deep copy, but in this case there's no difference 
	return new Fwoosh();
}


