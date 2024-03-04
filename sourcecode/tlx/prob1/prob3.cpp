#include <iostream>

using namespace std;

int main(){
    int a, b, hasil;

    cin >> a >> b;

    int masing = a / b;
    int sisa = a% b;

    cout << "masing-masing " <<  masing << endl;
    cout << "bersisa " <<  sisa << endl;
}