#include "Auto.h"
#include <string>
#include <iostream>
using namespace std;

Auto::Auto(string marcaAuto, string modelloAuto, string annoProduzioneAuto, string tipoCarburanteAuto, string numeroPorteAuto, string targaAuto, bool mAcceso, bool fAccesi) {
	marca = marcaAuto; //this è il puntatore che indica l'indirizzo di partenza dell'oggetto: lo utilizzo per fare riferimento all'oggetto specifico che sto creando o modificando; 
	modello = modelloAuto;
	annoProduzione = annoProduzioneAuto;
	tipoCarburante = tipoCarburanteAuto;
	numeroPorte = numeroPorteAuto;
	targa = targaAuto;
	motoreAcceso = mAcceso;
	fariAccesi = fAccesi;
	cout << "Creata " << this->marca << " " << this->modello << " con targa: " << this->targa << endl << endl;//comunico che l'oggetto è stato creato regolarmente;
}

Auto::Auto() {
	cout << "Auto generica Creata" << endl << endl;
};

void Auto::cambiaMarca(string marcaAuto) {
	marca = marcaAuto;
}
void Auto::cambiaModello(string modelloAuto) {
	modello = modelloAuto;
}
void Auto::cambiaAnnoProduzione(string annoProduzioneAuto) {
	annoProduzione = annoProduzioneAuto;

}
void Auto::cambiaCarburante(string tipoCarburanteAuto) {
	tipoCarburante = tipoCarburanteAuto;
}
void Auto::cambiaNumPorte(string numeroPorteAuto) {
	numeroPorte = numeroPorteAuto;
}
void Auto::cambiaTarga(string targaAuto) {
	targa = targaAuto;
}
void Auto::accendiMotore() {
	if (!motoreAcceso) {
		motoreAcceso = true;
		cout << "ho acceso il motore!" << endl << endl;
	}
	else {
		motoreAcceso = false;
		cout << "Ho spento il motore!" << endl << endl;
	}
}
void Auto::accendiFari() {
	if (!fariAccesi) {
		fariAccesi = true;
		cout << "Ho acceso i fari!" << endl << endl;
	}
	else {
		fariAccesi = false;
		cout << "Ho spento i fari!" << endl << endl;
	}
}


string Auto::getMarca() {
	return marca;
}
string Auto::getModello() {
	return modello;
}
string Auto::getAnnoProduzione() {
	return annoProduzione;
}
string Auto::getTipoCarburante() {
	return tipoCarburante;
}
string Auto::getNumeroPorte() {
	return numeroPorte;
}
string Auto::getTarga() {
	return targa;
}

//i getter relativi alle variabili booleane avranno un return diverso a seconda del caso;
string Auto::getFari() {
	if (fariAccesi) {
		return "Accesi";
	}
	else {
		return "Spenti";
	}

}
string Auto::getMotore() {
	if (motoreAcceso) {
		return "Acceso";
	}
	else {
		return "Spento";
	}
}