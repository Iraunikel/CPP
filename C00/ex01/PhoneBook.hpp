/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iunikel <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:38:32 by iunikel           #+#    #+#             */
/*   Updated: 2025/06/27 23:00:18 by iunikel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
// test

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