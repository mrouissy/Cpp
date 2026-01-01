/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:37:29 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/31 20:12:40 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
  Zombie *zo = new Zombie[N];
  for (int i = 0; i < N; i++)
    zo[i].seter(name);
  return zo;
}