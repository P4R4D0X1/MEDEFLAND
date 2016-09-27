#include "commercial.hpp"

int CComercial::BASE = 4000;
int CComercial::PART = 2;

CComercial::CComercial(){
}

CComercial::CComercial(std::string nom, std::string prenom, int age, int anciennete, int chiffreAffaire){
	m_nom = nom;
	m_prenom = prenom;
	m_age = age;
	m_anciennete = anciennete;
	m_chiffreAffaire = chiffreAffaire;
}

float CComercial::calculBaseSalaire(){
	return BASE + m_chiffreAffaire * PART;
}