#include <iostream>
#include <string>
using namespace std;

int minimumOperations(int N, string A, string B)
{
    int operations = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > B[i])
        {
            operations++;
        }
    }
    return operations;
}

int main()
{
    int N;
    string A, B;

    cin >> N;
    cin.ignore();
    getline(cin, A);
    getline(cin, B);

    int result = minimumOperations(N, A, B);
    cout << result << endl;

    return 0;
}