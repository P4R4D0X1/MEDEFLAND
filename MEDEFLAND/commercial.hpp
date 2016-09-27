#ifndef COMMERCIAL_HPP
#define COMMERCIAL_HPP

#include "employe.hpp"

class CComercial : public CEmploye{
	public:
		CComercial();
		CComercial(std::string nom, std::string prenom, int age, int anciennete, int chiffreAffaire);
		float calculBaseSalaire();

	protected:
		int m_chiffreAffaire;
		static int BASE;
		static int PART;
};

#endif