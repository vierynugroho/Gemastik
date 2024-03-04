#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> volumes(N);
    int totalVolume = 0;

    for (int i = 0; i < N; ++i) {
        cin >> volumes[i];
        totalVolume += volumes[i];
    }

    int avgVolume = totalVolume / N;

    if (totalVolume % N == 0) {
        if (all_of(volumes.begin(), volumes.end(), [avgVolume](int volume) { return volume == avgVolume; })) {
            cout << "SESUAI" << endl;
        } else {
            for (int i = 0; i < N; ++i) {
                if (volumes[i] != avgVolume) {
                    int X = avgVolume - volumes[i];
                    for (int j = i + 1; j < N; ++j) {
                        if (volumes[j] == avgVolume) {
                            cout << X << " " << i + 1 << " " << j + 1 << endl;
                            return 0;
                        }
                    }
                }
            }
            cout << "TIDAK SESUAI" << endl;
        }
    } else {
        cout << "TIDAK SESUAI" << endl;
    }

    return 0;
}
