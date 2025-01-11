#include "../includes/ScavTrap.hpp"
#include "../includes/ColorCodes.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->_hitPoint = 100;
    this->_Energy = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _Name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "ClapTrap " << Name << " can't attack... Out of energy or hit points... Needs to be repaired!" << RESET << std::endl;
    } else {
        this->Energy--;
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
    std::cout << "ScavTrap " << this->Name << " took " << amount << " damage! Health is now at " << this->hitPoint << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "ScavTrap " << Name << " has no more energy or hit points to get repaired..." << RESET << std::endl;
    } else {
        this->hitPoint += amount;
        this->Energy--;
        std::cout << "ScavTrap " << Name << " got a reparation kit of " << amount << " hit points. Health is now at " << this->hitPoint << ". "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl; 
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Guard Gate mode." << std::endl;
}