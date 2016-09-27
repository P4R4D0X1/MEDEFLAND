#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <iostream>
#include <string>

class CEmploye{
	public:
		CEmploye();
		~CEmploye();
		void print();
		virtual float calculBaseSalaire() =0;
		float calculSalaire();

	protected:
		std::string m_nom;
		std::string m_prenom;
		int m_age;
		int m_anciennete;
};

#endif