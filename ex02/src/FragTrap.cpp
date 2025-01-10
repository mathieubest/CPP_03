#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoint = 100;
    this->Energy = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << Name << " created." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " requested a Positive High Five Guys." << std::endl;
}

