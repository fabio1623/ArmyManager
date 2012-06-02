#include "function.hpp"

Civilian *createCivilian()
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

void displayCivilians(std::vector<Civilian *> lC)
{
    for (int i=0; i < lC.size(); i++)
    {
        std::cout << "Civil" + i + ": " << *lC[i] << std::endl;
    }
}

std::ostream &operator << (std::ostream &cout, Civilian const &other)
{
    cout << other.getFirstname() << ", " << other.getLastname() << ", ";
    cout << other.getCountry() << ", Force : " << other.getStrengh();
}

int findCivilian(std::vector <Civilian*> lC)
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
		if ((fN == '0' || lC[i]->firstName == fN) &&
			(lN == '0' || lC[i]->lastName == lN) &&
			(c == '0' || lC[i]->country == c))
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

bool deleteCivilian(std::vector <Civilian*> lC)
{
    bool find=0;
    int civilPosition = findCivilian(lC);

    if (civilPosition = -1)
        return (find);

    lC.erase(lC.begin()+civilPosition);
    return (find=1);
}
