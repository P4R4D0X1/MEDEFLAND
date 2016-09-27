#include "employe.hpp"

CEmploye::CEmploye(){
}

CEmploye::~CEmploye(){
}

void CEmploye::print(){
	std::cout << "[PRENOM]\t" << m_nom << "\t\t" << "[NOM]\t" << m_nom << std::endl;
	std::cout << "[SALAIRE]\t" << calculSalaire() << std::endl;
	std::cout << "[AGE]\t" << m_age << std::endl;
	std::cout << std::endl;
}

float CEmploye::calculSalaire(){
	return calculBaseSalaire() + (((calculBaseSalaire() * 5) / 100) * m_anciennete);	
}