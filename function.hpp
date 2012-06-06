#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <stack>
#include <string>
#include <vector>
#include "Army.hpp"
#include "Civilian.hpp"
#include "Military.hpp"

Civilian createCivilian();
void displayCivilians(std::vector<Civilian> lC);
std::ostream &operator << (std::ostream &cout, Civilian const &other);
std::ostream &operator << (std::ostream &cout, Military const &other);
int findCivilian(std::vector <Civilian> lC);
int findMilitary(std::vector <Military> lM);
bool deleteCivilian(std::vector<Civilian> lC);

#endif // FUNCTION_HPP
