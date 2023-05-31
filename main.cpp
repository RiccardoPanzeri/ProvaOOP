#include <string>
#include <iostream>
#include "prototipi.h"

using namespace std;

int main() {
	//Istanzio due oggetti di classe Auto:
	Auto Spacestar("Mitsubishi", "Spacestar", "2014", "Benzina", "5", "XXXYYYZZZ", false, false);
	Auto Cinquecento("Fiat", "Cinquecento", "2021", "ibirida/GPL", "3", "ZZZYYYXX", false, false);

	//stampo la scheda con le informazioni di entrambe:
	mostraStato(Spacestar);
	cout << endl << endl;
	mostraStato(Cinquecento);
	//ora provo a modificare le proprietà degli oggetti tramite i metodi setter che ho definito all'interno della classe;
	Spacestar.accendiFari();
	Spacestar.accendiMotore();
	Cinquecento.accendiMotore();
	Cinquecento.accendiFari();
	Spacestar.cambiaAnnoProduzione("2023");
	Cinquecento.cambiaTarga("XXXXXYYZZZY");
	//Visualizzo di nuovo le informazioni per constatare che tutte le proprietà siano state cambiate regolarmente;
	cout << "Visualizzo le informazioni aggiornate delle auto: " << endl << endl; 
	mostraStato(Spacestar);
	mostraStato(Cinquecento);






	return 0;
}