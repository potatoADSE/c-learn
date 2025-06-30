#include <iostream>
using namespace std;

int main() {
    int baixo = 1;
    int alto = 100;
    int chute;
    bool acerto = false;
    int resposta;

    cout << "Pense em um numero de 1 a 100." << endl;
    cout<<"Digite 1 se estiver correto o chute\n2 se for menor\n3 se for maior"<<endl;

    do {
        chute = (baixo + alto) / 2;
        cout << "O chute é: " << chute << endl;
        cin >> resposta;

        if (resposta == 1) {
            cout << "Acertei o numero é: "<<chute<< endl;
            acerto = true;
        }
        else if (resposta == 2) {
            alto = chute - 1;
        }
        else if (resposta == 3) {
            baixo = chute + 1;
        }
        else {
            cout << "Opcao invalida. Digite 1, 2 ou 3." << endl;
        }

    } while (!acerto);

    return 0;
}
