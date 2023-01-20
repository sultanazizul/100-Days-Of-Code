#include <iostream>

using namespace std;

int main()
{
    int pilihanOperasi;
    int bilangan1, bilangan2, hasil;
    cout << "============================\n"
            "         KALKULATOR \n"
            "============================\n"
            "  1. Penjumlahan\n"
            "  2. Pengurangan \n"
            "  3. Perkalian \n"
            "  4. Pembagian\n"
            "============================\n";
    cout << " Masukkan operasi : "; cin >> pilihanOperasi;
    cout << "============================\n";

    if(pilihanOperasi == 1){
        cout << " Masukkan bilangan pertama : "; cin >> bilangan1;
        cout << " Masukkan bilangan kedua   : "; cin >> bilangan2;
        hasil = bilangan1 + bilangan2;
        cout << "============================\n";
        cout << " Hasil "<< bilangan1 <<" + "<< bilangan2<< " = " << hasil;
        cout << "\n============================\n";

    } else if (pilihanOperasi == 2){
        cout << " Masukkan bilangan pertama : "; cin >> bilangan1;
        cout << " Masukkan bilangan kedua   : "; cin >> bilangan2;
        hasil = bilangan1 - bilangan2;
        cout << "============================\n";
        cout << " Hasil "<< bilangan1 <<" - "<< bilangan2<< " = " << hasil;
        cout << "\n============================\n";

    } else if (pilihanOperasi == 3){
        cout << " Masukkan bilangan pertama : "; cin >> bilangan1;
        cout << " Masukkan bilangan kedua   : "; cin >> bilangan2;
        hasil = bilangan1 * bilangan2;
        cout << "============================\n";
        cout << " Hasil "<< bilangan1 <<" x "<< bilangan2<< " = " << hasil;
        cout << "\n============================\n";

    } else if (pilihanOperasi == 4){
        cout << " Masukkan bilangan pertama : "; cin >> bilangan1;
        cout << " Masukkan bilangan kedua   : "; cin >> bilangan2;
        hasil = bilangan1 / bilangan2;
        cout << "============================\n";
        cout << " Hasil "<< bilangan1 <<" : "<< bilangan2<< " = " << hasil;
        cout << "\n============================\n";
    } else {
        cout<< " Pilihan gak ada oiiii, pilih yang ada aja!!!!!!";
        cout << "============================\n";
    }

    return 0;
}
