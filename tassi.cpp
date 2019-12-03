#include <iostream>
using namespace std;

int main(){
  double tasso_EUR_USD = 1.1;
  double tasso_EUR_GBP = 0.775;
  int i;
  int scelta;



  do {
    cout << "\n1-Cambio DOLLARI in EURO\n";
    cout << "2-Cambio EURO in DOLLARI\n";
    cout << "3-Cambio EURO in STERLINE\n";
    cout << "4-Cambio STERLINE in EURO\n";
    cout << "5-Variazione tasso EUR/USD\n";
    cout << "6-Variazione tasso EUR/GBP\n";
    cout << "7-Esci\n" << endl;
    cin >> scelta;

    switch (scelta) {

    case (1):{
		cout << "inserisci l'importo: ";
		cin >> i;
		cout << "--> cambio effettuato, ora hai "<< i/tasso_EUR_USD << " EURO";
      }
	  break;
    case (2):{
    	cout << "inserisci l'importo: ";
		cin >> i;
		cout << "--> cambio effettuato, ora hai "<< i*tasso_EUR_USD << " DOLLARI";
	  }
	  break;
    case (3):{
		cout << "inserisci l'importo: ";
		cin >> i;
		cout << "--> cambio effettuato, ora hai "<< i*tasso_EUR_GBP << " STERLINE";
	  }
	  break;
	case (4):{
		cout << "inserisci l'importo: ";
		cin >> i;
		cout << "--> cambio effettuato, ora hai "<< i/tasso_EUR_GBP << " EURO";
      }
      break;
    case (5):{
		cout << "scegli la variazione del tasso da EURO a DOLLARI: ";
		cin >> tasso_EUR_USD;
      }
      break;
    case (6):{
		cout << "scegli la variazione del tasso da EURO a STERLINE: ";
		cin >> tasso_EUR_GBP;
      }
      break;
    }

  } while (scelta != 7);

}

