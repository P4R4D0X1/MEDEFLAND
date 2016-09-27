#ifndef TECHNICIEN_HPP
#define TECHNICIEN_HPP

#include "employe.hpp"

class CTechnicien : public CEmploye{
	public:
		CTechnicien();
		CTechnicien(std::string nom, std::string prenom, int age, int anciennete, int nbUniteProduite);
		float calculBaseSalaire();

	protected:
		int m_nbUniteProduite;
		static int BASE;
		static int PART;
		static int GAIN_UNITE;
};

#endif