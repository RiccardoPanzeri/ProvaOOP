#include <string>
#include <iostream>
using namespace std;
class Auto{
//Parte privata della classe: qui vanno le proprietà che l'oggetto istanziato avrà, e a cui l'utente non deve poter accedere direttamente; 
private:
	string marca = "";
	string modello = "";
	string annoProduzione = "";
	string tipoCarburante = "";
	string numeroPorte = "";
	string targa = "";
	bool motoreAcceso = false;
	bool fariAccesi = false;
//parte pubblica della classe, con il costruttore e i vari setter e getter;
public:
	//Metodo costruttore;
	Auto(string marca, string modello, string annoProduzione, string tipoCarburante, string numeroPorte, string targa, bool motoreAcceso, bool fariAccesi) {
		this->marca = marca; //this è il puntatore che indica l'indirizzo di partenza dell'oggetto: lo utilizzo per fare riferimento all'oggetto specifico che sto creando o modificando; 
		this->modello = modello;
		this->annoProduzione = annoProduzione;
		this->tipoCarburante = tipoCarburante;
		this->numeroPorte = numeroPorte;
		this->targa = targa;
		this->motoreAcceso = motoreAcceso;
		this->fariAccesi = fariAccesi;
		cout << "Creata " << this->marca << " " << this->modello << "con targa: " << this->targa << endl << endl;//comunico che l'oggetto è stato creato regolarmente;
	}
	//setter: utilizzando i metodi "setter", permetto la modifica delle proprietà dell'oggetto in maniera controllata;
	void cambiaMarca(string marca) {
		this->marca = marca;
		}
	void cambiaModello(string modello) {
		this->modello = modello;
	}
	void cambiaAnnoProduzione(string annoProduzione) {
		this->annoProduzione = annoProduzione;

	}
	void cambiaCarburante(string tipoCarburante) {
		this->tipoCarburante = tipoCarburante;
	}
	void cambiaNumPorte(string numeroPorte) {
		this->numeroPorte = numeroPorte;
	}
	void cambiaTarga(string targa) {
		this->targa = targa;
	}
	void accendiMotore() {
		if (!this->motoreAcceso) {
			this->motoreAcceso = true;
			cout << "ho acceso il motore!" << endl << endl; 
		}
		else {
			this->motoreAcceso = false;
			cout << "Ho spento il motore!" << endl << endl;
		}
	}
	void accendiFari() {
		if (!this->fariAccesi) {
			this->fariAccesi = true;
			cout << "Ho acceso i fari!" << endl << endl;
		}
		else {
			this->fariAccesi = false;
			cout << "Ho spento i fari!" << endl<<endl;
		}
	}

	//getter: utilizzando i metodi "getter" posso permettere l'accesso alle variabili dell'oggetto in maniera indiretta;
	string getMarca() {
		return this->marca;
	}
	string getModello() {
		return this->modello;
	}
	string getAnnoProduzione() {
		return this->annoProduzione;
	}
	string getTipoCarburante() {
		return this->tipoCarburante;
	}
	string getNumeroPorte() {
		return this->numeroPorte;
	}
	string getTarga() {
		return this->targa;
	}
	//i getter relativi alle variabili booleane avranno un return diverso a seconda del caso;
	string getFari() { 
		if (this->fariAccesi) {
			return "Accesi";
		}
		else {
			return "Spenti";
		}

	}
	string getMotore() {
		if (this->motoreAcceso) {
			return "Acceso";
		}
		else {
			return "Spento";
		}
	}


	




};

