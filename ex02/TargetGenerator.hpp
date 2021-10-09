#pragma once

#include <iostream>
#include <vector>

#include "ATarget.hpp"

class TargetGenerator
{
typedef std::vector<ATarget *>::iterator iterator;

private:
	std::vector<ATarget *> targets;

	TargetGenerator(const TargetGenerator &other);
	TargetGenerator & operator=( const TargetGenerator &other);
	
public:
	TargetGenerator( void );
	void learnTargetType( ATarget* target );
	void forgetTargetType( const std::string &type );
	ATarget* createTarget( const std::string &type );

	~TargetGenerator();
};
