#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>

class CHuman {
	public:
		CHuman();
		~CHuman();


	protected:
		std::string m_name;
		std::string m_surname;
		int m_age;
		int m_money;
};

#endif