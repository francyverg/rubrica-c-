#include <iostream.h>
include "classi.h"
using namespace std;
void Contatti::aggiungi()
{
	cout << "inserire nome: ";
	cin >> nome;
	cout <<"inserire cognome: ";
	cin >> cognome;
	cout << "inserire numero: "	;
	cin >> numero;
	cout <<endl;
}
void Contatti::elimina()
{
	
}
/*main()
{
	Contatti contatti;
	contatti.aggiungi();
	cout<<"il contatto inserito è: "<<contatti.nome<<" "<<contatti.cognome<<" "<<contatti.numero<< endl;
};/*
