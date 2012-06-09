#include "function.hpp"

void createCivilian(Army &army)
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
    army.getApplicants().push_back(*civil);
}

void displayCivilians(Army &army)
{
    for (unsigned int i=0; i < army.getApplicants().size(); i++)
    {
        std::cout << "Civil " << i << ": " << army.getApplicants()[i] << std::endl;
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
    cout << other.getCountry() << ", Force : " << other.getStrength() << ", Grade : " << other.getRank() << ", Type : ";
    cout << other.getType() << ", Arme : " << other.getWeapon();

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

void deleteCivilian(Army &army)
{
    int civilPosition = findCivilian(army.getApplicants());

    if (civilPosition != -1)
    army.getApplicants().erase(army.getApplicants().begin()+civilPosition);
}
