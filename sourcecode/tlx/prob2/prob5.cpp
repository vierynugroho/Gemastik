#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float N;
    float F, C;

    cin >> N;
    F = floor(N);
    C = ceil(N);

    int F_trunc = trunc(F);
    int C_trunc = trunc(C);
    
    if(F == F_trunc && C == C_trunc){
    cout << F << " " << C << endl;
    }

}       