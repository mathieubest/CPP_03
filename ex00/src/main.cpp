#include "../includes/ClapTrap.hpp"

int main() {
    ClapTrap a("Mouss");
    ClapTrap b("Broski");

    b.takeDamage(10);
    b.attack("Sam");
    b.beRepaired(5);
    std::cout << std::endl;
    
    a.takeDamage(5);
    a.beRepaired(3);
    for (int i = 1; i <= 15; i++) {
        std::cout << "[" << i << "] ";
        a.attack("El Fuente");
    }
    a.beRepaired(5);
    return (0);
}
