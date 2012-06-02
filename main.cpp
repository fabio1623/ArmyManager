//
//  main.cpp
//  ArmyManager
//
//  Created by Fabio SARMENTO PEDRO on 28/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Civilian.hpp"
#include "Military.hpp"
#include "Army.hpp"
#include "function.hpp"

int main ()
{
    int choix = 0;
    std::vector<Civilian*> civilList;
    Army army1 = new Army();

    while (choix != 11)
        {
            std::cout << std::endl << "Menu :" << std::endl;
            std::cout << "  1-Creer un civil." << std::endl;
            std::cout << "  2-Lister les civils." << std::endl;
            std::cout << "  3-Supprimer un civil." << std::endl;
            std::cout << "  4-Recruter un militaire." << std::endl;
            std::cout << "  5-Lister les militaires." << std::endl;
            std::cout << "  6-Envoyer un militaire en guerre." << std::endl;
            std::cout << "  7-Relever un militaire." << std::endl;
            std::cout << "  8-Promouvoir un militaire." << std::endl;
            std::cout << "  9-Sauvegarder." << std::endl << std::endl;
            std::cout << "  10-Charger." << std::endl;
            std::cout << "  11-Quitter." << std::endl;

            std::cout << "Choix ?: ";
            std::cin >> choix;

            switch (choix) {
                case 1:
                civilList.push_back(createCivilian());
                    break;
                case 2:
                displayCivilians(civilList);
                        break;
                case 3:
                deleteCivilian(civilList);
                        break;
                case 4:
                army1.recruit(civilList[findCivilian(civilList)]);
                        break;
            }
    }
	return 0;
}

