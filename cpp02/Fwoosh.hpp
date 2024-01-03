#pragma once

#include<iostream>
#include"ASpell.hpp"

class Fwoosh: public ASpell
{
	private:
	public:
		Fwoosh();
		~Fwoosh();
        ASpell* clone();


};
