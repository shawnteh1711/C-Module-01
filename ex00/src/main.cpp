/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:49:00 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 16:12:57 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*heap_zombie = newZombie("Heap Zombie");
	heap_zombie->announce();
	delete (heap_zombie);
	randomChump("stack zombie");
	return (0);
}
