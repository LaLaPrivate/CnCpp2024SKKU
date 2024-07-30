// 15. Struct
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring> 

struct Hero{
	int health;
	int mana;
	float exp;
	int level;
};

int main() { 
	
	Hero hero;
	hero.level = 1;
	hero.health = 120;
	hero.mana = 50;
	hero.exp = 0;

	printf("hero.level: %d\n", hero.level);
	printf("hero.health: %d\n", hero.health);
	printf("hero.mana: %d\n", hero.mana);
	printf("hero.exp: %f\n", hero.exp);

	return 0;
} 