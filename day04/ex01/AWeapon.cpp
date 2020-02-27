
#include <iostream>

#ifndef WEAPON_HPP
# define AWEAPON_HPP

class AWeapon
{
	private:
		int	APCost;
		std::string name;
		int damage;

	public:
		AWeapon();
		AWeapon& operator= (const AWeapon& e);
		virtual ~AWeapon();
		AWeapon(AWeapon const &);

		AWeapon(std::string const & name, int apcost, int damage);


		std::string const getName () const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;
};

#endif

AWeapon::AWeapon(std::string const & n, int a, int d)
{
	this->name = n;
	this->APCost = a;
	this->damage = d;
}

int		AWeapon::getAPCost() const
{
	return (APCost);
}

int		AWeapon::getDamage() const
{
	return (damage);
}

std::string	const  AWeapon::getName() const
{
	return (name);
}

AWeapon &AWeapon::operator= (const AWeapon& rhs)
{
	if (this != &rhs)
	{
		name = rhs.getName();
		APCost = rhs.getAPCost();
		damage = rhs.getDamage();
	}
	return (*this);
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP


class PlasmaRifle: public AWeapon
{
	private:
		int	APCost;
		std::string name;
		int damage;

		
	public:
		PlasmaRifle();
		PlasmaRifle& operator= (const PlasmaRifle& e);
		~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &);


		void attack();
};

#endif

void PlasmaRifle::attack(void)
{
	std::cout << "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////



#ifndef POWERFIST_HPP
# define POWERFIST_HPP


//why don't we inherit all the attributes?

class PowerFist: public AWeapon
{
	private:
		int	APCost;
		std::string name;
		int damage;

	public:
		PowerFist();
		PowerFist& operator= (const PowerFist& e);
		PowerFist(PowerFist const &);
		~PowerFist();
		void attack();
};

#endif

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{
	return ;
}

void PowerFist::attack(void)
{
	std::cout << "* pschhh... SBAM! *:";
}


/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy
{
	private:
		int hp;
		std::string const type;
	public:
		virtual ~Enemy;
		Enemy(int hp, std::string const & type);//why not inherit this? do children need this attribute?
		std::string const getType(); const //would it be possible to return constant reference?
		int	getHP() const;

		virtual void takeDamage(int);//do we need to implement it?
};

#endif

Enemy::Enemy(int h, std::string const & t):hp(h), type(t)
{
	return ;
}

void Enemy::takeDamage (int d)
{
	if (d < 0)
		return ;
	hp -= d;
}

std::ostream & operator<<(std::ostream & o, Enemy const & i)
{
	std::cout << getName();
	return (o);
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#ifndef "SUPERMUTANT_HPP"
#define "SUPERMUTANT_HPP"

class SuperMutant:public Enemy
{
	private:
		int hp;
		std::string type;
	public:
		virtual ~SuperMutant
		std::string const getType() const;
		int	getHP() const;

		SuperMutant();
}

#endif

//what does it mean "on bearth?" custom constructor or standart?

SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !\n";
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

void SuperMutant::takeDamage(int d)
{
	d -= 3;
	if (d < 0)
	{
		std::cout << "SuperMutant " << name << " says: u 2 week 4 me!!!!0 damag!!\n";
		return ;
	}
	std::cout << "SuperMutant " << name << " says: agh! so strong! damage is " << damage << std::endl;
	hp -= damage;
	if (hp <= 0)
		delete this;
}


/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#ifndef "RADSCORPION_HPP"
#define "RADSCORPION_HPP"

class RadScorpion
{
	private:
		int hp;
		int type;
	public:
		Scorpion();
		virtual ~RadScorpion;
		std::string const getType();
		int	getHP() const;
};


#endif

RadScorpion::RadScorpion():Enemy(RadScorpion, 80)
{
	std::cout << "* click click click *\n";
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
	private:
		std::string name;
		int ap;
	public:
		Character(std::string const & name);
		AWeapon *weapon;
		~Character();

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
};

#endif

Character::Character (std::string const & n):name(n), ap(40)
{
	return ;
}

void Character::attack(Enemy* e)
{
	if (ap <= 0)
		return ;
	ap -= this->weapon->getDamage;
	e->takeDamage(weapon->getDamage);
}

void Character::recoverAP()
{
	if (ap < 40)
		ap += 10;
}

void Character::attack(Enemy *e)
{
	if (!weapon)
		return ;
	std::cout << name << " attacks " << e->type << " with a " << weapon->name << std::endl;

	e->takeDamage(weapon->damage);
}

void Character::equip(AWeapon *w)
{
	weapon = w;
}

std::ostream & operator<<(std::ostream & o, Character const & i)
{
	if (this->weapon)
		std::cout << i.name << "has "<< i.ap << "and wields a "<< i.weapon->getName() << std::endl;
	i.name << "has "<< i.ap << "and is unarmed" << std::endl;
	return (o);
}


