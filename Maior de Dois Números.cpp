#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Digite o numero A: "<<endl;
    cin>>a;
    cout<<"Agora digite o numero B: "<<endl;
    cin>>b;
    
    if(a>b) {
        cout<<"O numero A e maior";
    }
    else if (a<b) {
        cout<<"O numero B e maior";
    }
    else {
        cout<<"Os dois são iguais";
    }
    
}
