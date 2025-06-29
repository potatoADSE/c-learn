#include <iostream>
using namespace std;

int main() {
    int t;
    do {
    cout<<"Escolha um numero entre 1 e 8"<<endl;
    cin>>t;
    } while (t>8);
    
    for (int i = 0; i<=t; i++) {
        for (int j =0 ; j<=t; j++) {
            if (t-i-1<j){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }    
}
