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

void displayCivilians(std::vector<Civilian*>lC)
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
    std::string fN, lN, c;
    int position = -1;

    std::cout << "Nom : " << std::endl;
    std::cin >> fN >> std::endl;
    std::cout << "Prenom : " << std::endl;
    std::cin >> lN >> std::endl;
    std::cout << "Pays : " << std::endl;
    std::cin >> c >> std::endl;

    for (int i=0; i < lC.size(); i++)
    {
        if ((lC[i]->firstName == fN) && (lC[i]->lastName == lN) && (lC[i]->country == c))
            return (position=i);
    }
    return (position);
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
