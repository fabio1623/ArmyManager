//
//  Army.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Army.hpp"

Army::Army()
{

}

Army::~Army()
{
	this->troops.empty();
}

std::vector<std::string>	Army::getRanks(void) const
{
}

std::string	Army::getRankById(unsigned int rank) const
{
    return (this->ranks[rank]);
}

const std::vector<std::string> &Army::getTypes(void) const
{
	return (this->types);
}

std::string		Army::getTypeById(unsigned int type) const
{
	return (this->types[type]);
}

int Army::find(Military const &milit)
{
    for (unsigned int i=0; i<this->troops.size(); i++)
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
    for (unsigned int i=0; i<this->troops.size(); i++)
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


