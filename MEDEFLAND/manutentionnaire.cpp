#include "manutentionnaire.hpp"

int CManutentionnaire::BASE_HORAIRE = 10;

CManutentionnaire::CManutentionnaire(){
}

CManutentionnaire::CManutentionnaire(std::string nom, std::string prenom, int age, int anciennete, int nbHeures){
	m_nom = nom;
	m_prenom = prenom;
	m_age = age;
	m_anciennete = anciennete;
	m_nbHeures = nbHeures;
}

float CManutentionnaire::calculBaseSalaire(){
	return BASE_HORAIRE * m_nbHeures;
}