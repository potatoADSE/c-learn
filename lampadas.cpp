#include <iostream>
using namespace std;

int main() {
    
    int R = 0;
    int L = 0;
    int qntInput;
    
    cin>>qntInput;
    
    int entradas[qntInput];

    for (int i = 0; i <qntInput; i++) {
        cin>>entradas[i];
        if (entradas[i] == 1 && R == 1) {
            R=0;
        }
        else if (entradas[i] == 1 && R == 0) {
            R = 1;
        }
        else if (entradas[i] == 2) {
            R = 1 - R;
            L = 1 - L; 
        }
    }
    cout<<R<<endl<<L;
    
    return 0;
    
}
