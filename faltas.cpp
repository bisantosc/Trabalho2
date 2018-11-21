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
	
	


<<<<<<< HEAD
    aluno(string nome, int aulat, int aulaf) {
       
=======
    aluno(string nome, int aulaf) {
	this->nome = nome;
	this->aulaf = aulaf;
       	
>>>>>>> 50f5a85d9119126600c2e2808cc83cb648c7e0b7

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

	while (alunos.good()){
		
		aluno a(nome, aulaf);
		lista.push_back(a);
		
		alunos >> nome;
		alunos >> aulaf;
		

<<<<<<< HEAD
	}
	alunos.close();

}

void mostrar(vector<aluno> lista) {
	for(int i = 0; i < lista.size(); i++) {
		cout << lista[i].nome << ", " << lista[i].aulaf << endl;
	}
}

//void conferir (vector<aluno> & lista) {
    //int x;
	//x=68*25/100;
//}

//void calcular (vector<aluno> & lista) {
//}

=======
void mostrar(vector<aluno> lista) {
	string status;
	for(int i = 0; i < lista.size(); i++) {

	int aulat=68;
	int x;
	x = aulat*25/100;
		
>>>>>>> 50f5a85d9119126600c2e2808cc83cb648c7e0b7

	if (x<lista[i].aulaf){

		status =  "Reprovado" ;
		
	}else{
	
		status = "OK" ;
		
	}

		cout << lista[i].nome << ", " << lista[i].aulaf << ", " <<  status << endl;
	}
}






int main () {

	cout << "Controle de Faltas" << endl;


	vector<aluno> lista;
	carregar (lista);
	mostrar (lista);

    return 0;
}
