//
//  Army.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Army_hpp
#define ArmyManager_Army_hpp

#include <vector>
#include "Civilian.hpp"
#include "Military.hpp"

class	Army
{
	private:
	std::vector<Military*>	troops;
	
	public :
	Army();
	~Army();
	bool recruit(Civilian &civilian);
};

#endif
