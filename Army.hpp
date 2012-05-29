//
//  Army.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Army_hpp
#define ArmyManager_Army_hpp

#include <string>
#include <vector>
#include "Civilian.hpp"
#include "Military.hpp"

class	Army
{
	private:
	std::vector<std::string>	ranks;
	std::vector<std::string>	types;
	std::vector<Military*>		troops;

	public:
	Army();
	~Army();
	std::vector<std::string>	getRanks(void) const;
	std::string					getRankById(unsigned int rank) const;
	std::vector<std::string>	getTypes(void) const;
	std::string					getTypeById(unsigned int type) const;
	bool recruit(Civilian &civilian);
};

#endif
