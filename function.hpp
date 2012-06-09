#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include "Army.hpp"
#include "Civilian.hpp"
#include "Military.hpp"

void createCivilian(Army &army);
void displayCivilians(Army &army);
std::ostream &operator << (std::ostream &cout, Civilian const &other);
std::ostream &operator << (std::ostream &cout, Military const &other);
int findCivilian(std::vector<Civilian> &lC);
int findMilitary(std::vector<Military> &lM);
void deleteCivilian(Army &army);

#endif // FUNCTION_HPP
