/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:00:34 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/31 18:00:35 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );

private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

#endif