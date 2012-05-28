//
//  Civilian.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Civilian.hpp"

Civilian::Civilian(std::string fname, std::string lname, std::string ctry, int sgh)
{
	this->firstname = fname;
	this->lastname = lname;
	this->country = ctry;
	this->strengh = sgh;
}

Civilian::~Civilian()
{
}

std::string	Civilian::getFirstname(void) const
{
	return (this->firstname);
}

void		Civilian::setFirstname(std::string const &fname)
{
	this->firstname = fname;
}

std::string	Civilian::getLastname(void) const
{
	return (this->lastname);
}

void		Civilian::setLastname(std::string const &lname)
{
	this->lastname = lname;
}

std::string	Civilian::getCountry(void) const
{
	return (this->country);
}

void		Civilian::setCountry(std::string const &ctry)
{
	this->country = ctry;
}

int			Civilian::getStrengh(void) const
{
	return (this->strengh);
}

void		Civilian::setStrengh(int const &sgh)
{
	this->strengh = sgh;
}
