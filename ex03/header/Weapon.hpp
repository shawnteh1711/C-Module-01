/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:04:01 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 18:29:34 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
using std::string;

class Weapon
{
	private:
		string	_type;

	public:
		Weapon(string type);
		~Weapon(void);
		string	getType(void) const;
		void	setType(string type);
};

#endif
