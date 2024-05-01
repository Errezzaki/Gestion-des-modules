#pragma once

#include<iostream>
#include <string>
#include<vector>
#include"module.h"

class formateur
{
private:
	int m_matricule;
	std::string	m_nom;
	std::string m_prenom;
	std::vector<module*> m_listeModule;
	int m_echelle;
	static int  compteur;

public:

	formateur(int matricule, std::string nom, std::string prenom, int echelle);
	~formateur();

	static int getsCompteur();

	void ajouterFormateur(module* Module);

	void supprimerFormateur(module* Module);

};



