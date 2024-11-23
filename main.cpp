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
#include "Character/Character.h"

//Include State Machine
#include "States/CharacterState.h"
#include "States/IdleState.h"
#include "States/DefendState.h"
#include "States/AttackState.h"

using namespace std;

//create static states for player (static to save exec time)
static IdleState pcIdle;
static AttackState pcAttack;
static DefendState pcDefend;

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
    cout << "Enter Character Type: " << endl;
    cout << "1. The Unbreakable Shield - A Higher Defense Adventurer who can brush off more damage." << endl;
    cout << "2. The Living Bastion - A Faster Recovery Adventurer who can take a hit and get back into the fight." << endl;
    cout << "3. The Colossal Crusher - A Higher Damage Adventurer who can hit enemies for more damage." << endl;
    cout << "4. The Blinding Whirlwind - A Faster Cool Down Adventurer who can swing their weapon more often." << endl;
    
    int type;
    cin >> type;
    
    // Create Character Based on Type
    switch (type)
    {
        case 1: // Defense Tank
            playerCharacter = Character(name, Offense(100, 100), Defense(500, 1, 120, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Unbreakable Shield." << endl;
            break;
        case 2: // Recovery Tank
            playerCharacter = Character(name, Offense(100, 100), Defense(500, 1, 100, 80));
            cout << "Welcome to the Text Trials, " << name << ", The Living Bastion." << endl;
            break;
        case 3: // Heavy Hitter
            playerCharacter = Character(name, Offense(120, 100), Defense(500, 1, 100, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Colossal Crusher." << endl;
            break;
        case 4: // Fast Hitter
            playerCharacter = Character(name, Offense(100, 80), Defense(500, 1, 100, 100));
            cout << "Welcome to the Text Trials, " << name << ", The Blinding Whirlwind." << endl;
            break;
        default: // Default
            cout << "Invalid choice. Defaulting to The Average Joe." << endl;
            playerCharacter = Character(name, Offense(110, 100), Defense(500, 1, 110, 100));
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
            playerCharacter.setWeapon(Weapon("Sword", 1.5, 1));
            cout << "I see you have a sword, a great tool to slash through your enemies." << endl;
            break;
        case 2:
            playerCharacter.setWeapon(Weapon("Axe", 2.0, 1.5));
            cout << "I see you have an axe, a mighty weapon to crush your enemies." << endl;
            break;
        case 3:
            playerCharacter.setWeapon(Weapon("Mace", 1.75, 1.25));
            cout << "I see you have a mace, a brutal weapon to break your enemies." << endl;
            break;
        case 4:
            playerCharacter.setWeapon(Weapon("Spear", 1.25, 0.75));
            cout << "I see you have a spear, a long weapon to keep your enemies at bay." << endl;
            break;
        case 5:
            playerCharacter.setWeapon(Weapon("Dagger", 1.0, 0.5));
            cout << "I see you have a dagger, a swift weapon to strike your enemies." << endl;
            break;
        default:
            cout << "Invalid choice. Defaulting to Stick." << endl;
            playerCharacter.setWeapon(Weapon("Stick", 0.90, 0.40));
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
            playerCharacter.setArmour(Armour("Leather Armor", 1.5, 1.0));
            cout << "I see you have leather armor, a good balance of protection and mobility." << endl;
            break;
        case 2: // Plate Armor: Higher defense, longer recovery
            playerCharacter.setArmour(Armour("Plate Armor", 2.25, 1.75));
            cout << "I see you have plate armor, a heavy armor that offers excellent protection." << endl;
            break;
        case 3: // Scale Armor: Balanced between protection and recovery
            playerCharacter.setArmour(Armour("Scale Armor", 2.0, 1.5));
            cout << "I see you have scale armor, a sturdy armor that offers a good protection." << endl;
            break;
        case 4: // Chainmail: Good defense, balanced recovery
            playerCharacter.setArmour(Armour("Chainmail", 1.75, 1.25));
            cout << "I see you have chainmail, a flexible armor that provides good protection and mobility." << endl;
            break;
        case 5: // Cloth Robes: Low defense, quick recovery
            playerCharacter.setArmour(Armour("Cloth Robes", 1.25, 0.75));
            cout << "I see you have cloth robes, simple robes that offer minimal protection but allow for quick movement." << endl;
            break;
        default: // Invalid choice, default to Leather Armor
            cout << "Invalid choice. Defaulting to No Clothes." << endl;
            playerCharacter.setArmour(Armour("No Clothes", 0.90, 0.40));
            cout << "I see you have no clothes, is the absence of armor a type of armor?" << endl;
            break;
    }
}

Character createEnemy()
{
    cout << "You have encountered an enemy!" << endl;
    int enemyType = rand() % 101;

    if (enemyType < 50)
    {
        cout << "It's a weak enemy!" << endl;
        int subType = rand() % 5;
        switch (subType)
        {
            case 0:
                return Character("Rat", Offense(150, 100), Defense(125, 1, 150, 100));
            case 1:
                return Character("Bat", Offense(150, 100), Defense(125, 1, 150, 100));
            case 2:
                return Character("Wolf", Offense(150, 100), Defense(125, 1, 150, 100));
            case 3:
                return Character("Spider", Offense(150, 100), Defense(125, 1, 150, 100));
            case 4:
                return Character("Snake", Offense(150, 100), Defense(125, 1, 150, 100));
        }
    }
    else if (enemyType < 75)
    {
        cout << "It's a medium enemy!" << endl;
        int subType = rand() % 2;
        switch (subType)
        {
            case 0:
                return Character("Goblin", Offense(150, 100), Defense(250, 1, 150, 100));
            case 1:
                return Character("Zombie", Offense(150, 100), Defense(250, 1, 150, 100));
        }
    }
    else if (enemyType < 90)
    {
        cout << "It's a strong enemy!" << endl;
        return Character("Orc", Offense(150, 100), Defense(500, 1.25, 150, 100));
    }
    else if (enemyType < 95)
    {
        cout << "It's a very strong enemy!" << endl;
        return Character("Troll", Offense(150, 100), Defense(750, 1.5, 150, 100));
    }
    else if (enemyType < 100)
    {
        cout << "It's a boss enemy!" << endl;
        return Character("Dragon", Offense(150, 100), Defense(1000, 2, 150, 100));
    }
    else if (enemyType == 100)
    {
        cout << "It's a secret enemy!" << endl;
        return Character("Demon", Offense(150, 100), Defense(1500, 3, 150, 100));
    }

    cout << "It's a mysterious enemy!" << endl;
    return Character("Mysterious Being", Offense(150, 100), Defense(2000, 1, 150, 100));
}

void battle(Character& playerCharacter, Character& Enemy)
{
	//creation of state objects for enemy, should not persist between encounters
    IdleState enmIdle = IdleState(&Enemy);
	AttackState enmAttack = AttackState(&Enemy);
	DefendState enmDefend = DefendState(&Enemy);
	
	//sets enemy state to idle
	Enemy.setState(&enmIdle);
	(*(Enemy.getState())).Enter();
	
	//player and enemy start based on their respective recovery stats
	//the one with a faster recovery will act first
	playerCharacter.setTick(playerCharacter.getDefense().getRecovery());
	Enemy.setTick(Enemy.getDefense().getRecovery());
	
    while (!(playerCharacter.getAlive()) && !(Enemy.getAlive()))
    {
    	//Both parties decrement tick value
    	(*(playerCharacter.getState())).Tick();
    	(*(Enemy.getState())).Tick();
    	
    	//player has slight advantage, evaluating first and winning ties if speeds are equal
    	if (playerCharacter.getTick() == 0)//player is attacking
    	{
    		(*(playerCharacter.getState())).Exit();
    		(*(Enemy.getState())).Exit();
    		
    		//enemy enters defendState
    		Enemy.setState(&enmDefend);
			(*(Enemy.getState())).Enter();
			
			//player enters attackState
			playerCharacter.setState(&pcAttack);
			(*(dynamic_cast<AttackState*>(playerCharacter.getState()))).Enter(Enemy);//must force a downcast and dereference to get the proper entry function
			
			//both parties exit
			(*(playerCharacter.getState())).Exit();
    		(*(Enemy.getState())).Exit();
    		
    		//enemy enters idleState
    		Enemy.setState(&enmIdle);
			(*(Enemy.getState())).Enter();
			
			//player enters idleState
			playerCharacter.setState(&pcIdle);
			(*(playerCharacter.getState())).Enter();
		}
		else if (Enemy.getTick() == 0 )//enemy attacks first
		{
			(*(playerCharacter.getState())).Exit();
    		(*(Enemy.getState())).Exit();
    		
    		//player enters defendState
    		playerCharacter.setState(&pcDefend);
			(*(playerCharacter.getState())).Enter();
			
			//enemy enters attackState
			Enemy.setState(&enmAttack);
			(*(dynamic_cast<AttackState*>(Enemy.getState()))).Enter(playerCharacter);
			
			//both parties exit
			(*(playerCharacter.getState())).Exit();
    		(*(Enemy.getState())).Exit();
    		
    		//enemy enters idleState
    		Enemy.setState(&enmIdle);
			(*(Enemy.getState())).Enter();
			
			//player enters idleState
			playerCharacter.setState(&pcIdle);
			(*(playerCharacter.getState())).Enter();
		}
    	
    	if (playerCharacter.getAlive())//checks if the player is dead
    	{
    		cout << "You have been defeated by the " << Enemy.getName() << "!" << endl;
    		break;
		}
		
		if (Enemy.getAlive()) //checks if enemy is dead
		{
			cout << "You have defeated the " << Enemy.getName() << "!" << endl;
			playerCharacter.addExp(Enemy.getLevel() * 10);
			break;
			
		}
    }
    
}

void goOnJourney(Character& playerCharacter)
{
    int levelCount = playerCharacter.getLevel();
    cout << "You have found yourself in front of a dungeon with " << levelCount << " room(s)." << endl;

    for (int i = 0; i < levelCount; i++)
    {
        Character enemy = createEnemy();
        cout << "In room " << i << ", you encounter a " << enemy.getName() << "!" << endl;
        for (int j = 0; j < levelCount; j++)
        {
            enemy.levelUp();
        }
        battle(playerCharacter, enemy);
    }
    if (playerCharacter.getAlive())
    {
        cout << "Congratulations! You have cleared the" << levelCount <<" dungeon and found a chest with a health potion inside." << endl;
        playerCharacter.getDefense().Heal(levelCount * 100);
    }
}

// Main Method
int main() 
{
    //A Flavorful Welcome Message
    cout << "Welcome to the Text Trials, who knows where your adventure might lead." << endl;
    // Create Character
    Character playerCharacter = createCharacter();
    equipWeapon(playerCharacter);
    equipArmour(playerCharacter);
    //assign static states for player
	pcIdle = IdleState(&playerCharacter);
	pcAttack = AttackState(&playerCharacter);
	pcDefend = DefendState(&playerCharacter);
	
	//set idle state for player
	playerCharacter.setState(&pcIdle);
	(*playerCharacter.getState()).Enter();
    
    // Start The Journey
    cout << "You are now ready to begin your journey, " << playerCharacter.getName() << "." << endl;
    cout << "Good luck and may the odds be ever in your favor." << endl;
    goOnJourney(playerCharacter);
    // Ask if the player wants to go on another journey
    while (true)
    {
        cout << "Would you like to go on another journey?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            goOnJourney(playerCharacter);
        }
        else
        {
            break;
        }
    }
    cout << "Thank you for playing the Text Trials, we hope you enjoyed your adventure." << endl;
    return 0;
}
