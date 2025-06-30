#include <iostream>
using namespace std;

int main() {
    int num [10];
    int sum=0;
    for (int i = 0; i<10; i++){
        cin>>num[i];
        sum+=num[i];
    }
    int media = sum/10;
    cout<<media;
}
