//
//  Military.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Military_hpp
#define ArmyManager_Military_hpp

#include <string>
#include "Civilian.hpp"

class	Military : public Civilian
{
	private:
	int	id;
	int	rank;
	int	type;
	int weapon;

	public:
	Military(std::string fname, std::string lname, std::string ctry, int sgh,
			 int mId, int mRank, int mType, int mWeapon);
	Military(Civilian const &other);
	//Military(Military const &other);
	~Military();
	//Military	&operator=(Civilian const &other);
	//Military	&operator=(Military const &other);
	bool		operator==(Civilian const &other) const;
	bool		operator==(Military const &other) const;
	bool		operator!=(Civilian const &other) const;
	bool		operator!=(Military const &other) const;
	int			getId(void) const;
    unsigned int getRank(void) const;
	void		setRank(int const mRank);
	int			getType(void) const;
	void		setType(int const mType);
	int			getWeapon(void) const;
	void		setWeapon(int const mWeapon);
};

#endif
