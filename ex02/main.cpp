/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:35:23 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 18:00:11 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(void)
{
	string	s = "HI THIS IS BRAIN";
	string	*stringPTR = &s; // string pointer object
	string	&stringREF = s; //reference object

	cout << "Address of s           = " << &s << endl;
	cout << "Address of stringPTR   = " << stringPTR << endl;
	cout << "Address of stringREF   = " << &stringREF << endl;
	cout << "Value of s             = " << s << endl;
	cout << "Value of stringPTR     = " << *stringPTR << endl;
	cout << "Value of stringREF     = " << stringREF << endl;

	*stringPTR = "PTR CHANGE CONTENT";
	cout << "Value of s             = " << s << endl;
	cout << "Value of stringPTR     = " << *stringPTR << endl;

	stringREF = "REF CHANGE CONTENT";
	cout << "Value of s             = " << s << endl;
	cout << "Value of stringREF     = " << stringREF << endl;

	return 0;
}
