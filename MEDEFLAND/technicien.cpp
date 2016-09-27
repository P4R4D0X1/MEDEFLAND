#include "technicien.hpp"

int CTechnicien::BASE = 1000;
int CTechnicien::PART = 1;
int CTechnicien::GAIN_UNITE = 10;

CTechnicien::CTechnicien(){
}

CTechnicien::CTechnicien(std::string nom, std::string prenom, int age, int anciennete, int nbUniteProduite){
	m_nom = nom;
	m_prenom = prenom;
	m_age = age;
	m_anciennete = anciennete;
	m_nbUniteProduite = nbUniteProduite;
}

float CTechnicien::calculBaseSalaire(){
	return BASE + m_nbUniteProduite * PART * GAIN_UNITE;
}