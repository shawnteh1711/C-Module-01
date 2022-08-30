/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:08:35 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 18:39:24 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		string		_name;
		Weapon		&_weapon;

	public:
		HumanA(string name, Weapon &weapon);
		~HumanA(void);
		void		attack(void) const;
};

#endif

