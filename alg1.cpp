#include <iostream>


using namespace std;


	int ano;
	int idade;
	int anoatual;
	int mes;
	int dia;

int main()
{
	cout << "Em que ano estamos?" << endl;
	cin >> anoatual;
    cout << "Em que ano voce nasceu?" << endl;
    cin >> ano;
    cout << "Em que mes voce nasceu?" << endl;
    cin >> mes;
    cout << "Em que dia voce nasceu?" << endl;
    cin >> dia;
    idade = anoatual - ano;
    if(ano < (anoatual - 100)) {
		cout << "Idade Invalida" << endl;
		cout << "Reiniciando o Programa!" << endl;
		main();
	} else if(ano > anoatual) {
		cout << "Idade Invalida" << endl;
		cout << "Reiniciando o Programa!" << endl;
		main();
	} else{
		if(mes < 1) {
			cout << "Mes invalido!" << endl;
			cout << "Reiniciando o Programa" << endl;
			main();
		} else if(mes > 12) {
			cout << "Mes invalido!" << endl;
			cout << "Reiniciando o Programa" << endl;
			main();
		} else {
			if(dia < 0) {
				cout << "Dia Invalido" << endl;
				cout << "Reiniciando o Programa!" << endl;
				main();
			} else if( dia > 31) {
				cout << "Dia Invalido" << endl;
				cout << "Reiniciando o Programa!" << endl;
				main();
			} else {
			cout << "Sua data de nascimento e " << dia << "/" << mes << "/" << ano << endl;
    cout << "E voce tem " << idade << " anos de idade!" << endl;
			}
		}
	}
    
  return 2;
    
}

