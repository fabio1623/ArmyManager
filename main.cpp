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
    std::vector<Civilian> civilList;
    bool suppressed, sent, fired, promoted, recruited;
    Army army1;

    Civilian civ1("Fabio", "Pedro", "Pt", 5);
    Civilian civ2("Adnan", "Rihan", "Fr", 10);

    civilList.push_back(civ1);
    civilList.push_back(civ2);

    army1.recruit(civ1);
    army1.recruit(civ2);

    while (choix != 11)
        {
            std::cout << "##########################" << std::endl;
            std::cout << std::endl << "Menu :" << std::endl << std::endl;
            std::cout << "  1-Creer un civil." << std::endl;
            std::cout << "  2-Lister les civils." << std::endl;
            std::cout << "  3-Supprimer un civil." << std::endl;
            std::cout << "  4-Recruter un militaire." << std::endl;
            std::cout << "  5-Lister les militaires." << std::endl;
            std::cout << "  6-Envoyer un militaire en guerre." << std::endl;
            std::cout << "  7-Relever un militaire." << std::endl;
            std::cout << "  8-Promouvoir un militaire." << std::endl << std::endl;
            std::cout << "  9-Sauvegarder." << std::endl;
            std::cout << "  10-Charger." << std::endl;
            std::cout << "  11-Quitter." << std::endl << std::endl;

            std::cout << "Choix: ";
            std::cin >> choix;
            std::cout << std::endl;
            switch (choix) {
                case 1:
                createCivilian(civilList);
                    break;
                case 2:
                displayCivilians(civilList);
                        break;
                case 3:
                suppressed = deleteCivilian(civilList);
                std::cout << suppressed;
                        break;
                case 4:
                recruited = army1.recruit(civilList[findCivilian(civilList)]);
                fire(civilList, civil);
                std::cout << recruited;
                        break;
                case 5:
                army1.displayMilitaries();
                        break;
                case 6:
                sent = army1.sendToWar(army1.getTroops().at(findMilitary(army1.getTroops())));
                std::cout << sent;
                        break;
                case 7:
                fired = army1.fire(army1.getTroops()[findMilitary(army1.getTroops())]);
                std::cout << fired;
                        break;
                case 8:
                promoted = army1.promote(findMilitary(army1.getTroops()));
                std::cout << promoted;
                        break;
                case 9:

                        break;
                case 10:

                        break;
                case 11:

                        break;
            }
    }
	return 0;
}

