/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:13:03 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/24 21:36:11 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private:
	std::string name;
public:
	Zombie();
    Zombie(std::string name);
    ~Zombie();
	void announce( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif