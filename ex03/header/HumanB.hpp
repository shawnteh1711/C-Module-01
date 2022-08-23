/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:16:26 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 18:48:28 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		string		_name;
		Weapon		*_weapon;

	public:
		HumanB(string name);
		~HumanB(void);
		void		setWeapon(Weapon &weapon);
		void		attack(void) const;
};

#endif
