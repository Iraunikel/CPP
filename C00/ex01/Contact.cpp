/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iunikel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:38:19 by iunikel           #+#    #+#             */
/*   Updated: 2025/06/27 20:09:23 by iunikel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Setter
void Contact::setAllFields(const std::string &firstName,
	const std::string &lastName, const std::string &nickName,
	const std::string &phoneNumber, const std::string &darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

// Getters
const std::string &Contact::getFirstName() const
{
	return (this->firstName);
}

const std::string &Contact::getLastName() const
{
	return (this->lastName);
}

const std::string &Contact::getNickname() const
{
	return (this->nickName);
}

const std::string &Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

// Check emptyfield
bool Contact::isFieldEmpty(const std::string &field)
{
	return (field.empty());
}
