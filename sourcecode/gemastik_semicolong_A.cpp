#include <iostream>
#include <cmath>

int main()
{
    int A, B, C, D;

    std::cin >> A >> B;
    std::cin >> C >> D;

    if (
        A >= 1 && A <= pow(10, 5) &&
        B >= 1 && B <= pow(10, 5) &&
        C >= 1 && C <= pow(10, 5) &&
        D >= 1 && D <= pow(10, 5))
    {
        if (A / B == C / D)
        {
            std::cout << "sama";
        }
        else if (A / B >= C / D)
        {
            std::cout << "lebih besar";
        }
        else if (A / B <= C / D)
        {
            std::cout << "lebih kecil";
        }
    }
    else
    {
        return 0;
    }

    return 0;
}