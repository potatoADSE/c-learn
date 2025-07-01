#include <iostream>
using namespace std;

int main() {
    
    int lista[5];
    for (int i = 0; i < 5; i++) {
        cin>>lista[i];
    }
    
    for (int i = 0; i < 5 - 1; i++) {
        int changes = 0;
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                changes++;
            }
        }
        if (changes == 0) {
            break;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout<<lista[i]<<" ";
    }
    return 0;
    
}
