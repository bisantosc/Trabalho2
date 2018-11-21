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










int main () {

    cout << "Controle de Faltas" << endl;


    vector<aluno> turma;
    carregar (turma);


    return 0;
}


