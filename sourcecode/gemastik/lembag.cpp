#include <iostream>

using namespace std;

const int MOD = 998244353;

// Fungsi untuk menghitung pangkat modulo
// int power(int base, int exponent) {
//     int result = 1;
//     while (exponent > 0) {
//         if (exponent % 2 == 1) {
//             result = (1LL * result * base) % MOD;
//         }
//         base = (1LL * base * base) % MOD;
//         exponent /= 2;
//     }
//     return result;
//     // 1024
// }

// int countArrays(int a, int b) {
//     int result = power(2, a * b) - 1;

//     if (result < 0) {
//         result += MOD;
//     }

//     return result;
// }

int main() {
    int a, b;
    cin >> a >> b;

    // int result = countArrays(a, b);
    // b = b+((a-1)/2); // 4
    b = b / ((a-1)/2); // 5
    int result = (a*b)%MOD;
    cout << result << endl;

    return 0;
}
