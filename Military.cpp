//
//  Military.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Military.hpp"

// Constructeur classique
Military::Military(std::string fname, std::string lname, std::string ctry, int sgh,
				   int mId, std::string mGrade, std::string mType)
	: Civilian(fname, lname, ctry, sgh)
{
	this->grade = mGrade;
	this->type = mType;
	this->id = mId;
}

// Constructeur par copie de militaire
Military::Military(Military const &other)
	: Civilian(other.firstname, other.lastname, other.country, other.strengh)
{
	this->grade = other.grade;
	this->type = other.type;
	this->id = other.id;
}

// Constructeur par héritage d'un civil
Military::Military(Civilian const &other)
	: Civilian(other.getFirstname(), other.getLastname(), other.getCountry(),
			   other.getStrengh())
{
}

Military::~Military()
{
	this->grade.empty();
	this->type.empty();
	this->id = 0;
}

//Military &Military::operator=(Civilian const &other)
//{
//	this->firstname = other.firstname;
//	this->lastname = other.lastname;
//	this->country = other.country;
//	this->strengh = other.strengh;
//	return (*this);
//}

Military	&Military::operator=(Military const &other)
{
	this->firstname = other.firstname;
	this->lastname = other.lastname;
	this->country = other.country;
	this->strengh = other.strengh;
	return (*this);
}

bool	Military::operator==(Civilian const &other)
{
	if (this->firstname == other.getFirstname() &&
		this->lastname == other.getLastname() &&
		this->country == other.getCountry() &&
		this->strengh == other.getStrengh())
		return (true);
	return (false);
}

bool	Military::operator==(Military const &other)
{
	if (this->firstname == other.firstname &&
		this->lastname == other.lastname &&
		this->country == other.country &&
		this->strengh == other.strengh &&
		this->id == other.id &&
		this->grade == other.grade &&
		this->type == other.type)
		return (true);
	return (false);
}

bool	Military::operator!=(Civilian const &other)
{
	return (!(*this == other));
}

bool	Military::operator!=(Military const &other)
{
	return (!(*this == other));
}

int		Military::getId(void) const
{
	return (this->id);
}

std::string	Military::getGrade(void) const
{
	return (this->grade);
}

void		Military::setGrade(std::string const &mGrade)
{
	this->grade = mGrade;
}

std::string	Military::getType(void) const
{
	return (this->type);
}

void		Military::setType(std::string const &mType)
{
	this->type = mType;
}
