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
	empty(this->troops);
}
bool recruit(Civilian &cvl)
{
	Military *mlt = new Military(cvl);
	
	if(cvl.get)
}