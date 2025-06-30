#include <iostream>
using namespace std;

int potencia(int a, int b){
    int c=1;
    for (int i = 0;i<b;i++) {
        c*=a;
    }
    return c;
}

int main() {
    int c,d;
    cin>>c>>d;
    int resultado = potencia(c,d);
    cout<<resultado;

  return 0;
}
