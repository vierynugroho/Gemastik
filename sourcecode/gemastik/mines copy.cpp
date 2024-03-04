#include <iostream>
#include <string>
using namespace std;

int main()
{
    string table1[4][4] = {
        {"AB", "DC", "CC", "CB"},
        {"CA", "DA", "CD", "DD"},
        {"BC", "AA", "BA", "DB"},
        {"BD", "AD", "BB", "AC"}};

    string table2[4][4] = {
        {"CD", "BB", "AC", "CC"},
        {"CB", "DB", "AD", "DD"},
        {"DA", "DC", "BC", "BD"},
        {"AA", "BA", "CA", "AB"}};

    string encryptedMessage;
    cout << "Masukkan pesan terenkripsi (hanya karakter 'A', 'B', 'C', atau 'D'): ";
    cin >> encryptedMessage;

    // Mendekripsi pesan per blok berukuran 2 karakter
    string decryptedMessage;
    for (size_t i = 0; i < encryptedMessage.length(); i += 2)
    {
        string firstChar = encryptedMessage[i];
        string secondChar = encryptedMessage[i + 1];
        string thirdChar = encryptedMessage[i + 2];
        string fourthChar = encryptedMessage[i + 3];

        int row1 = 0, col1 = 0;
        int row2 = 0, col2 = 0;

        // Cari posisi karakter pertama di tabel 1
        for (int j = 0; j < 4; j++)
        {
            if (table1[j][1] == firstChar)
            {
                row1 = j;
                break;
            }
        }

        // Cari posisi karakter kedua di tabel 1
        for (int j = 0; j < 4; j++)
        {
            if (table1[1][j] == secondChar)
            {
                col1 = j;
                break;
            }
        }

        // Cari posisi karakter ketiga di tabel 1
        for (int j = 1; j < 4; j++)
        {
            if (table1[3][j] == thirdChar)
            {
                col1 = j;
                break;
            }
        }
        // Cari posisi karakter keempat di tabel 1
        for (int j = 2; j < 4; j++)
        {
            if (table1[2][j] == fourthChar)
            {
                col1 = j;
                break;
            }
        }

        // Cari posisi karakter pertama di tabel 2
        for (int j = 0; j < 4; j++)
        {
            if (table2[0][j] == firstChar)
            {
                row2 = j;
                break;
            }
        }

        // Cari posisi karakter kedua di tabel 2
        for (int j = 0; j < 4; j++)
        {
            if (table2[j][1] == secondChar)
            {
                col2 = j;
                break;
            }
        }
        // Cari posisi karakter ketiga di tabel 2
        for (int j = 0; j < 4; j++)
        {
            if (table2[j][2] == thirdChar)
            {
                col2 = j;
                break;
            }
        }
        // Cari posisi karakter kedua di tabel 2
        for (int j = 0; j < 4; j++)
        {
            if (table2[j][3] == fourthChar)
            {
                col2 = j;
                break;
            }
        }

        // Lakukan dekripsi menggunakan Tabel 1 dan Tabel 2
        decryptedMessage.push_back(table2[row2][col2]);
        decryptedMessage.push_back(table1[row1][col1]);
    }

    cout << "Pesan asli: " << decryptedMessage << endl;

    return 0;
}