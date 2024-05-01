#include "module.h"
#include<iostream>


using namespace std;
#include <string>


int module::compteur = 0;
module::module(int reference, string intitule, int formateur = -1) : m_reference(reference),
m_intitule(intitule), m_formateur(formateur) {

	++compteur;

}

module::~module() {

	--compteur;
}


int module::getsCompteur() {

	return compteur;
}


void module::choixEnseignant(int formateur) {

	m_formateur = formateur;
}


void module::supprimerFormateur() {

	m_formateur = -1;
}