#include <iostream>
#include "Header.hpp"
using namespace std;


int main()
{
	double poidsPersonne(0); 
	cout << " Entrez votre poids " ;
	cin >> poidsPersonne;
	cin.ignore();

	double taillePersonne(0);
	cout << " Entrez votre taille ";
	cin >> taillePersonne;

	calculIMC(poidsPersonne, taillePersonne);

	


	return 0;

}