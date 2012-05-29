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
	if (sgh == -1)
	{
		srand(time(NULL));
		this->strengh = rand() % 100 + 1;
	}
	else
		this->strengh = sgh;
}

Civilian::Civilian(Civilian const &other)
{
	this->firstname = other.firstname;
	this->lastname = other.lastname;
	this->country = other.country;
	this->strengh = other.strengh;
}

Civilian::~Civilian()
{
	this->firstname.empty();
	this->lastname.empty();
	this->country.empty();
	this->strengh = 0;
}

Civilian &Civilian::operator=(Civilian const &other)
{
	this->firstname = other.firstname;
	this->lastname = other.lastname;
	this->country = other.country;
	this->strengh = other.strengh;
	return (*this);
}

bool	Civilian::operator==(Civilian const &other)
{
	if (this->firstname == other.firstname &&
		this->lastname == other.lastname &&
		this->country == other.country &&
		this->strengh == other.strengh)
		return (true);
	return (false);
}

bool	Civilian::operator!=(Civilian const &other)
{
	return (!(*this == other));
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
