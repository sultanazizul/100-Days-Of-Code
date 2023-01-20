#include <iostream>

using namespace std;

void pengulangan();

int main()
{
    int jawaban = 7, tebakan;

    do{
    system("cls");
    cout << " \n ================================ \n"
            "           TEBAK ANGKA \n"
            " ================================ \n";
    cout << "  Prediksi Angka yang dimaksud!\n"
            "  Masukkan prediksimu (1-10): ";
    cin >> tebakan;

    cout << " ================================ \n";
    if (tebakan == jawaban){
        cout <<"  Yey, Kamu menebak dengan benar!\n\n";
    } else if (tebakan > jawaban){
        cout << "  Tebakanmu terlalu tinggi dari jawaban\n\n";
    } else if (tebakan < jawaban){
        cout <<"  Tebakanmu terlalu rendah dari jawaban\n\n";
    }
    }while (tebakan < 1 || tebakan >10);

    pengulangan();

    return 0;
}

void pengulangan (){
    int pilih;
    system ("pause");
    system ("cls");
    cout << " ================================ \n";
    cout << "        Mau kembali main \n"
            " ================================ \n\n"
            "     1. Ke menu \n\n"
            "     2. Keluar \n\n"
            " ================================ \n"
            " pilih : ";
    cin >> pilih;


    if (pilih == 1){
        main();
    } else if (pilih == 2){
        exit(0);
    }
}

