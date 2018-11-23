#include "aluno.h"
#include <string>
#include <iostream>

using namespace std;

int main () {

	int m;

	cout << "Controle de Faltas \n" << endl;

	vector<aluno> lista;
	carregar (lista);
	mostrar (lista);

	cout << "Digite a matricula do aluno para verificar o atestado de frequencia: " << endl;
	cin >> m;

	gravar (lista,m);

    return 0;
}

