#ifndef _CHARACTER_
#define _CHARACTER_

#include <iostream>

class Character
{
    public:
	Character(std::string const& name, int lvl);
	~Character();

	std::string const& getName() const;
	int getLvl() const;
	int getPv() const;
	int getPower() const;
	int CloseAttack();
	int RangeAttack();
	void Heal();
	void RestorePower();
	void TakeDamage(int dmg);
	enum AttackRange
	{
	    CLOSE,
	    RANGE
	};
	AttackRange Range;

    protected:
	Character(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility);

	std::string _name;
	int _lvl;
	int _pv;
	int _power;

	int _strength;
	int _stamina;
	int _intelligence;
	int _spirit;
	int _agility;  
};

#endif
