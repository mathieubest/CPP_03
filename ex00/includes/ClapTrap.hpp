#pragma once

#include <iostream>
#include <string.h>

class ClapTrap {
    private:
        std::string Name;
        int hitPoint;
        int Energy;
        int attackDamage;

    public:
        ClapTrap(const std::string& name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};