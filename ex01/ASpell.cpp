#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell() {}
ASpell::~ASpell() {}

ASpell::ASpell(const ASpell &other) {
	*this = other;
}

ASpell &ASpell::operator=(const ASpell &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_effects = other._effects;
	}
	return *this;
}

std::string ASpell::getName( void ) const {
	return _name;
}

std::string ASpell::getEffects( void ) const {
	return _effects;
}

void ASpell::launch( const ATarget &target ) const {
	target.getHitBySpell(*this);
}

