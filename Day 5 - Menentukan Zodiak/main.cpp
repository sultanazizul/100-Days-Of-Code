#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string zodiak;
    int bulan, tanggal;

    do{
    system("cls");
    cout << "\t========================================================\n";
    cout << "\t                PROGRAM MENENTUKAN ZODIAK\n";
    cout << "\t========================================================\n\n";
            "\t  1. Januari   2. Februari   3. Maret     4. April \n\n"
            "\t  5. Mei       6. Juni       7. Jui       8. Agustus\n\n"
            "\t  9. September 10. Oktober   11. November 12. Desember\n\n"
            "\t========================================================\n\n";
    cout << "\t  Pilih Bulan      : "; cin >> bulan;
    cout << "\n\t  Masukkan Tanggal : "; cin >> tanggal;

    if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19)){
        zodiak = "Aries";
    } else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20)){
        zodiak = "Taurus";
    } else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20)){
        zodiak = "Gemini";
    } else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22)){
        zodiak = "Kanser";
    } else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22)){
        zodiak = "Leo";
    } else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22)){
        zodiak = "Virgo";
    } else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22)){
        zodiak = "Libra";
    } else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 22)){
        zodiak = "Skorpio";
    } else if ((bulan == 11 && tanggal >= 23) || (bulan == 12 && tanggal <= 21)){
        zodiak = "Sagitarius";
    } else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19)){
        zodiak = "Kaprikornus";
    } else if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18)){
        zodiak = "Akuarius";
    } else if ((bulan == 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20)){
        zodiak = "Pises";
    }
    }while (bulan>12 || tanggal > 31);

    cout << "\n\t========================================================";
    cout << "\n\t  Zodiak kamu adalah " << zodiak << "\n";
    cout << "\t========================================================\n\n";




    return 0;
}
