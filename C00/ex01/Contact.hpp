/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iunikel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:28:54 by iunikel           #+#    #+#             */
/*   Updated: 2025/06/27 20:07:55 by iunikel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  public:
	Contact() = default;
	~Contact() = default;

	// Getters
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getDarkestSecret() const;

	// Setter
	void setAllFields(const std::string &FirstName, const std::string &LastName,
		const std::string &NickName, const std::string &PhoneNumber,
		const std::string &DarkestSecret);

	// Empty field checker
	static bool isFieldEmpty(const std::string &field);

  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif
