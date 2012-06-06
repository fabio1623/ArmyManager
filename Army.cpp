//
//  Army.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Army.hpp"

Army::Army()
{
    this->ranks.push_back("Soldier");
    this->ranks.push_back("Sergent");
    this->ranks.push_back("Colonel");
    this->ranks.push_back("Capitain");
    this->ranks.push_back("General");

    this->types.push_back("Air");
    this->types.push_back("Ground");
    this->types.push_back("Marine");
}

Army::~Army()
{
	this->troops.empty();
    this->ranks.empty();
    this->types.empty();
}

const std::vector<std::string> Army::getRanks(void) const
{
    return (this->ranks);
}

std::string	Army::getRankById(unsigned int rank) const
{
    return (this->ranks[rank]);
}

int Army::getIdByRank(std::string rank)
{
    for (unsigned int i=0; i < this->ranks.size(); i++)
        if (this->ranks[i] == rank)
            return (i);

    return (-1);
}

const std::vector<std::string> &Army::getTypes(void) const
{
	return (this->types);
}

std::string		Army::getTypeById(unsigned int type) const
{
	return (this->types[type]);
}

std::vector<Military> &Army::getTroops(void)
{
    return (this->troops);
}

Military Army::getMilitary(unsigned int id)
{
    return (this->troops[id]);
}

int Army::find(Military const &milit)
{
    for (unsigned int i=0; i< this->troops.size(); i++)
    {
        if (this->troops[i] == milit)
        {
            return (i);
        }
    }
    return (-1);
}

int Army::find(Civilian const &civil)
{
    for (unsigned int i=0; i < this->troops.size(); i++)
    {
        if (this->troops[i] == civil)
        {
            return (i);
        }
    }
    return (-1);
}

bool Army::recruit(Civilian &individual)
{
    if (find(individual) != -1)
        return (false);

    Military *unit = new Military(individual);
    this->troops.push_back(*unit);

    return (true);
}

bool Army::fire(Military &milit)
{
    int nMilit = find(milit);
    if (nMilit == -1)
        return (false);

    this->troops.erase(this->troops.begin()+nMilit);
    return (true);
}

bool Army::sendToWar(Military &milit)
{
    if (find(milit) != -1)
        return (false);

	milit.setStrengh(milit.getStrengh()+1);
    return (true);
}

void Army::displayMilitaries()
{
    for (unsigned int i=0; i < this->troops.size(); i++)
    {
        std::cout << "Militaire";
        std::cout << i;
        std::cout << ": ";
        //std::cout << this->troops[i] << std::endl;
    }
}

bool Army::promote(int id)
{
    if (this->getMilitary(id).getRank() == this->ranks.size()-1)
        return (false);

    this->getMilitary(id).setRank(this->getMilitary(id).getRank()+1);
    return (true);
}

