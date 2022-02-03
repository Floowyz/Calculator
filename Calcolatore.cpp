#include <iostream>
using namespace std;

int main(){

//Inizio Calcolatore
int Cifra1, Cifra2;
char Operazione;
int Totale;

cout<<"Cifra1: ";
cin>>Cifra1;

cout<<"Operazione: ";
cin>>Operazione;

cout<<"Cifra2: ";
cin>>Cifra2;

if(Operazione=='+')
Totale = Cifra1 + Cifra2;

else if(Operazione=='-')
Totale = Cifra1 - Cifra2;

else if(Operazione=='*')
Totale = Cifra1 * Cifra2;

else if(Operazione=='/')
Totale = Cifra1 / Cifra2;

else
{	//Operazione non valida con i Simboli
	cout<<"Errore! (Simbolo non valido) | Simboli registrati: +, -, *, / ";
	exit(0);
}
switch(Operazione){
case '+': Totale = Cifra1 + Cifra2;
break;
case '-': Totale = Cifra1 - Cifra2;
break;
case '*': Totale = Cifra1 * Cifra2;
break;
case '/': Totale = Cifra1 / Cifra2;
break;

}

cout<<"Totale: "<<Totale;

cout<<endl;
system("pause");
return 0;
}
