#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSmallestK(int N, const vector<int>& numbers) {
    // Mencari nilai terbesar dalam vektor numbers
    int maxNumber = *max_element(numbers.begin(), numbers.end());

    // Mencari nilai K terkecil yang memenuhi kondisi
    for (int K = 1; K <= maxNumber; ++K) {
        bool valid = true;
        for (int i = 0; i < N; ++i) {
            if (numbers[i] % K != 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return K;
        }
    }

    return -1;
}

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int result = findSmallestK(N, numbers);
    cout << result << endl;

    return 0;
}
