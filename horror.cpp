#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>

void soundScare() {
    system("echo CreateObject(\"Wscript.Shell\").Run \"cmd /c powershell [console]::beep(2000,800)\",0,true > sound.vbs && sound.vbs");
}

int main() {
    std::setlocale(LC_ALL, "en_US.UTF-8");
    std::string choice;

    std::cout << "== Russian Horror ==" << std::endl;
    sleep(2);
    std::cout << "Chapter One. Trip to the Dacha." << std::endl;
    sleep(1);
    std::cout << "-Finally going to the dacha! Gonna relax properly from the city hustle.." << std::endl;
    sleep(1);
    std::cout << "-Probably should stop by the store and buy some groceries, and BEER!" << std::endl;
    sleep(1);
    std::cout << "*You arrived and entered the store, picking out products*" << std::endl;
    sleep(1);
    std::cout << "*Lights suddenly go out*" << std::endl;
    sleep(1);
    std::cout << "-What the hell? Why did the lights go out at night?" << std::endl;
    std::cout << "-Hey! Is anyone here?" << std::endl;
    std::cout << "*You hear the sound of creaking doors*" << std::endl;
    sleep(1);
    std::cout << "-What the f***? Okay, I'll try to turn the lights on myself since there's nobody here!" << std::endl;
    sleep(1);
    std::cout << "1. Go to the service room" << std::endl;
    std::cout << "2. Go down to the basement" << std::endl;
    std::cout << "Choose: ";

    std::cin >> choice;

    if (choice == "1") {
        std::cout << "*Opened the door to the service room...*" << std::endl;
        soundScare();
        sleep(1);
        std::cout << "-WHAT WAS THAT? I'm freaking scared!" << std::endl;
        std::cout << "-Okay... I'll keep going, I need to turn on this damn light" << std::endl;
        sleep(1);
        std::cout << "You reached the electrical panel" << std::endl;
        std::cout << "1. Try to fix the electrical panel" << std::endl;
        std::cout << "2. Keep going forward" << std::endl;
        std::cout << "Choose: ";

        std::string choice2;
        std::cin >> choice2;
        if (choice2 == "1") {
            std::cout << "*You open the electrical panel*" << std::endl;
            sleep(1);
            std::cout << "-What the f*** am I supposed to do here? I only messed with these when I was 9 and got electrocuted!" << std::endl;
            std::cout << "-Okay, I'll try randomly" << std::endl;
            sleep(1);
            soundScare();
            std::cout << "YOU DIED! You got electrocuted!" << std::endl;
        }
        else if (choice2 == "2") {
            std::cout << "-Hope I find the exit..." << std::endl;
            sleep(2);
            std::cout << "-Let me check this room" << std::endl;
            sleep(1);
            std::cout << "-Ooh a cake! Is this for me?" << std::endl;
            std::cout << "-Well, there's nobody here... okay, just a little bit" << std::endl;
            sleep(2);
            std::cout << "-Wow, I ate so much! I'll just sit here and rest" << std::endl;
            sleep(1);
            std::cout << "*Sound of footsteps*" << std::endl;
            std::cout << "You shouldn't have eaten my cake!" << std::endl;
            std::cout << "-F*** you! You won't get me! *Breaks window and escapes*" << std::endl;
            std::cout << "CONGRATULATIONS! You escaped and ate cake!" << std::endl;
        }
    }
    else if (choice == "2") {
        std::cout << "-Okay, main thing is to do this carefully and quietly" << std::endl;
        sleep(1);
        std::cout << "-Oh, here's the basement! Let's open it" << std::endl;
        sleep(1);
        soundScare();
        std::cout << "A maniac appeared behind you! YOU DIED" << std::endl;
    }

    return 0;
}