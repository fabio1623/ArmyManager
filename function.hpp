#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include "Army.hpp"
#include "Civilian.hpp"
#include "Military.hpp"

void createCivilian(std::vector<Civilian> &lC);
void displayCivilians(std::vector<Civilian> &lC);
std::ostream &operator << (std::ostream &cout, Civilian const &other);
std::ostream &operator << (std::ostream &cout, Military const &other);
int findCivilian(std::vector<Civilian> &lC);
int findMilitary(std::vector<Military> &lM);
bool deleteCivilian(std::vector<Civilian> &lC);
void fire(std::vector<Civilian> &lC, Civilian &civil);

#endif // FUNCTION_HPP
