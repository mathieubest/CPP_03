#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), Name(name) {
    this->hitPoint == FragTrap::hitPoint;
}