#include "personnel.hpp"

CPersonnel::CPersonnel(){
}

CPersonnel::~CPersonnel(){
}

void CPersonnel::embaucher(CEmploye *p_new){
	m_personnel.push_back(p_new);

	return;
}

void CPersonnel::licencier(CEmploye *p_new){
	unsigned int l_i(0);

	for (l_i = 0; l_i < m_personnel.size(); ++l_i){
		if (m_personnel[l_i] == p_new){
			m_personnel.erase(m_personnel.begin() + l_i);
			break;
		}
	}

	return;
}

void CPersonnel::faillite(){
	m_personnel.erase(m_personnel.begin(), m_personnel.end());

	return;
}

void CPersonnel::printSalaires(){
	unsigned int l_i(0);

	for (l_i = 0; l_i < m_personnel.size(); ++l_i){
		m_personnel[l_i]->print();
	}

	return;
}

float CPersonnel::salaireMoyen(){
	unsigned int l_i(0);
	float l_salaireMoyen(0);

	for (l_i = 0; l_i < m_personnel.size(); ++l_i){
		l_salaireMoyen += m_personnel[l_i]->calculSalaire();
	}

	return l_salaireMoyen / m_personnel.size();
}