#include "function.hpp"

void createCivilian(std::vector<Civilian> &lC)
{
    std::string firstName, lastName, country;
    int strength;

    std::cout << "Nom : ";
    std::cin >> firstName;
    std::cout << "Prenom : ";
    std::cin >> lastName;
    std::cout << "Pays : ";
    std::cin >> country;
    std::cout << "Force : ";
    std::cin >> strength;

    Civilian *civil = new Civilian(firstName, lastName, country, strength);
    lC.push_back(*civil);
}

void displayCivilians(std::vector<Civilian> &lC)
{
    for (unsigned int i=0; i < lC.size(); i++)
    {
        std::cout << "Civil " << i << ": " << lC[i] << std::endl;
    }
}

std::ostream &operator << (std::ostream &cout, Civilian const &other)
{
    cout << other.getFirstname() << ", " << other.getLastname() << ", ";
    cout << other.getCountry() << ", Force : " << other.getStrength();

    return (cout);
}

std::ostream &operator << (std::ostream &cout, Military const &other)
{
    cout << other.getId() << ", " << other.getFirstname() << ", " << other.getLastname() << ", ";
    cout << other.getCountry() << ", Force : " << other.getStrength() << ", " << other.getRank() << ", ";
    cout << other.getType() << ", " << other.getWeapon();

    return (cout);
}

int findCivilian(std::vector <Civilian> &lC)
{
	std::stack<int>	correspondingCivillians;
    std::string fN, lN, c;
    int position = -1;

	std::cout << "Nom (0 si pas connu) : " << std::endl;
    std::cin >> fN;
	std::cout << "Prenom (0 si pas connu) : " << std::endl;
    std::cin >> lN;
	std::cout << "Pays (0 si pas connu) : " << std::endl;
    std::cin >> c;

    for (unsigned int i=0; i < lC.size(); i++)
    {
        if ((fN == "0" || lC[i].getFirstname() == fN) &&
                (lN == "0" || lC[i].getLastname() == lN) &&
                (c == "0" || lC[i].getCountry() == c))
			correspondingCivillians.push(i);
	}

	if (correspondingCivillians.size() == 0) // No found
		return (position);
	else if (correspondingCivillians.size() == 1) // Only 1 found
		return (correspondingCivillians.top());
	else // Many found
	{
        unsigned int currentCivilian;
		do { // Loop in found civilians
			currentCivilian = correspondingCivillians.top();
			std::cout << "Civils trouves:" << std::endl;
            std::cout << currentCivilian << ": " << lC[currentCivilian] << std::endl;
			correspondingCivillians.pop();
		} while (correspondingCivillians.size() > 0);

		do { // Loop until enter valid number
			std::cout << std::endl;
            std::cout << "Lequel correspond? : ";
			std::cin >> currentCivilian;
        } while (currentCivilian >= correspondingCivillians.size());
		return (currentCivilian);
	}
}

int findMilitary(std::vector <Military> &lM)
{
    std::stack<int>	correspondingMilitary;
    std::string fN, lN, c;
    int position = -1;

    std::cout << "Nom (0 si pas connu) : " << std::endl;
    std::cin >> fN;
    std::cout << "Prenom (0 si pas connu) : " << std::endl;
    std::cin >> lN;
    std::cout << "Pays (0 si pas connu) : " << std::endl;
    std::cin >> c;

    for (unsigned int i=0; i < lM.size(); i++)
    {
        if ((fN == "0" || lM[i].getFirstname() == fN) &&
                (lN == "0" || lM[i].getLastname() == lN) &&
                (c == "0" || lM[i].getCountry() == c))
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
            std::cout << currentMilitary << ": " << lM[currentMilitary] << std::endl;
            correspondingMilitary.pop();
        } while (correspondingMilitary.size() > 0);

        do { // Loop until enter valid number
            std::cout << std::endl;
            std::cout << "Lequel correspond? : ";
            std::cin >> currentMilitary;
        } while (currentMilitary >= correspondingMilitary.size());
        return (currentMilitary);
    }
}

bool deleteCivilian(std::vector <Civilian> &lC)
{
    int civilPosition = findCivilian(lC);

    if (civilPosition == -1)
        return (false);

    lC.erase(lC.begin()+civilPosition);
    return (true);
}

void fire(std::vector<Civilian> &lC, Civilian &civil)
{
    int nCivil = find(civil);
    if (nCivil == -1)
        //return (false);

    lC.erase(lC.begin()+nCivil);
    //return (true);
}
