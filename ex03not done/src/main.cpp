#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main() {
    {
        Weapon club("crude spiked club 1");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club 1");
        bob.attack();
    }
    {
        Weapon club("crude spiked club2");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club 2");
        jim.attack();
    }
    return 0;
}

// int main( void )
// {
//     {
//         Weapon  club = Weapon("Sword");

//         HumanA  bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     {
//         Weapon  club = Weapon("Gun");

//         HumanB  jim("Jim");
//         jim.attack();
//         jim.setWeapon(club);
//         jim.attack();
//         club.setType("some other type of club");
//         jim.attack();
//     }
// }
