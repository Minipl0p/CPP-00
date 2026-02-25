#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string number;
	std::string darkestSecret;
public:
	void setFirstName(const std::string& value);
    void setLastName(const std::string& value);
    void setNickname(const std::string& value);
    void setNumber(const std::string& value);
    void setDarkestSecret(const std::string& value);

    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getNickname() const;
    const std::string& getNumber() const;
    const std::string& getDarkestSecret() const;
};

#endif
