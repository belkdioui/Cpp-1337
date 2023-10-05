/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:13:35 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 09:46:30 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

#include <iostream>

class Harl
{
    private:
          void   debug(void);
          void   info(void);
          void   warning(void);
          void   error(void);
         
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};




#endif