/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:46:09 by steh              #+#    #+#             */
/*   Updated: 2022/08/25 15:44:25 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::string;

int main(int argc, char *argv[])
{
	Harl		harl;
	string		option;
	size_t		i;

	i = 0;
	if (argc != 2)
	{
		cout << "./harlFilter arg" << endl;
		return (0);
	}
	option = argv[1];
	transform(option.begin(), option.end(), option.begin(), ::toupper);
	harl.complain(option);
	return (0);
}
