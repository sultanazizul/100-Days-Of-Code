#include <iostream>
#include <cstring>
#define PHI 3.14

using namespace std;

int lingkaran();
int segitigaSembarang ();
int persegi();
int jajarGenjang();
int trapesium();
int belahKetupat();
void pengulangan();
int keliling, luas;

int main()
{
    int pilihBD;
    cout << "===============================\n"
            "       Bangun Datar  \n"
            "===============================\n"
            "   1. Lingkaran \n"
            "   2. Persegi \n"
            "   3. Trapesium \n"
            "   4. Jajar Genjang \n"
            "   5. Belah Ketupat \n"
            "   6. Segitiga Sembarang \n"
            "===============================\n";
    cout << " Pilih bangun datar : "; cin >> pilihBD;

    system("cls");
    if (pilihBD == 1){
           lingkaran ();
    } else if (pilihBD == 2){
            persegi();
    } else if (pilihBD == 3){
            trapesium();
    } else if (pilihBD == 4){
            jajarGenjang();
    } else if (pilihBD == 5){
            belahKetupat();
    } else if (pilihBD == 6){
            segitigaSembarang();
    } else {
        cout << "\n Maaf pilihan tidak tersedia! ";
    }
    pengulangan();
    return 0;


}

int lingkaran (){
    int jari2;
    cout << "=======    LINGKARAN   ========\n";

    cout << " Masukkan Jari Jari : ";
    cin >> jari2;

    keliling = 2*PHI*jari2;
    luas =  PHI*jari2*jari2;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

int persegi (){
    int sisi;
    cout << "=======    PERSEGI     ========\n";

    cout << " Masukkan sisi : ";
    cin >> sisi;

    keliling = 4 * sisi;
    luas =  sisi * sisi;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

int trapesium (){
    int sisi1, sisi2, sisi3, sisi4, alas1, alas2, tinggi;
    cout << "=======   TRAPESIUM    ========\n";

    cout << " Masukkan sisi 1: ";
    cin >> sisi1;
    cout << " Masukkan sisi 2: ";
    cin >> sisi2;
    cout << " Masukkan sisi 3: ";
    cin >> sisi3;
    cout << " Masukkan sisi 4: ";
    cin >> sisi4;
    cout << " Masukkan alas 1: ";
    cin >> alas1;
    cout << " Masukkan alas 2: ";
    cin >> alas2;
    cout << " Masukkan tinggi: ";
    cin >> tinggi;

    keliling = sisi1+sisi2+sisi3+sisi4;
    luas =  0.5*(alas1+alas2)*tinggi;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

int jajarGenjang (){
    int sisiSejajar, sisiMiring, alas, tinggi;
    cout << "======= JAJAR GENJANG  ========\n";

    cout << " Masukkan sisi sejajar: ";
    cin >> sisiSejajar;
    cout << " Masukkan sisi miring : ";
    cin >> sisiMiring;
    cout << " Masukkan alas        : ";
    cin >> alas;
    cout << " Masukkan tinggi      : ";
    cin >> tinggi;

    keliling = 2*(sisiSejajar+sisiMiring);
    luas =  alas*tinggi;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

int belahKetupat (){
    int sisi, diagonal1, diagonal2;
    cout << "======= Belah Ketupat ========\n";

    cout << " Masukkan sisi : ";
    cin >> sisi;
    cout << " Masukkan diagonal 1 : ";
    cin >> diagonal1;
    cout << " Masukkan diagonal 2 : ";
    cin >> diagonal2;


    keliling = 4 * sisi;
    luas =  0.5 * diagonal1 * diagonal2;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

int segitigaSembarang (){
    int sisi1, sisi2, sisi3, alas, tinggi;
    cout << "====== Segitiga Sembarang =====\n";
    cout << " Masukkan sisi 1      : ";
    cin >> sisi1;
    cout << " Masukkan sisi 2      : ";
    cin >> sisi2;
    cout << " Masukkan sisi 3      : ";
    cin >> sisi3;
    cout << " Masukkan alas        : ";
    cin >> alas;
    cout << " Masukkan tinggi      : ";
    cin >> tinggi;

    keliling = sisi1+sisi2+sisi3;
    luas =  0.5*alas*tinggi;

    cout << "===============================\n";
    cout << " Keliling = " << keliling;
    cout << "\n Luas     = " << luas;
    cout << "\n===============================\n";

    return 0;
}

void pengulangan (){
    char pilih [1];
    cout << " Mau menghitung lagi? (y/t)"; cin >> pilih;

    if ((strcmp(pilih, "y")==0)||(strcmp(pilih, "Y")==0)){
            system("cls");
            main();
    } else if ((strcmp(pilih, "t")==0)||(strcmp(pilih, "T")==0)){
            system("cls");
            cout << "\n Makasih lo udah mampir\n\n\n ";
            exit(0);
    }

}


