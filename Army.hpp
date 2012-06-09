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
    std::vector<std::string>    weapons;
    std::vector<Military>		troops;
    std::vector<Civilian>       applicants;

	public:
	Army();
	~Army();
	const std::vector<std::string>	getRanks(void) const;
	std::string						getRankById(unsigned int rank) const;
    int                             getIdByRank(std::string rank);
	const std::vector<std::string>	&getTypes(void) const;
	std::string						getTypeById(unsigned int type) const;
    std::vector<Military>           &getTroops(void);
    Military                        getMilitary(unsigned int id);
    std::vector<Civilian>           &getApplicants(void);
    int find(Military const &milit);
    int find(Civilian const &civil);
    void recruit(Civilian &civilian);
    void fire(Military &milit);
    void sendToWar(Military &milit);
    void displayMilitaries();
    void promote(int id);
};

#endif
