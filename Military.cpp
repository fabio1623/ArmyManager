//
//  Military.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Military.hpp"

Military::Military(std::string mGrade, std::string mType, int mId)
{
	this->grade = mGrade;
	this->type = mType;
	this->id = mId;
}

Military::Military(Military const &other)
{
	this->grade = other.grade;
	this->type = other.type;
	this->id = other.id;
}

Military::Military(Civilian const &other)
	: Civilian(other.firstname, other.lastname, other.country, other.strengh)
{

	this->grade = other.grade;
	this->type = other.type;
	this->id = other.id;
}

Military::~Military()
{
	this->grade.empty();
	this->type.empty();
	this->id = 0;
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

int			Military::getId(void) const
{
	return (this->id);
}
