#ifndef MANUTENTIONNAIRE_HPP
#define MANUTENTIONNAIRE_HPP

#include "employe.hpp"

class CManutentionnaire : public CEmploye{
	public:
		CManutentionnaire();
		CManutentionnaire(std::string nom, std::string prenom, int age, int anciennete, int nbHeures);
		float calculBaseSalaire();

	protected:
		int m_nbHeures;
		static int BASE_HORAIRE;
};

#endif