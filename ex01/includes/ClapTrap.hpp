#pragma once

#include <iostream>
#include <string.h>

class ClapTrap {
    protected:
        std::string _Name;
        int _hitPoint;
        int _Energy;
        int _attackDamage;

    public:
        // Constructors
        ClapTrap(const std::string& name);
        
        // Deconstructors
        ~ClapTrap();

        // Public Methods
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};