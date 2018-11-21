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
	this->nome = nome;
	this->aulaf = aulaf;
       	

    }
};

void carregar (vector<aluno> & lista) {
    string nome;
    int aulaf;

    ifstream alunos;

    alunos.open("alunos.txt");

    if(! alunos.is_open() ) {

        cerr << "erro ao abrir arquivo" << endl;

    }
	alunos >> nome;
	alunos >> aulaf;
	

	while (alunos.good()){
	
		
		aluno a(nome, aulaf);
		lista.push_back(a);
		
		alunos >> nome;
		alunos >> aulaf;
		

	}
	alunos.close();

}

void mostrar(vector<aluno> lista) {
	string status;
	for(int i = 0; i < lista.size(); i++) {

	int aulat=68;
	int x;
	x = aulat*25/100;
		

	if (x<lista[i].aulaf){

		status =  "Reprovado" ;
		
	}else{
	
		status = "OK" ;
		
	}

		cout << lista[i].nome << ", " << lista[i].aulaf << ", " <<  status << endl;
	}
}




int main () {

	cout << "Controle de Faltas \n" << endl;

	vector<aluno> lista;
	carregar (lista);
	mostrar (lista);
	

    return 0;
}


