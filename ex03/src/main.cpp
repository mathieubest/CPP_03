#include "../includes/DiamondTrap.hpp"
#include "../includes/ColorCodes.hpp"

int main() {
    std::cout << BOLD_BLUE << "-- Constructing --" << RESET << std::endl;

    std::cout << BOLD_BLUE << "-- Testing --" << RESET << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Giga Chadd");
	DiamondTrap c(a);

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

    std::cout << BOLD_BLUE << "-- Deconstructing --" << RESET << std::endl;
    return (0);
}
