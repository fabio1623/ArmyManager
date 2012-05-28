//
//  Army.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Army_hpp
#define ArmyManager_Army_hpp

#include "Global.hpp"

class	Army
{
	private:
	vector<Military*>	troops;
	
	public :
	Army();
	~Army();
	bool recruit(Civilian &civilian);
};

#endif
