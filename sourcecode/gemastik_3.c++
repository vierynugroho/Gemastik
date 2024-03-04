#include <iostream>
#include <vector>

const int MOD = 1000000007;

std::vector<long long> dp;

long long countUbinArrangements(long long N)
{
    dp.resize(N + 1, 0);

    // Kasus dasar
    dp[0] = 1; // Lantai kosong

    // Perhitungan dinamis
    for (int i = 1; i <= N; i++)
    {
        // Ubin berukuran 1 x 1
        dp[i] += dp[i - 1];
        dp[i] %= MOD;
        // Ubin berukuran 1 x 2
        if (i >= 2)
        {
            dp[i] += dp[i - 2];
            dp[i] %= MOD;
        }
    }

    return dp[N];
}

int main()
{
    long long N;
    std::cout << "Masukkan nilai N: ";
    std::cin >> N;

    long long arrangements = countUbinArrangements(N);
    std::cout << "Jumlah susunan kemungkinan pemasangan ubin: " << arrangements << std::endl;

    return 0;
}
