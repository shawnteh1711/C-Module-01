/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:14:29 by steh              #+#    #+#             */
/*   Updated: 2022/08/25 15:09:21 by steh             ###   ########.fr       */
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
	<< "[DEBUG]"
	<< "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger."
	<< "I really do!"
	<< endl;
}

void	Harl::_info(void)
{
	cout
	<< "[INFO]"
	<< "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger!"
	<< " If you did, I wouldn’t be asking for more!"
	<< endl;
}

void	Harl::_warning(void)
{
	cout 
	<< "[WARNING]"
	<< "I think I deserve to have some extra bacon for free"
	<< "I’ve been coming for years whereas"
	<< "you started working here since last month."
	<< endl;
}

void	Harl::_error(void)
{
	cout
	<< "[ERROR]"
	<< "This is unacceptable! I want to speak to the manager now."
	<< endl;
}

void	Harl::complain(std::string level)
{
	// declare a pointer to member function
	int	idx;

	idx = -1;
	void (Harl:: *ptr[4])(void) =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	std::string option[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (option[i] == level)
		{
			idx = i;
		}
	}
	
	switch (idx)
	{
		case (0):
			for (int i = idx; i < 4; i++)
				(this->*(ptr[i]))();
			break;
		case (1):
			for (int i = idx; i < 4; i++)
				(this->*(ptr[i]))();
			break;
		case (2):
			for (int i = idx; i < 4; i++)
				(this->*(ptr[i]))();
			break;
		case (3):
			for (int i = idx; i < 4; i++)
				(this->*(ptr[i]))();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
