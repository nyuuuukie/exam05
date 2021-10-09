#pragma once

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	const std::string &getName( void ) const;
	const std::string &getTitle( void ) const;
	
	void setTitle( const std::string &title );

	void introduce( void ) const;

	Warlock(std::string name, std::string title);
	//Warlock(const Warlock &other);
	//Warlock & operator=(const Warlock &other);
	~Warlock();
};


