#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {}

Polymorph *Polymorph::clone( void ) const {
	//It should be a deep copy, but in this case there's no difference 
	return new Polymorph();
}


