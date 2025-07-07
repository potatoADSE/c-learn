#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    auto agora = chrono::system_clock::now();

    time_t tempo_segundos = std::chrono::system_clock::to_time_t(agora);

    auto duracao = agora.time_since_epoch();
    auto milissegundos_total = chrono::duration_cast<chrono::milliseconds>(duracao).count();

    long long milissegundos_da_segundo_atual = milissegundos_total % 1000;

    int chute;
    cout<<"Tente acertar o numero de 1 a 1000 que eu pensei: "<<endl;
    cin>>chute;
    if(chute==milissegundos_da_segundo_atual) {
        cout<<"ACERTOU!"<<endl;
    }
    
    do {
        if(chute<milissegundos_da_segundo_atual) {
            cout<<"O numero é maior"<<endl;
            cout<<"Tente novamente: "<<endl;
            cin>>chute;
        }
        else if(chute>milissegundos_da_segundo_atual){
            cout<<"O numero é menor"<<endl;
            cout<<"Tente novamente: "<<endl;
            cin>>chute;
        }
    } while (chute!=milissegundos_da_segundo_atual);

    return 0;
}
