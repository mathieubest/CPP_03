#pragma once

#include <iostream>
#include <string.h>

// ANSI Color Codes
#define RESET "\033[0m"
#define RED "\033[30m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define BOLD_BLUE "\033[1m\033[34m"
#define BOLD_RED "\033[1m\033[31m"


class ClapTrap {
    protected:
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