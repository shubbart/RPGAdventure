#include <iostream>
#include "Player.h"

struct Player
{
	string name;

	int lvl;
	int classnum;
	char pClass;
	


	int gold;
	int inv[];

};

struct playerWeapon
{
	int pWeapon;
};

struct playerArmor
{
	int pArmor;
};

struct playerClass
{
	int Warrior;
	int Paladin;
	int Wizard;
};

struct Warrior
{
	int wHp = 15 + (wCon / 3);
	int wMp = 8 + (wInt / 4);

	int wStr;
	int wInt;
	int wDex;
	int wCon;

};


struct Paladin
{
	int pHp = 20 + (pCon / 2);
	int pMp = 14 + (pInt / 3);

	int pStr;
	int pInt;
	int pDex;
	int pCon;

	
};

struct Wizzard
{
	int WHp = 10 + (WCon / 4);
	int WMp = 20 + (WInt / 2);

	int WStr;
	int WInt;
	int WDex;
	int WCon;
};

Player createPlayer()
{
	Player player;

	printf("Name your character: \n");
	std::cin >> player.name;

	printf("Select your class:\n1: Warrior\n2: Paladin\n3: Wizard\n");
	scanf_s("%d", player.classnum);


	printf("You are now a %c named $s\n", player.pClass, 7, player.name.c_str());

	return player;
}