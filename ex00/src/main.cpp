/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:13:06 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/24 21:25:51 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main() {
	Zombie	*zombie1 = newZombie("Heap Zombie");
	zombie1->announce();
	randomChump("Stack Zombie");
	delete zombie1;
	return (0);
}