#include <iostream>
using namespace std;

string compareFractions(int A, int B, int C, int D)
{
    if (A * D == B * C)
    {
        return "sama";
    }
    else if (A * D > B * C)
    {
        return "lebih besar";
    }
    else
    {
        return "lebih kecil";
    }
}

int main()
{
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;
    string result = compareFractions(A, B, C, D);
    cout << result << endl;

    return 0;
}