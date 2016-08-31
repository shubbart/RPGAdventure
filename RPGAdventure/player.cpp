#include <iostream>
#include "Player.h"

struct Player
{
	string name;

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
	int wHp;
	int wMp;

	int wStr;
	int wInt;
	int wDex;
	int wCon;

};


struct Paladin
{
	int pHp;
	int pMp;

	int pStr;
	int pInt;
	int pDex;
	int pCon;

	
};

struct Wizzard
{
	int WHp;
	int WMp;

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
}