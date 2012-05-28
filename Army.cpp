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

bool recruit(Civilian &individual)
{
	Military *unit;
	unit = new Military(individual);
	return (false);
}
