#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, x, y, z;
    vector<int> data;

    for(int i=0; i < N; i++){
        cin >> N[i];
        data.push_back(N);
    }

    for(int i=0; i<N; i++){
        
    }
    // cin >> x;
    // cin >> y;
    // cin >> z;

    // volume sama (ml)
    // !=  es 1 kali dengan takaran lipatan 1ml

    // volume sesuai = SESUAI
    // 1 kali dari sebuah gelas ke gelas lain = X Y Z (int) yang menyatakan volume X ml. 
    // Y -> X -> Z
    // != TIDAK = SESUAI

    // N = Banyak gelas
    // X = data ke 1
    // Y = data ke 2
    // Z = data ke 3

    x = x - y;
    y = y%N;
    z = (z%N) + y;
    cout << x << " " << y << " " << z << endl;



}