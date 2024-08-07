/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:00:01 by yu-chen           #+#    #+#             */
/*   Updated: 2024/08/07 18:44:47 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

int	main(void)
{
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
		// jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club 2");
		jim.attack();
	}
	return (0);
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
