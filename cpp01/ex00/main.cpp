/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:58:02 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/31 18:05:13 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
    Zombie *newzo = newZombie("khalid");
    newzo->announce();
    delete(newzo);
    randomChump("sinisa");
    return 0;
}
