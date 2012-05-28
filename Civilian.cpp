//
//  Civilian.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Civilian.hpp"

Civilian(std::string fname, std::string lname, std::string ctry, int sgh)
{
	this->firstname = fname;
	this->lastname = lname;
	this->country = ctry;
	this->strengh = sgh;
}

~Civilian()
{
}

std::string	getFirstname(void) const
{
	return (this->firstname);
}

void		setFirstname(std::string const &fname)
{
	this->firstname = fname;
}

std::string	getLastname(void) const
{
	return (this->lastname);
}

void		setLastname(std::string const &lname)
{
	this->lastname = lname;
}

std::string	getCountry(void) const
{
	return (this->country);
}

void		setCountry(std::string const &ctry)
{
	this->country = ctry;
}

int			getStrengh(void) const
{
	return (this->strengh);
}

void		setStrengh(int const &sgh)
{
	this->strengh = sgh;
}
