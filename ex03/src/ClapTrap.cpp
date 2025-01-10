#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : Name(name), hitPoint(10), Energy(10), attackDamage(0) {
    std::cout << "ClapTrap " << Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "ClapTrap " << Name << " can't attack... Out of energy or hit points... Needs to be repaired!" << RESET << std::endl;
    } else {
        this->Energy--;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->Name << " took " << amount << " damage! Health is now at " << this->hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "ClapTrap " << Name << " has no more energy or hit points to get repaired..." << RESET << std::endl;
    } else {
        this->hitPoint += amount;
        this->Energy--;
        std::cout << "ClapTrap " << Name << " got a reparation kit of " << amount << " hit points. Health is now at " << this->hitPoint << ". "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl; 
    }
}