/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:49:00 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 16:39:25 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie 		*zombies;
	int			n;
	std::string	name;

	std::cout << "Enter number of zombies to create : ";
	std::cin >> n;
	std::cin.ignore();
	std::cout << "Enter name of zombies: ";
	getline(std::cin, name);
	zombies = zombieHorde(n, name);
	delete [] zombies;
	return (0);
}
