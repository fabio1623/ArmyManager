#include "function.hpp"

Civilian createCivilian()
{
    std::string firstName, lastName, country;
    int strength;

    std::cout << "Nom : " << std::endl;
    std::cin >> firstName >> std::endl;
    std::cout << "Prenom : " << std::endl;
    std::cin >> lastName >> std::endl;
    std::cout << "Pays : " << std::endl;
    std::cin >> country >> std::endl;
    std::cout << "Force : " << std::endl;
    std::cin >> strength >> std::endl;

    return (new Civilian(firstName, lastName, country, strength));
}

void displayCivilians(std::vector<Civilian> lC)
{
    for (unsigned int i=0; i < lC.size(); i++)
    {
        std::cout << "Civil" + i + ": " << lC[i] << std::endl;
    }
}

std::ostream &operator << (std::ostream &cout, Civilian const &other)
{
    cout << other.getFirstname() << ", " << other.getLastname() << ", ";
    cout << other.getCountry() << ", Force : " << other.getStrengh();
}

std::ostream &operator << (std::ostream &cout, Military const &other)
{
    cout << other.getId() << ", " << other.getFirstname() << ", " << other.getLastname() << ", ";
    cout << other.getCountry() << ", Force : " << other.getStrengh() << ", " << other.getRank() << ", ";
    cout << other.getType() << ", " << other.getWeapon();
}

int findCivilian(std::vector <Civilian> lC)
{
	std::stack<int>	correspondingCivillians;
    std::string fN, lN, c;
    int position = -1;

	std::cout << "Nom (0 si pas connu) : " << std::endl;
    std::cin >> fN >> std::endl;
	std::cout << "Prenom (0 si pas connu) : " << std::endl;
    std::cin >> lN >> std::endl;
	std::cout << "Pays (0 si pas connu) : " << std::endl;
    std::cin >> c >> std::endl;

    for (int i=0; i < lC.size(); i++)
    {
        if ((fN == '0' || lC[i].firstName == fN) &&
            (lN == '0' || lC[i].lastName == lN) &&
            (c == '0' || lC[i].country == c))
			correspondingCivillians.push(i);
	}

	if (correspondingCivillians.size() == 0) // No found
		return (position);
	else if (correspondingCivillians.size() == 1) // Only 1 found
		return (correspondingCivillians.top());
	else // Many found
	{
		int currentCivilian;
		do { // Loop in found civilians
			currentCivilian = correspondingCivillians.top();
			std::cout << "Civils trouves:" << std::endl;
			std::cout << currentCivilian << ": " << *lC[currentCivilian] << std::endl;
			correspondingCivillians.pop();
		} while (correspondingCivillians.size() > 0);

		do { // Loop until enter valid number
			std::cout << std::endl;
			std::endl << "Lequel correspond? : ";
			std::cin >> currentCivilian;
		} while (currentCivilian < 0 ||
				 currentCivilian >= correspondingCivillians.size());
		return (currentCivilian);
	}
}

int findMilitary(std::vector <Military> lM)
{
    std::stack<int>	correspondingMilitary;
    std::string fN, lN, c;
    int position = -1;

    std::cout << "Nom (0 si pas connu) : " << std::endl;
    std::cin >> fN >> std::endl;
    std::cout << "Prenom (0 si pas connu) : " << std::endl;
    std::cin >> lN >> std::endl;
    std::cout << "Pays (0 si pas connu) : " << std::endl;
    std::cin >> c >> std::endl;

    for (int i=0; i < lM.size(); i++)
    {
        if ((fN == '0' || lM[i].firstName == fN) &&
            (lN == '0' || lM[i].lastName == lN) &&
            (c == '0' || lM[i].country == c))
            correspondingMilitary.push(i);
    }

    if (correspondingMilitary.size() == 0) // No found
        return (position);
    else if (correspondingMilitary.size() == 1) // Only 1 found
        return (correspondingMilitary.top());
    else // Many found
    {
        unsigned int currentMilitary;
        do { // Loop in found civilians
            currentMilitary = correspondingMilitary.top();
            std::cout << "Militaires trouves:" << std::endl;
            std::cout << currentMilitary << ": " << *lC[currentMilitary] << std::endl;
            correspondingMilitary.pop();
        } while (correspondingMilitary.size() > 0);

        do { // Loop until enter valid number
            std::cout << std::endl;
            std::endl << "Lequel correspond? : ";
            std::cin >> currentMilitary;
        } while (currentMilitary < 0 ||
                 currentMilitary >= correspondingMilitary.size());
        return (currentMilitary);
    }
}

bool deleteCivilian(std::vector <Civilian> lC)
{
    int civilPosition = findCivilian(lC);

    if (civilPosition = -1)
        return (false);

    lC.erase(lC.begin()+civilPosition);
    return (true);
}
