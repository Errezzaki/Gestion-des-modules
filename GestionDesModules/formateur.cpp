#include "formateur.h"
#include<iostream>
#include <string>
#include<vector>
using namespace std;


int formateur::compteur = 0;


formateur::formateur(int matricule, string nom, string prenom, int echelle) :
	m_matricule(matricule), m_nom(nom), m_prenom(prenom), m_echelle(echelle)

{

	++compteur;

}


formateur::~formateur() {

	--compteur;
}


int formateur::getsCompteur() {

	return compteur;
}


void formateur::ajouterFormateur(module* Module) {

	m_listeModule.push_back(Module);

}



void formateur::supprimerFormateur(module* Module) {

	for (auto iterator = m_listeModule.begin(); iterator != m_listeModule.end(); ++iterator) {
		if (*iterator == Module) {
			m_listeModule.erase(iterator);
			break;
		}
	}
}




