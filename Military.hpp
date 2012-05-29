//
//  Military.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Military_hpp
#define ArmyManager_Military_hpp

#include <iostream>
#include "Civilian.hpp"

class	Military : public Civilian
{
	private:
	int			id;
	std::string	grade;
	std::string type;

	public:
	Military(std::string fname, std::string lname, std::string ctry, int sgh,
			 int mId, std::string mGrade, std::string mType);
	Military(Military const &other);
	Military(Civilian const &other);
	~Military();
	//Military	&operator=(Civilian const &other);
	Military	&operator=(Military const &other);
	bool		operator==(Civilian const &other);
	bool		operator==(Military const &other);
	bool		operator!=(Civilian const &other);
	bool		operator!=(Military const &other);
	int			getId(void) const;
	std::string	getGrade(void) const;
	void		setGrade(std::string const &mGrade);
	std::string	getType(void) const;
	void		setType(std::string const &mType);
};

#endif
