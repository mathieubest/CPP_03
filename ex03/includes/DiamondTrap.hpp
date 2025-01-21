#pragma once

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string Name;

    public:
        // Constructor
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& other);

        // Destructor
        ~DiamondTrap();

        // Public methods
        void attack(const std::string& target);
        void whoAmI();

        // Overloaded operator
        DiamondTrap& operator=(const DiamondTrap& other);
};