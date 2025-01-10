#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoint = 100;
    this->Energy = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << Name << " created." << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "FragTrap " << Name << " can't attack... Out of energy or hit points... Needs to be repaired!" << RESET << std::endl;
    } else {
        this->Energy--;
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    this->hitPoint -= amount;
    std::cout << "FragTrap " << this->Name << " took " << amount << " damage! Health is now at " << this->hitPoint << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->Energy <= 0 || this->hitPoint <= 0) {
        std::cout << BOLD_RED << "FragTrap " << Name << " has no more energy or hit points to get repaired..." << RESET << std::endl;
    } else {
        this->hitPoint += amount;
        this->Energy--;
        std::cout << "FragTrap " << Name << " got a reparation kit of " << amount << " hit points. Health is now at " << this->hitPoint << ". "<< BOLD_BLUE << "Energy level: " << this->Energy << RESET << std::endl; 
    }
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " requested a Positive High Five Guys." << std::endl;
}

