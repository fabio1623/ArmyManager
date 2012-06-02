#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <stack>
#include <string>
#include <vector>
#include "Army.hpp"
#include "Civilian.hpp"
#include "Military.hpp"

Civilian *createCivilian();
void displayCivilians(std::vector<Civilian *> lC);
std::ostream &operator << (std::ostream &cout, Civilian const &other);
int findCivilian(std::vector<Civilian*> lC);
bool deleteCivilian(std::vector<Civilian*> lC);
void infoMilitary();
//void


//std::cout << "  4-Recruter un militaire." << std::endl;
//std::cout << "  5-Lister les militaires." << std::endl;
//std::cout << "  6-Envoyer un militaire en guerre." << std::endl;
//std::cout << "  7-Relever un militaire." << std::endl;
//std::cout << "  8-Promouvoir un militaire." << std::endl;
//std::cout << "  9-Sauvegarder." << std::endl << std::endl;
//std::cout << "  10-Charger." << std::endl;
//std::cout << "  11-Quitter." << std::endl;

#endif // FUNCTION_HPP
