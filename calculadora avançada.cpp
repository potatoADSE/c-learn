#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Selecione o modo:" << endl;
    cout << "(1) Adicao" << endl
         << "(2) Subtracao" << endl
         << "(3) Divisao" << endl
         << "(4) Multiplicacao" << endl
         << "(5) Potenciacao" << endl
         << "(6) Raiz Quadrada" << endl;

    int modo;
    cin >> modo;

    // Se for um modo de operação com dois números
    if (modo >= 1 && modo <= 5) {
        double a, b;
        cout << "Quais sao os dois numeros?" << endl;
        cin >> a >> b;

        switch (modo) {
            case 1:
                cout << "O resultado é: " << a + b << endl;
                break;

            case 2:
                cout << "O resultado é: " << a - b << endl;
                break;

            case 3:
                if (b == 0) {
                    cout << "Erro: Divisao por zero!" << endl;
                } else {
                    cout << "O resultado é: " << a / b << endl;
                }
                break;

            case 4:
                cout << "O resultado é: " << a * b << endl;
                break;

            case 5:
                cout << "O resultado é: " << pow(a, b) << endl;
                break;
        }
    }
    // Se for raiz quadrada
    else if (modo == 6) {
        double a;
        cout << "Qual numero deseja descobrir a raiz quadrada?" << endl;
        cin >> a;

        if (a < 0) {
            cout << "Erro: Nao existe raiz quadrada real de numero negativo!" << endl;
        } else {
            cout << "A raiz quadrada de " << a << " é: " << sqrt(a) << endl;
        }
    }
    else {
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
