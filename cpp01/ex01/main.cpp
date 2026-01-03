/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:58:02 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/02 16:00:38 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
   Zombie *zo = zombieHorde(5, "kahlid");
   for (int i = 0; i < 5; i++)
        zo[i].announce();
   delete[] zo;
    return 0;
}
