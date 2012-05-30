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

}

std::vector<std::string>	Army::getTypes(void) const
{

}

std::string		Army::getTypeById(unsigned int type) const
{

}

bool Army::exist(Military const &milit)
{
    for (unsigned int i=0; i<this->troops.size(); i++)
    {
        if (this->troops[i] == milit)
        {
            return (true);
        }
    }
    return (false);
}

bool Army::exist(Civilian const &civil)
{
    for (unsigned int i=0; i<this->troops.size(); i++)
    {
        if (this->troops[i] == civil)
        {
            return (true);
        }
    }
    return (false);
}

bool Army::recruit(Civilian &individual)
{
    if (exist(individual))
        return (false);

    Military *unit = new Military(individual);
    this->troops.push_back(*unit);

    return (true);
}

bool Army::fire(Military &milit)
{
    if (exist(milit))
    {
        this->troops.pop_back(&milit);
        return (true);
    }
    return (false);
}

bool Army::sendToWar(Military &milit)
{
    if (exist(milit))
    {
        milit.setStrengh((milit.strengh)+1);
        return (true);
    }
    return (false);
}
