/*  
    Main Method For Text Trails
    By: Gavin Edwards, Calvin Thomschke, Crow McMillan
    Date: 11/14/2024
    Date Due: 11/22/2024
*/

// Include Statements
#include <iostream>
#include <string>
#include <vector>

// Include Header Files
#include "Character.h"

using namespace std;

// Main Method
int main() 
{
    //A Flavorful Welcome Message
    cout << "Welcome to the Text Trials, who knows where your adventure might lead." << endl;
    // Create Character
    Character playerCharacter = createCharacter();
    equipWeapon(playerCharacter);
    equipArmour(playerCharacter);
    // Start The Journey
    cout << "You are now ready to begin your journey, " << playerCharacter.getName() << "." << endl;
    cout << "Good luck and may the odds be ever in your favor." << endl;
    goOnJourney(playerCharacter);
    return 0;
}

Character createCharacter()
{
    Character playerCharacter;
    cout << "Before you venture out I will need to know more about you." << endl;

    // Get Character Name from User
    cout << "What should I call you adventurer?" << endl;
    cout << "Enter Character Name: ";
    string name;
    cin >> name;

    // Get Character Type from User
    cout << "How do people describe you?" << endl;
    cout << "Enter Character Type: ";
    cout << "1. The Unbreakable Sheild - A Higher Defense Adventurer who can brush off more damage." << endl;
    cout << "2. The Living Bastion - A Faster Recovery Adventurer who can take a hit and get back into the fight." << endl;
    cout << "3. The Colossal Crusher - A Higher Damage Adventurer who can hit enemies for more damage." << endl;
    cout << "4. The Blinding Whirlwind - A Faster Cool Down Adventurer who can swing there weapon more often." << endl;
    cout << "5. The Immortal Juggernaut - A Higher Health and Regen Adventurer who can take more hits." << endl;
    int type;
    cin >> type;
    switch (type)
    {
        case 1: // Defense Tank
            playerCharacter = new Character(name, new Offense(100, 100), new Defense(100, 1, 115, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Unbreakable Shield." << endl;
            break;
        case 2: // Recovery Tank
            playerCharacter = new Character(name, new Offense(100, 100), new Defense(115, 1, 100, 90));
            cout << "Welcome to the Text Trials, " << name << ", The Living Bastion." << endl;
            break;
        case 3: // Heavy Hitter
            playerCharacter = new Character(name, new Offense(115, 100), new Defense(100, 1, 100, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Colossal Crusher." << endl;
            break;
        case 4: // Fast Hitter
            playerCharacter = new Character(name, new Offense(100, 85), new Defense(100, 1, 100, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Blinding Whirlwind." << endl;
            break;
        case 5: // High HP/Regen
            playerCharacter = new Character(name, new Offense(100, 100), new Defense(110, 1.5, 100, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Immortal Juggernaut." << endl;
            break;
        default: // Default
            cout << "Invalid choice. Defaulting to The Average Joe." << endl;
            playerCharacter = new Character(name, new Offense(105, 100), new Defense(105, 1, 105, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Average Joe." << endl;
            break;
    }
    return playerCharacter;
}

void equipWeapon(Character& playerCharacter)
{
    cout << "What weapon have your brought with you " << playerCharacter.getName() << "?" << endl;
    // Present the player with 5 different melee weapons to choose from
    cout << "Choose a weapon: " << endl;
    cout << "1. Sword - A balanced and reliable weapon, offering a perfect mix of speed and power for any seasoned warrior." << endl;
    cout << "2. Axe - A mighty, heavy-hitting weapon that delivers devastating blows, but requires time to recover between strikes." << endl;
    cout << "3. Mace - A brutal, crushing weapon designed to break through armor, with a good balance of power and control." << endl;
    cout << "4. Spear - A long-reaching weapon, ideal for keeping enemies at bay, trading raw power for speed and precision." << endl;
    cout << "5. Dagger - A swift and agile blade for those who favor speed over strength, perfect for quick and deadly strikes." << endl;

    // Get the player's choice
    int weaponChoice;
    cin >> weaponChoice;

    // Equip the player with the weapon of their choice
    switch (weaponChoice)
    {
        case 1:
            playerCharacter.weapon = new Weapon("Sword", 1.5, 1);
            cout << "I see you have a sword, a great tool to slash through your enemies." << endl;
            break;
        case 2:
            playerCharacter.weapon = new Weapon("Axe", 2.0, 1.5);
            cout << "I see you have an axe, a mighty weapon to crush your enemies." << endl;
            break;
        case 3:
            playerCharacter.weapon = new Weapon("Mace", 1.75, 1.25);
            cout << "I see you have a mace, a brutal weapon to break your enemies." << endl;
            break;
        case 4:
            playerCharacter.weapon = new Weapon("Spear", 1.25, 0.75);
            cout << "I see you have a spear, a long weapon to keep your enemies at bay." << endl;
            break;
        case 5:
            playerCharacter.weapon = new Weapon("Dagger", 1.0, 0.5);
            cout << "I see you have a dagger, a swift weapon to strike your enemies." << endl;
            break;
        default:
            cout << "Invalid choice. Defaulting to Stick." << endl;
            playerCharacter.weapon = new Weapon("Stick", 0.90, 0.40);
            cout << "I see you have a stick, I guess that counts as a weapon." << endl;
            break;
    }
}

void equipArmour(Character& playerCharacter)
{
    cout << "What armor do you wear " << playerCharacter.getName() << "?" << endl;
    // Present the player with 5 different armor sets to choose from
    cout << "Choose an armor set: " << endl;
    cout << "1. Leather Armor - Lightweight armor that offers strong protection and decent mobility, perfect for scouts and rogues." << endl;
    cout << "2. Plate Armor - Heavy, durable armor that offers excellent protection against physical attacks, but slows the wearer down." << endl;
    cout << "3. Scale Armor - Sturdy armor made of overlapping metal scales, offering a good balance of protection and mobility." << endl;
    cout << "4. Chainmail - Flexible armor that provides good protection without sacrificing too much mobility, ideal for agile fighters." << endl;
    cout << "5. Cloth Robes - Simple, lightweight robes that offer minimal protection but allow for quick and silent movement." << endl;

    // Get the player's choice
    int armourChoice;
    cin >> armourChoice;

    // Equip the player with the armor of their choice
    switch (armourChoice)
    {
        case 1: // Leather Armor (default choice)
            playerCharacter.armour = new Armour("Leather Armor", 1.5, 1.0);
            cout << "I see you have leather armor, a good balance of protection and mobility." << endl;
            break;
        case 2: // Plate Armor: Higher defense, longer recovery
            playerCharacter.armour = new Armour("Plate Armor", 2.25, 1.75);
            cout << "I see you have plate armor, a heavy armor that offers excellent protection." << endl;
            break;
        case 3: // Scale Armor: Balanced between protection and recovery
            playerCharacter.armour = new Armour("Scale Armor", 2.0, 1.5);
            cout << "I see you have scale armor, a sturdy armor that offers a good protection." << endl;
            break;
        case 4: // Chainmail: Good defense, balanced recovery
            playerCharacter.armour = new Armour("Chainmail", 1.75, 1.25);
            cout << "I see you have chainmail, a flexible armor that provides good protection and mobility." << endl;
            break;
        case 5: // Cloth Robes: Low defense, quick recovery
            playerCharacter.armour = new Armour("Cloth Robes", 1.25, 0.75);
            cout << "I see you have cloth robes, simple robes that offer minimal protection but allow for quick movement." << endl;
            break;
        default: // Invalid choice, default to Leather Armor
            cout << "Invalid choice. Defaulting to no clothes." << endl;
            playerCharacter.armour = new Armour("No Clothes", 0.90, 0.40);
            cout << "I see you have no clothes, is the absence of armor a type of armor?" << endl;
            break;
    }
}

void goOnJourney(Character& playerCharacter)
{
    // Create a vector of enemies
    vector<Character> enemies;
    // Use A Randomizer to add select an enemy
    enemies.push_back(createEnemy());

    // Battle each enemy in the vector
    for (int i = 0; i < playerCharacter.getLevel(); i++)
    {
        cout << "You encounter a " << enemies[i].getName() << "!" << endl;
        battle(playerCharacter, enemies[i]);
    }
    playerCharacter.heal();
}

void battle(Character& playerCharacter, Character& Enemy)
{
    
}

Character createEnemy()
{
    // Randomly select an enemy type
    int enemyType = rand(0, 101);
    switch (enemyType)
    {
        //Case less then 50
        case < 50:
            enemyType = rand(0, 5);
            switch (enemyType)
            {
                case 0:
                    return new Character("Rat", new Offense(150, 100), new Defense(25, 1, 150, 100));
                    break;
                case 1:
                    return new Character("Bat", new Offense(150, 100), new Defense(25, 1, 150, 100));
                    break;
                case 2:
                    return new Character("Wolf", new Offense(150, 100), new Defense(25, 1, 150, 100));
                    break;
                case 3:
                    return new Character("Spider", new Offense(150, 100), new Defense(25, 1, 150, 100));
                    break;
                case 4:
                    return new Character("Snake", new Offense(150, 100), new Defense(25, 1, 150, 100));
                    break;
            }
            break;
        //Case less then 75
        case < 75:
            enemyType = rand(0, 2);
            switch (enemyType)
            {
                case 0:
                    return new Character("Goblin", new Offense(150, 100), new Defense(50, 1, 150, 100));
                    break;
                case 1:
                    return new Character("Zombie", new Offense(150, 100), new Defense(150, 1, 150, 100));
                    break;
            }
            break;
        //Case less then 90
        case < 90:
            return new Character("Orc", new Offense(150, 100), new Defense(105, 1.25, 150, 100));
            break;
        //Case less then 95
        case < 95:
            return new Character("Troll", new Offense(150, 100), new Defense(110, 1.5, 150, 100));
            break;
        //Case less then 100
        case < 100:
            return new Character("Dragon", new Offense(150, 100), new Defense(125, 2, 150, 100));
            break;
        //Case 100
        case 100:
            return new Character("Demon", new Offense(150, 100), new Defense(150, 3, 150, 100));
            break;
        default:
            break;
    }
}