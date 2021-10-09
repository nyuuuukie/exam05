#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	iterator beg = targets.begin();
	iterator end = targets.end();

	for (iterator it = beg; it != end; it++) {
		//Deleting cloned object
		delete *it;
			
	}
	this->targets.clear();
}


void TargetGenerator::learnTargetType( ATarget* target ) {
		if ( target != 0 ) {

		iterator beg = targets.begin();
		iterator end = targets.end();

		for (iterator it = beg; it != end; it++) {
			if ((*it)->getType() == target->getType())
				return ;
		}

		targets.push_back(target->clone());
	}
}


ATarget* TargetGenerator::createTarget( const std::string &type ) {
	iterator beg = targets.begin();
	iterator end = targets.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getType() == type ) {
			return (*it)->clone();
		}
	}
	return 0;
}


void TargetGenerator::forgetTargetType( const std::string &type ) {
	iterator beg = targets.begin();
	iterator end = targets.end();

	for (iterator it = beg; it != end; it++) {
		if ((*it)->getType() == type ) {
			//Deleting cloned object
			delete *it;
			
			//Removing the pointer from vector
			targets.erase(it);
		}
	}
}
