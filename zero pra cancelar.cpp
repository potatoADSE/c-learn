#include <iostream>
#include <stack>
using namespace std;

int main() {
    int soma=0;
    int numero;
    int vezes;
    cin>>vezes;
    stack<int> numeros;
    for (int i=1;i<=vezes;i++) {
        cin>>numero;
        if (numero!=0) {
            numeros.push(numero);
        }
        else if (!numeros.empty()&&numero==0) {
            numeros.pop();
        }
    }
    while (!numeros.empty()) {
        soma+=numeros.top();
        numeros.pop();
    }
    cout<<soma;
    
    return 0;
}
