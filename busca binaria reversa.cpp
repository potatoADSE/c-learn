#include <iostream>
#include <chrono>
using namespace std;

int main() {
    auto agora = chrono::system_clock::now();
    auto duracao = agora.time_since_epoch();
    auto milissegundos_total = chrono::duration_cast<chrono::milliseconds>(duracao).count();
    int milissegundos_da_segundo_atual = milissegundos_total % 100+1;

    int chute;

    cout << "Tente acertar o número de 0 a 100 que eu pensei:" << endl;

    do {
        cout << "Seu chute: ";
        cin >> chute;

        if (chute < milissegundos_da_segundo_atual) {
            cout << "O número é maior." << endl;
        } else if (chute > milissegundos_da_segundo_atual) {
            cout << "O número é menor." << endl;
        } else {
            cout << "ACERTOU!" << endl;
        }

    } while (chute != milissegundos_da_segundo_atual);

    return 0;
}
