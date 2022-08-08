#include "Header.hpp"
#include <iostream>

/*
Fonction qui calcul l'imc et donne la tranche normal à obèse
*/

void calculIMC(double poids, double taille)
{
	double imc(0);

	imc = poids / (taille * taille);

	std:: cout << " Taille = " << taille << std:: endl << std::endl;
	std:: cout << " Poids = " << poids << std :: endl << std::endl;
	std:: cout << " IMC  = " << imc << std :: endl << std::endl;

	if (imc < 18.5)
	{
		std:: cout << " Maigreur et dénutrition " << std:: endl << std::endl;
	}

	else if (imc >= 18.5 and imc <= 24.9)
	{
		std:: cout << " IMC normal " << std:: endl << std::endl;
	}

	else if (imc >= 25 and imc <= 29.8)
	{
		std:: cout << " Surpoids" << std:: endl << std::endl;
	}

	else if (imc >= 30)
	{
		std:: cout << " Obésité" << std:: endl << std::endl;
	}
}
