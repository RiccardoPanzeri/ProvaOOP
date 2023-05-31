#include <string>
#include <iostream>
#include "prototipi.h"

using namespace std;

void mostraStato(Auto macchina) {
	cout << endl;
	cout << "Ecco i dati relativi all'auto con targa:  " << macchina.getTarga() << endl;
	cout << "Marca: " << macchina.getMarca() << endl;
	cout << "Modello: " << macchina.getModello() << endl;
	cout << "Anno di Produzione: " << macchina.getAnnoProduzione() << endl;
	cout << "Tipologia Carburante: " << macchina.getTipoCarburante() << endl;
	cout << "Numero Porte: " << macchina.getNumeroPorte() << endl;
	cout << "Motore: " << macchina.getMotore() << endl;
	cout << "Fari: " << macchina.getFari() << endl;
	cout << endl;
}