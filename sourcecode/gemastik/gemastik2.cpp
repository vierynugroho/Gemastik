#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> datas;

    int n, total, avgVolume;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int data;
        cin >> data;
        datas.push_back(data);
    }

    for (int i = 0; i < datas.size(); ++i)
    {
        total = datas[i] += datas[i];
        avgVolume = total / n;
    }
    if (total % n != 0)
    {
        cout << "SESUAI";
    }
    else if(total %n ==0)
    {
        for (int i = 0; i < datas.size(); ++i)
        {
            if (datas[i] != avgVolume)
            {
                int x = avgVolume - datas[i];
                for (int j = i + 1; j < n; ++j)
                {
                    if (datas[i] == avgVolume)
                    {
                        int y = i + 1;
                        int z = j + 1;
                        cout << x << " " << y << " " << z << endl;
                    }
                }
            }
        }
    }
        else
    {
        cout << "TIDAK SESUAI";
    }

    return 0;
}
