//
//  Military.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Military_hpp
#define ArmyManager_Military_hpp

#include "Global.hpp"

class	Military : public Civilian
{
	private:
	std::string	grade;
	std::string type;
	int			id;

	public:
	Military(std::string mGrade, std::string mType, int mId);
	Military(Military const &other);
	Military(Civilian const &other);
	~Military();
	std::string	getGrade(void) const;
	void		setGrade(std::string const &mGrade);
	std::string	getType(void) const;
	void		setType(std::string const &mType);
	int			getId(void) const;
};

#endif
