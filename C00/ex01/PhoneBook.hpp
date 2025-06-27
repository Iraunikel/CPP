/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iunikel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:38:32 by iunikel           #+#    #+#             */
/*   Updated: 2025/06/27 15:41:57 by iunikel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    public:
        void ADD();
        void SEARCH();
        void EXIT();

        PhoneBook() = default;
        ~PhoneBook() = default; // potentially not relevant but not sure

    private:
        Contact ContactList[8];
        int AddIndex;
        int NumContacts;

};

#endif