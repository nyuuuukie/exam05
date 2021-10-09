#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

Fireball *Fireball::clone( void ) const {
	//It should be a deep copy, but in this case there's no difference 
	return new Fireball();
}


