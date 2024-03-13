/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:20:26 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 14:20:38 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string t); // Constructor declaration
    ~Weapon(); // Destructor declaration
    std::string getType(void);
    void setType(std::string str);
};

#endif
