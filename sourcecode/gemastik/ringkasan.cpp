#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Mendefinisikan sekumpulan bilangan
    vector<int> bilangan = {1, 2, 3, 5, 6, 7, 10};

    // Meringkas sekumpulan bilangan
    vector<pair<int, int>> hasil;
    int i = 0;
    while (i < bilangan.size()) {
        int left = bilangan[i];
        int j = i;
        while (j + 1 < bilangan.size() && bilangan[j + 1] == bilangan[j] + 1) {
            j++;
        }
        int right = bilangan[j];
        hasil.push_back({left, right});
        i = j + 1;
    }

    // Menampilkan hasil meringkas
    cout << "Hasil meringkas bilangan: ";
    for (int k = 0; k < hasil.size(); k++) {
        if (hasil[k].first == hasil[k].second) {
            cout << hasil[k].first;
        } else {
            cout << hasil[k].first << "-" << hasil[k].second;
        }
        if (k != hasil.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}