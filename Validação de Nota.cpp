#include <iostream>
using namespace std;

int main() {
    int a;

    do {
        cout<<"Digite uma nota de 1 a 10"<<endl;
        cin>>a;
    } while (a<1 || a>10);
    
    return 0;
}
