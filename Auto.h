#include <string>
#include <iostream>
using namespace std;
class Auto {
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
	Auto(string marcaAuto, string modelloAuto, string annoProduzioneAuto, string tipoCarburanteAuto, string numeroPorteAuto, string targaAuto, bool mAcceso, bool fAccesi);
	//metodo costruttore generico;
	Auto();
	//setter: utilizzando i metodi "setter", permetto la modifica delle proprietà dell'oggetto in maniera controllata;
	void cambiaMarca(string marca);
	void cambiaModello(string modello);
	void cambiaAnnoProduzione(string annoProduzione);
	void cambiaCarburante(string tipoCarburante);
	void cambiaNumPorte(string numeroPorte);
	void cambiaTarga(string targa);
	void accendiMotore();
	void accendiFari();

	//getter: utilizzando i metodi "getter" posso permettere l'accesso alle variabili dell'oggetto in maniera indiretta;
	string getMarca();
	string getModello();
	string getAnnoProduzione();
	string getTipoCarburante();
	string getNumeroPorte();
	string getTarga();
	string getFari();
	string getMotore();


	




};

