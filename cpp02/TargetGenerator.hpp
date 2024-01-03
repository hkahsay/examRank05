#pragma once

#include <iostream>
#include"ATarget.hpp"
#include"ATarget.hpp"

#include<map>


class TargetGenerator
{
    private:

        std::map<std::string, ATarget*> arr_ATarget;
        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &other);
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *at_target);
        void forgetSpell(const std::string &type);
        ATarget * createTarget(const std::string &type);
};