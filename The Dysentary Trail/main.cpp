//
//  main.cpp
//  The Dysentary Trail
//
//  Copyright © 2018 Rowan Feely. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <string>
using namespace std;


int main()
{
    {
        std::cout << "\n\n\n\t\t\t\tL O A D I N G" << std::endl;
        std::cout << "\t\t" << std::endl;
        std::cout << "█";
        sleep(1);
        std::cout << "████";
        sleep(1);
        std::cout << "█████████████████";
        sleep(1);
        std::cout << "████████████████████████████\n\n\n\n\n\n\n";
        sleep(2);
        system("clear");
    }

    
    std::cout <<       "     ▄▄▄█████▓██░ ██▓█████    ▓█████▄ ██▓ ██████▓█████ ███▄    █▄▄▄█████▓▄▄▄      ██▀███▓██   ██▓   ▄▄▄█████▓██▀███  ▄▄▄      ██▓██▓      " << std::endl;
    std::cout <<       "     ▓  ██▒ ▓▓██░ ██▓█   ▀    ▒██▀ ██▓██▒██    ▒▓█   ▀ ██ ▀█   █▓  ██▒ ▓▒████▄   ▓██ ▒ ██▒██  ██▒   ▓  ██▒ ▓▓██ ▒ ██▒████▄   ▓██▓██▒      " << std::endl;
    std::cout <<       "     ▒ ▓██░ ▒▒██▀▀██▒███      ░██   █▒██░ ▓██▄  ▒███  ▓██  ▀█ ██▒ ▓██░ ▒▒██  ▀█▄ ▓██ ░▄█ ▒▒██ ██░   ▒ ▓██░ ▒▓██ ░▄█ ▒██  ▀█▄ ▒██▒██░      " << std::endl;
    std::cout <<       "     ░ ▓██▓ ░░▓█ ░██▒▓█  ▄    ░▓█▄   ░██░ ▒   ██▒▓█  ▄▓██▒  ▐▌██░ ▓██▓ ░░██▄▄▄▄██▒██▀▀█▄  ░ ▐██▓░   ░ ▓██▓ ░▒██▀▀█▄ ░██▄▄▄▄██░██▒██░      " << std::endl;
    std::cout <<       "       ▒██▒ ░░▓█▒░██░▒████▒   ░▒████▓░██▒██████▒░▒████▒██░   ▓██░ ▒██▒ ░ ▓█   ▓██░██▓ ▒██▒░ ██▒▓░     ▒██▒ ░░██▓ ▒██▒▓█   ▓██░██░██████▒      " << std::endl;
    std::cout <<       "       ▒ ░░   ▒ ░░▒░░░ ▒░ ░    ▒▒▓  ▒░▓ ▒ ▒▓▒ ▒ ░░ ▒░ ░ ▒░   ▒ ▒  ▒ ░░   ▒▒   ▓▒█░ ▒▓ ░▒▓░ ██▒▒▒      ▒ ░░  ░ ▒▓ ░▒▓░▒▒   ▓▒█░▓ ░ ▒░▓  ░      " << std::endl;
    std::cout <<       "         ░    ▒ ░▒░ ░░ ░  ░    ░ ▒  ▒ ▒ ░ ░▒  ░ ░░ ░  ░ ░░   ░ ▒░   ░     ▒   ▒▒ ░ ░▒ ░ ▒▓██ ░▒░        ░     ░▒ ░ ▒░ ▒   ▒▒ ░▒ ░ ░ ▒  ░      " << std::endl;
    std::cout <<       "       ░      ░  ░░ ░  ░       ░ ░  ░ ▒ ░  ░  ░    ░     ░   ░ ░  ░       ░   ▒    ░░   ░▒ ▒ ░░       ░       ░░   ░  ░   ▒   ▒ ░ ░ ░      " << std::endl;
    std::cout <<       "              ░  ░  ░  ░  ░      ░    ░       ░    ░  ░        ░              ░  ░  ░    ░ ░                   ░          ░  ░░     ░  ░      " << std::endl;
    std::cout <<       "                               ░                                                         ░ ░      " << std::endl;
    std::cout << std::endl;
    std::cout << "   .****************************************************************************************************************************************" << std::endl;
    std::cout << "   |                                                                                                                                      |/" << std::endl;
    std::cout << "   | YOU MAY:                                                                                                                             |/ " << std::endl;
    std::cout << "   |                                                                                                                                      |/ " << std::endl;
    std::cout << "   |    Experience the Trail - Type 'play'                                                                                                |/ " << std::endl;
    std::cout << "   |    See Map - Type 'map'                                                                                                              |/ " << std::endl;
    std::cout << "   |    Seek help - Type 'help'                                                                                                           |/ " << std::endl;
    std::cout << "   |    Learn About the Trail - Type 'goto locationName'                                                                                  |/ " << std::endl;
    std::cout << "   |    End - Type 'quit'                                                                                                                 |/ " << std::endl;
    std::cout << "   |                                                                                                                                      |/ " << std::endl;
    std::cout << "   | What is your choice?                                                                                                                 |/ " << std::endl;
    std::cout << "   |                                                                                                                                      |/ " << std::endl;
    std::cout << "   |                                                                                                                                      |/ " << std::endl;
    std::cout << "   |______________________________________________________________________________________________________________________________________|/" << std::endl;
    std::cout << "   ***************************************************************************************************************************************/" << std::endl;
    
   // str choice;
    bool gameOn = true;
    while (gameOn != false) {
   // cin >> choice;
        string choice;
        cin >> choice;
        if (choice=="play") {
            system("clear");
            string currentRoom="Entrance";
            cout << "You have arrived at the castle, but there has been a murder..." << std::endl;
            cout << "You are at the " + currentRoom << std::endl;
            cout << "What now?";
           
            /*
            bool gameOn = true;
            while (gameOn != false) {
            string choice2;
            cin >> choice2;
                
            if (choice2=="goto bedroom") {
                string currentRoom="Bedroom";
        }
            else if (choice2=="goto garage") {
                string currentRoom="garage";
                cout << "description of garage" << std::endl;
                cout << "What now?";
            }
            else if (choice2=="goto lounge") {
                string currentRoom="lounge";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }
            else if (choice2=="goto hall") {
                string currentRoom="hall";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }
            else if (choice2=="goto entrance") {
                string currentRoom="entrance";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }
            else if (choice2=="goto garden") {
                string currentRoom="garden";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }
            else if (choice2=="goto yard") {
                string currentRoom="yard";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }
            else if (choice2=="goto study") {
                string currentRoom="study";
             cout << "description of garage" << std::endl;
             cout << "What now?";
            }*/
            
            }
            else if (choice=="map") {
                system("clear");
                cout << "+----------+-----------+----------+" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "| bedroom  |   study   |  garage  |" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "+----------+-----------+----------+" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "|  lounge  |    hall   | entrance |" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "+----------+-----------+----------+" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "|  garden  |  balcony  |   yard   |" <<
                std::endl;
                cout << "|          |           |          |" <<
                std::endl;
                cout << "+----------+-----------+----------+" <<
                std::endl;
        }
        
            else if (choice=="help") {
                system("clear");
                std::cout << "   .****************************************************************************************************************************************" << std::endl;
                std::cout << "   |                                                                                                                                      |/" << std::endl;
                std::cout << "   | HELP:                                                                                                                                |/ " << std::endl;
                std::cout << "   |     To move around the castle: GOTO roomname                                                                                         |/ " << std::endl;
                std::cout << "   |     To leave the castle at any time: quit                                                                                            |/ " << std::endl;
                std::cout << "   |     To examine items in room: x roomname                                                                                             |/ " << std::endl;
                std::cout << "   |     To examine specific item: x itemname                                                                                             |/ " << std::endl;
                std::cout << "   |     To get an item from current room: get itemname, drop itemname to drop it                                                         |/ " << std::endl;
                std::cout << "   |     To view inventory: inv                                                                                                           |/ " << std::endl;
                std::cout << "   |     To question suspect: q suspect                                                                                                   |/ " << std::endl;
                std::cout << "   |     To accuse of murder: charge firstname                                                                                            |/ " << std::endl;
                std::cout << "   |     To gather suspects: g suspects                                                                                                   |/ " << std::endl;
                std::cout << "   |     To view help from game: help                                                                                                     |/ " << std::endl;
                std::cout << "   |______________________________________________________________________________________________________________________________________|/" << std::endl;
                std::cout << "   ***************************************************************************************************************************************/" << std::endl;
            }
            else if (choice=="goto locationName") {
                system("clear");
                cout << "goto locationName";
            }
            else if (choice=="quit") {
                return 0;
            }
            else if (choice!="play" || choice!="help" || choice!="map") {
                cout << "Invalid choice,";
                cout << "choose more carefully this time.";
            }

    }
    
}


