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
				   int mId, int mRank, int mType)
	: Civilian(fname, lname, ctry, sgh)
{
	this->rank = mRank;
	this->type = mType;
	this->id = mId;
}

// Constructeur par copie de militaire
Military::Military(Military const &other)
	: Civilian(other.firstname, other.lastname, other.country, other.strengh)
{
	this->rank = other.rank;
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
	this->rank = 0;
	this->type = 0;
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

bool	Military::operator==(Civilian const &other) const
{
	if (this->firstname == other.getFirstname() &&
		this->lastname == other.getLastname() &&
		this->country == other.getCountry() &&
		this->strengh == other.getStrengh())
		return (true);
	return (false);
}

bool	Military::operator==(Military const &other) const
{
	if (this->firstname == other.firstname &&
		this->lastname == other.lastname &&
		this->country == other.country &&
		this->strengh == other.strengh &&
		this->id == other.id &&
		this->rank == other.rank &&
		this->type == other.type)
		return (true);
	return (false);
}

bool	Military::operator!=(Civilian const &other) const
{
	return (!(*this == other));
}

bool	Military::operator!=(Military const &other) const
{
	return (!(*this == other));
}

int		Military::getId(void) const
{
	return (this->id);
}

int		Military::getRank(void) const
{
	return (this->rank);
}

void	Military::setRank(int const &mRank)
{
	this->rank = mRank;
}

int		Military::getType(void) const
{
	return (this->type);
}

void		Military::setType(int const &mType)
{
	this->type = mType;
}
