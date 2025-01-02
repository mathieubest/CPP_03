#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoint = 100;
    this->Energy = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << Name << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << Name << " destroyed." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Guard Gate mode." << std::endl;
}