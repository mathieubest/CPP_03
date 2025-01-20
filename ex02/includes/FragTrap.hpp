#pragma once

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(const std::string& name);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
};