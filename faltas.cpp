//
//

#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

class aluno {

    //private:

public:

    string nome;
    int aulat;
    int aulaf;


    aluno(string nome, int aulat, int aulaf) {
        this->nome = nome;
        this->aulat = aulat;
        this->aulaf = aulaf;

    }
};

void carregar (vector<aluno> & lista) {
    string nome;
    int aulat;
    int aulaf;
    //int x;

    //x=68*25/100;


    ifstream alunos;

    alunos.open("alunos.txt");

    if(! alunos.is_open() ) {

        cerr << "erro ao abrir arquivo" << endl;

    }

}

void conferir (vector<aluno> & lista) {
    int x;

    x=68*25/100;

}




<<<<<<< HEAD
		cout << lista[i].nome << ", " << lista[i].aulaf << ", " <<  status << endl;
		
	}
}
=======
>>>>>>> 502606aae62a2f66094c40baec72093e78d0b5ff

void gravar(vector<char> presenca) {
	ofstream relatorio;
	cout << "Gravando..." << endl;

	relatorio.open("relatorio.txt");

    relatorio << "Resultados" << endl;
    for(int i = 0; i < presenca.size(); i++) {
           relatorio << presenca[i].aulaf << endl;
    }

	relatorio.close();

}



int main () {

    cout << "Controle de Faltas" << endl;


    vector<aluno> turma;
    carregar (turma);

<<<<<<< HEAD
	vector<aluno> lista;
	vector<aluno> presenca;

	carregar (lista);
	gravar (presenca);
	//resultados (lista ,presenca);
=======
>>>>>>> 502606aae62a2f66094c40baec72093e78d0b5ff

    return 0;
}


