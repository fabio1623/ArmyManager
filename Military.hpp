//
//  Military.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Military_h
#define ArmyManager_Military_h

#include "Global.hpp"

class	Military : public Civilian
{
	private:
	int	id;
	std::string	grade;
	std::string type;
	
	public:
	Military(std::string mGrade, std::string mType, int mId = 0);
	~Military();
	std::string	getGrade(void) const;
	void		setGrade(std::string const &mGrade);
	std::string	getType(void) const;
	void		setType(std::string const &mType);
	int			getId(void) const;
};

#endif