#ifndef Offense_h
#define Offense_h

#include <string>
using namespace std;

class Offense {

 public:
 	Offense();
 	Offense(float dam, float cd);

    void levelUpDamage();
	void levelUpCoolDown();
	float getDamage();
    float getCoolDown();

 public:
 	float damage;
 	float coolDown;
};

#endif
