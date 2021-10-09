#pragma once

#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock
{
typedef std::vector<ASpell *>::iterator iterator;

private:
	std::string _name;
	std::string _title;

	std::vector<ASpell *> mind;

	Warlock( void );
	Warlock(const Warlock &other);
	Warlock & operator=(const Warlock &other);
	
public:
	const std::string &getName( void ) const;
	const std::string &getTitle( void ) const;
	
	void setTitle( const std::string &title );

	void introduce( void ) const;

	void learnSpell( ASpell *spell );
	void forgetSpell( std::string spellName );
	void launchSpell( std::string spellName, ATarget &target );


	Warlock(std::string name, std::string title);
	~Warlock();
};
