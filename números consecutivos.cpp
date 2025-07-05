#include <iostream>
using namespace std;

int main() {
    int data;
    cin >> data;

    int cons = 1; 
    int maximo = 1; 
    int nums[data];
    for (int i = 0; i < data; i++) {
        cin >> nums[i];
    }

    for (int i = 1; i < data; i++) { 
        if (nums[i] == nums[i - 1]) {
            cons++; 
            if (cons > maximo) {
                maximo = cons; 
            }
        }
        else {
            cons = 1; 
        }
    }

    cout << maximo << endl;

    return 0;
}
