/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:40:36 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 20:23:06 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

using std::fstream;
using std::ios;
using std::string;
using std::cout;
using std::endl;
using std::stringstream;

string	ft_replace(string content, string ori, string sub);

// ref: https://www.guru99.com/cpp-file-read-write-open.html
int main(int argc, char *argv[])
{
	fstream			infile;
	fstream			outfile;
	stringstream	ss;
	string			content;
	id_t			len;

	len = 0;
	if (argc != 4)
	{
		cout << "Enter ./program filename ori_str sub_str" << endl;
		return (1);
	}
	string a = ".replace";
	string filename = argv[1] + a;
	infile.open(argv[1], ios::in);
	if (!infile)
	{
		cout << "No such infile file";
		return (2);
	}
	else
		outfile.open(filename, ios::out);
	ss << infile.rdbuf();
	content = ss.str();
	if (infile && outfile)
	{
		content = ft_replace(content, argv[2], argv[3]);
		outfile << content;
	}
	else if (!outfile)
	{
		cout << "Error create outfile file";
	}
	infile.close();
	outfile.close();
	return (0);
}

// (npos = 18446744073709551615 / 2 ^ 64 / -1)
string	ft_replace(string content, string ori, string sub)
{
	size_t	pos;
	int		len;
	
	pos = 0;
	len = ori.length();
	while (true)
	{	
		pos = content.find(ori, pos);
		if (pos == string::npos)
			break ;
		content.erase(pos, len);
		content.insert(pos, sub);
		pos += len;
	}
	return (content);
}

// string	ft_replace(string line, string ori, string sub)
// {
// 	size_t pos;

// 	pos = 0;
// 	pos = line.find(ori, pos);
// 	// (npos = 18446744073709551615 / 2 ^ 64 / -1)
// 	if (pos != string::npos)
// 	{
// 		line.erase(pos, ori.length());
// 		line.insert(pos, sub);
// 		pos += ori.length();
// 		cout << "Copy Finished \n";
// 	}
// 	else
// 	{
// 		cout << "String not found \n";
// 		return (line) ;
// 	}
// 	return (line);
// }
