#pragma once

#include<iostream>
#include"ASpell.hpp"

class Fireball: public ASpell
{
	private:
	public:
		Fireball();
		~Fireball();
        ASpell* clone();


};
