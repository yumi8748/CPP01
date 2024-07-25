/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:13:14 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/24 21:36:24 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " is getting killed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout<< this->name << " : BraiiiiiiinnnzzzZ..." <<std::endl;
}

