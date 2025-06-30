#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int fatorial = 1;
    for(int i = 1; i <= a; i++) {
        fatorial = fatorial * i;
    }

    cout << fatorial << endl;

    return 0;
}
