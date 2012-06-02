//
//  Civilian.hpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ArmyManager_Civilian_hpp
#define ArmyManager_Civilian_hpp

#include <time.h>
#include <string>

class	Civilian
{
	protected:
	std::string	firstname;
	std::string lastname;
	std::string	country;
    int			strength;

	public:
	Civilian(std::string fname, std::string lname, std::string ctry, int sgh = 0);
	Civilian(Civilian const &other);
	~Civilian();
	Civilian	&operator=(Civilian const &other);
	bool		operator==(Civilian const &other);
	bool		operator!=(Civilian const &other);
	std::string	getFirstname(void) const;
	void		setFirstname(std::string const &fname);
	std::string	getLastname(void) const;
	void		setLastname(std::string const &lname);
	std::string	getCountry(void) const;
	void		setCountry(std::string const &ctry);
	int			getStrengh(void) const;
	void		setStrengh(int const sgh);
};

#endif
