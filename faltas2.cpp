//Bianca Santos
//Rodrigo Piccini

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

class aluno {

    //private:

public:

    string nome;
    int aulaf;
	


    aluno(string nome, int aulaf) {
       

    }
};

void carregar (vector<aluno> & lista) {
    string nome;
    int aulaf;
    //int x;

    //x=68*25/100;


    ifstream alunos;

    alunos.open("alunos.txt");

    if(! alunos.is_open() ) {

        cerr << "erro ao abrir arquivo" << endl;

    }

	while (alunos.good()){
		
		aluno a(nome, aulaf);
		lista.push_back(a);
		
		alunos >> nome;
		alunos >> aulaf;
		

	}
	alunos.close();

}

void mostrar(vector<aluno> lista) {
	for(int i = 0; i < lista.size(); i++) {
		cout << lista[i].nome << ", " << lista[i].aulaf << endl;
	}
}

void conferir (vector<aluno> & lista) {
	int aulat=68;
	int x;
	x = aulat*25/100;

	if (x>17){

		cout << "Reprovado" << endl;
		
	}else{
	
		cout << "OK" << endl;
	}

}

//void calcular (vector<aluno> & lista){

//}




int main () {

    cout << "Controle de Faltas" << endl;


    vector<aluno> lista;
    carregar (lista);
	conferir (lista);
	mostrar (lista);


    return 0;
}







