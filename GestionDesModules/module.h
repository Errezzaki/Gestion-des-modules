#pragma once
#include<iostream>
#include <string>
class module
{

private:
	int m_reference;
	std::string m_intitule;
	int m_formateur;
	static int   compteur;

public:

	module(int reference, std::string intitule, int formateur);

	void choixEnseignant(int formateur);

	void supprimerFormateur();

	~module();

	static int getsCompteur();







};