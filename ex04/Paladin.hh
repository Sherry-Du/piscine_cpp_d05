#ifndef _PALADIN_
#define _PALADIN_

#include "Priest.hh"
#include "Warrior.hh"

class Paladin : public Warrior, public Priest
{
    public:
	Paladin(std::string const& name, int lvl);
	~Paladin();
	using Warrior::CloseAttack;
	using Priest::RangeAttack;
	using Character::RestorePower;
	int Intercept();
    private:
	std::string const _weapon;
};

#endif
