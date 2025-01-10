#pragma once

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap {
    private:
        std::string Name;

    public:
        DiamondTrap(const std::string& name);
        ~DiamondTrap();

        void whoAmI();
};