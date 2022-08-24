/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:14:29 by steh              #+#    #+#             */
/*   Updated: 2022/08/24 23:04:10 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	cout 
	<< "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger."
	<< "I really do!"
	<< endl;
}

void	Harl::_info(void)
{
	cout 
	<< "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger!"
	<< " If you did, I wouldn’t be asking for more!"
	<< endl;
}

void	Harl::_warning(void)
{
	cout 
	<< "I think I deserve to have some extra bacon for free"
	<< "I’ve been coming for years whereas"
	<< "you started working here since last month."
	<< endl;
}

void	Harl::_error(void)
{
	cout 
	<< "This is unacceptable! I want to speak to the manager now."
	<< endl;
}

void	Harl::complain(std::string level)
{
	// declare a pointer to member function
	int	a;

	a = 0;
	void (Harl:: *ptr[4])(void) =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	std::string option[4] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		if (option[i] == level)
		{
			a = 1;
			(this->*(ptr[i]))();
		}
	}
	
	if (a == 0)
		cout << "Option not found" << endl;
}
