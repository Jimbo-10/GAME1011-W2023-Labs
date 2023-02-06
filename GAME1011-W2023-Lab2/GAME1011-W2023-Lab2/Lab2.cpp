#include <iostream>

struct Weapon
{

    void weapon(std::string weaponName, int& damageValue)
    {
        this->weaponName = weaponName;
        this->damageValue = damageValue;
    }

    void weaponInformation(std::string weaponName, int& damageValue)
    {
        std::cout << "Name of the weapon is: " << this->weaponName << std::endl <<
            "Damage of the weapon: " << this->damageValue;

        for (int i = 0; i < 5; i++)
        {
            std::cout << "Abilities of the weapon: " << abilities[i] << std::endl;
        }
    }


    std::string weaponName;
    int damageValue;
    std::string abilities[];

};

struct Armour
{

    void armour(std::string armourName, std::string discription, int armourValue)
    {
        this->armourName = armourName;
        this->discription = discription;
        this->armourValue = armourValue;

        
    }

    void armourInformation(std::string armourName, std::string discription, int armourValue)
    {
        std::cout << "Name of the armour is: " << armourName << std::endl <<
            "Discription of the armour: " << discription << std::endl <<
            "Value of the armour: " << armourValue;
    }
    

    std::string armourName;
    std::string discription;
    int armourValue;

};

struct Character
{
    std::string characterName;
    std::string species;
    int startingHealthValue;
    std::string epicBackstory;
    Weapon* weapon;
    Armour* armour;
};

int main()
{
    std::string characterName = "Rhino";
    std::string species = "Zombie";
    std::string epicBackStory = "Zombie who roams around to fight against other zombies to save mankind";
    std::string nameOfWeapon = "Hell Bringer";
    std::string nameOfArmour = "Yamata Mirror";
    int initialHealth = 500;

    Character c1;
    Character c2;
    Character c3;

    std::cout << "Welcome to character customization!";
    std::cout << "Choose a name for your character: ";
    std::cin >> c1.characterName;
    std::cout << "Choose a species for your character: ";
    std::cin >> c1.species;
    std::cout << "Write your own back story: ";
    std::cin >> c1.epicBackstory;

    std::cout << "Choose a name for your character: ";
    std::cin >> c2.characterName;
    std::cout << "Choose a species for your character: ";
    std::cin >> c2.species;
    std::cout << "Write your own back story: ";
    std::cin >> c2.epicBackstory;

    std::cout << "Choose a name for your character: ";
    std::cin >> c3.characterName;
    std::cout << "Choose a species for your character: ";
    std::cin >> c3.species;
    std::cout << "Write your own back story: ";
    std::cin >> c3.epicBackstory;





}