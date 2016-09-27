#ifndef PERSONNEL_HPP
#define PERSONNEL_HPP

#include <iostream>
#include <vector>

#include "employe.hpp"

class CPersonnel{
	public:
		CPersonnel();
		~CPersonnel();
		void embaucher(CEmploye *p_new);
		void licencier(CEmploye *p_bye);
		void faillite();
		void printSalaires();
		float salaireMoyen();

	protected:
		std::vector<CEmploye*> m_personnel;
};

#endif