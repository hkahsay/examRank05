#pragma once

#include<iostream>
#include"ATarget.hpp"

class Dummy: public ATarget
{
	private:
	public:
		Dummy();
		~Dummy();
        ATarget* clone();


};
