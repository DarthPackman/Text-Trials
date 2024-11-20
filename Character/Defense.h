#ifndef DEFENSE_H
#define DEFENSE_H

#include <string>

class Defense
{
    private:
        int currentHealthPoints;
        int maxHealthPoints;
        float regeneration;
        float recovery;
        float defense;
    
    public:
        // Constructors
        Defense();
        Defense(int hp, float regen, float recov, float def);
        
        // Getters
        int getHealthPoints();
        float getRegeneration();
        float getRecovery();
        float getDefense();

        // Take & Heal Methods
        void TakeDamage(int damage);
        void Heal(int heals);
        void Regenerate();

        // Level Up Methods
        void levelUpHealthPoints();
        void levelUpRegeneration();
        void levelUpRecovery();
        void levelUpDefense();
};

#endif // DEFENSE_H
