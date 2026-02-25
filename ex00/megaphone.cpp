/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniplop <miniplop@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:45:30 by miniplop          #+#    #+#             */
/*   Updated: 2026/02/25 13:06:55 by miniplop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
        {
            std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j]))
            );
        }
    }
    std::cout << std::endl;
    return 0;
}
