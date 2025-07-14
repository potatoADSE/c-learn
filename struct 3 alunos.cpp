#include <iostream>
using namespace std;

struct aluno {
    string nome;
    int idade;
    int nota;
};
void mostrarAluno(aluno x) {
    cout << x.nome << " - Idade: " << x.idade << " - Nota: " << x.nota << endl;
}
int main() {
    aluno a;
    a.nome = "Emanuel";
    a.idade = 12;
    a.nota = 10;
    
    aluno b;
    b.nome = "Jubervalda";
    b.idade = 12;
    b.nota = 9;
    
    aluno c;
    c.nome = "Jurubeba";
    c.idade = 12;
    c.nota = 6;

    mostrarAluno(a);
    mostrarAluno(b);
    mostrarAluno(c);    
    
    return 0;
}
