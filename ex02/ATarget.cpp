#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::ATarget( const ATarget &other ) {
	*this = other;
}

ATarget &ATarget::operator=(const ATarget &other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

ATarget::~ATarget() {}

std::string ATarget::getType( void ) const {
	return _type;
}

void ATarget::getHitBySpell( const ASpell &spell) const {
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}