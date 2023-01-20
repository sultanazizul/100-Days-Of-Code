#include <iostream>
#include <cstring>
#define PHI 3.14

using namespace std;

int tabung();
int bola ();
int kerucut();
int limasSegiempat();
int prismaSegitiga();
void pengulangan();
int volume, luasPermukaan, pilih;

int main()
{
    int pilihBR;
    cout << "\n\n\t===============================\n"
            "\t         Bangun Ruang  \n"
            "\t===============================\n\n"
            "\t   1. Tabung \n"
            "\t   2. Kerucut \n"
            "\t   3. Prisma Segitiga \n"
            "\t   4. Limas Segiempat \n"
            "\t   5. Bola \n"
            "\t   6. Keluar \n\n"
            "\t===============================\n\n";
    cout << "\t Pilih bangun ruang : "; cin >> pilihBR;

    system("cls");
    if (pilihBR == 1){
           tabung ();
    } else if (pilihBR == 2){
            kerucut();
    } else if (pilihBR == 3){
            prismaSegitiga();
    } else if (pilihBR == 4){
            limasSegiempat();
    } else if (pilihBR == 5){
            bola();
    } else if (pilihBR == 6){
        cout << "\n\n\t================================================\n"
                "\n\t Terima Kasih Telah Menggunakan Program Ini!! \n"
                "\n\t================================================\n";
        exit(0);
    } else {
        cout << "\n\t Maaf pilihan tidak tersedia!\n ";
    }
    pengulangan();
    return 0;


}

int tabung (){
    int jari2;
    cout << "\n\n\t===============================\n"
            "\t||           TABUNG          ||\n"
            "\t===============================\n\n"
            "\t    1. VOLUME \n\n"
            "\t    2. LUAS PERMUKAAN \n\n"
            "\t===============================\n\n"
            "\t  Masukkan pilihanmu : "; cin >> pilih;


    system("cls");
    if (pilih==1){
        cout << "\n\n\t===============================\n"
                "\t||       VOLUME TABUNG       || \n"
                "\t===============================\n\n"
                "\t  Rumus : 2 x PHI x r \n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari  : "; cin >> jari2;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

                volume = 2*PHI*jari2;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Volume Tabung = " << volume << "\n\n"
                "\t===============================\n";

    } else if (pilih==2){
        cout << "\n\n\t===============================\n"
                "\t||   LUAS PERMUKAAN TABUNG   ||\n"
                "\t===============================\n\n"
                "\t  Rumus :  PHI x r x r \n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari  : "; cin >> jari2;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");
                luasPermukaan =  PHI*jari2*jari2;


        cout << "\n\n\t===========| Hasil |===========\n\n"
                "\t  Luas Permukaan Tabung = " << luasPermukaan << "\n\n"
                "\t===============================\n";

    } else {
        cout << "\n\n\t===============================\n"
                "\t  Maaf Pilihan Tidak Tersedia!\n"
                "\t===============================\n";
    }

    pengulangan();

    return 0;
}

int kerucut (){
    int jari2, tinggi;
    cout << "\n\n\t===============================\n"
            "\t             KERUCUT  \n"
            "\t===============================\n\n"
            "\t    1. VOLUME \n\n"
            "\t    2. LUAS PERMUKAAN \n\n"
            "\t===============================\n"
            "\t  Masukkan pilihanmu : "; cin >> pilih;

    system("cls");
    if (pilih==1){
        cout << "\n\n\t===============================\n"
                "\t         VOLUME KERUCUT  \n"
                "\t===============================\n\n"
                "\t  Rumus : 3/4 x PHI x r x r x t\n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari  : "; cin >> jari2;
        cout << "\t  Masukkan tinggi     : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

                volume = 0.75*PHI*jari2*jari2*tinggi;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Volume Kerucut = " << volume << "\n\n"
                "\t===============================\n";

    } else if (pilih==2){
        cout << "\n\n\t===============================\n"
                "\t    LUAS PERMUKAAN KERUCUT  \n"
                "\t===============================\n\n"
                "\t  Rumus : 2 x PHI x r x (r+t) \n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari  : "; cin >> jari2;
        cout << "\t  Masukkan tinggi     : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        luasPermukaan =  2*PHI*jari2*(jari2+tinggi);

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Luas Permukaan Kerucut = " << luasPermukaan << "\n\n"
                "\t===============================\n";

    } else {
        cout << "\n\n\t===============================\n"
                "\t Maaf Pilihan Tidak Tersedia!\n"
                "\t===============================\n";
    }

    pengulangan();


    return 0;
}

int prismaSegitiga (){
    int alas, tinggi;
    cout << "\n\n\t===============================\n"
            "\t       PRISMA SEGITIGA  \n"
            "\t===============================\n\n"
            "\t    1. VOLUME \n\n"
            "\t    2. LUAS PERMUKAAN \n\n"
            "\t===============================\n"
            "\t  Masukkan pilihanmu : "; cin >> pilih;

    system("cls");
    if (pilih==1){
        cout << "\n\n\t===============================\n"
                "\t      VOLUME PRISMA SEGITIGA  \n"
                "\t===============================\n\n"
                "\t  Rumus : (1/2 x a x t)x t\n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan alas   : "; cin >> alas;
        cout << "\t  Masukkan tinggi : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        volume = (0.5*alas*tinggi)*tinggi;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Volume = " << volume << "\n\n"
                "\t===============================\n";

    } else if (pilih==2){
        cout << "\n\n\t===============================\n"
                "\t Luas Permukaan PRISMA SEGITIGA  \n"
                "\t===============================\n\n"
                "\t  Rumus :  2 x PHI x a (a + t)\n\n"
                "\t===============================\n";
        cout << "\t  Masukkan alas   : "; cin >> alas;
        cout << "\t  Masukkan tinggi : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        luasPermukaan =  2*PHI*alas*(alas+tinggi);

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Luas Permukaan = " << luasPermukaan << "\n\n"
                "\t===============================\n";

    } else {
        cout << "\n\n\t===============================\n"
                "\t  Maaf Pilihan Tidak Tersedia!\n"
                "\t===============================\n";
    }

    pengulangan();


    return 0;
}

int limasSegiempat (){
    int sisi,tinggi;
    cout << "\n\n\t===============================\n"
            "\t       LIMAS SEGIEMPAT  \n"
            "\t===============================\n\n"
            "\t    1. VOLUME \n\n"
            "\t    2. LUAS PERMUKAAN \n\n"
            "\t===============================\n\n"
            "\t  Masukkan pilihanmu : "; cin >> pilih;

    system("cls");
    if (pilih==1){
        cout << "\n\n\t===============================\n"
                "\t     VOLUME LIMAS SEGIEMPAT  \n"
                "\t===============================\n\n"
                "\t  Rumus : 3/4 x s x s x t\n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan sisi   : "; cin >> sisi;
        cout << "\t  Masukkan tinggi : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        volume = 0.75*sisi*sisi*tinggi;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Volume = " << volume << "\n\n"
                "\t===============================\n";

    } else if (pilih==2){
        cout << "\n\n\t===============================\n"
                "\t LUAS PERMUKAAN LIMAS SEGIEMPAT\n"
                "\t===============================\n\n"
                "\t  Rumus : PHI x s x t \n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan sisi   : "; cin >> sisi;
        cout << "\t  Masukkan tinggi : "; cin >> tinggi;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        luasPermukaan =  PHI*sisi*tinggi;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Luas Permukaan = " << luasPermukaan << "\n"
                "\t===============================\n";

    } else {
        cout << "\n\n\t===============================\n"
                "\t  Maaf Pilihan Tidak Tersedia!\n"
                "\t===============================\n";
    }

    pengulangan();

    return 0;
}


int bola (){
    int jari2;
    cout << "\n\n\t===============================\n"
            "\t             BOLA  \n"
            "\t===============================\n\n"
            "\t    1. VOLUME \n\n"
            "\t    2. LUAS PERMUKAAN \n\n"
            "\t===============================\n\n"
            "\t  Masukkan pilihanmu : "; cin >> pilih;

    system("cls");
    if (pilih==1){
        cout << "\n\n\t===============================\n"
                "\t          VOLUME BOLA  \n"
                "\t===============================\n\n"
                "\t  Rumus : PHI x r x r\n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari : "; cin >> jari2;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        volume = PHI*jari2*jari2;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Volume = " << volume << "\n\n"
                "\t===============================\n";

    } else if (pilih==2){
        cout << "\n\n\t===============================\n"
                "\t      LUAS PERMUKAAN BOLA  \n"
                "\t===============================\n\n"
                "\t  Rumus : 3/4 x PHI x r x r \n\n"
                "\t===============================\n\n";
        cout << "\t  Masukkan jari jari : "; cin >> jari2;
        cout << "\n\t===============================";

        cout << "\n\n\t--> Klik KEY untuk melihat hasil! \n\n\t";
        system("pause");
        system("cls");

        luasPermukaan =  0.73*PHI*jari2*jari2*jari2;

        cout << "\n\n\t============ Hasil ============\n\n"
                "\t  Luas Permukaan = " << luasPermukaan << "\n\n"
                "\t===============================\n";

    } else {
        cout << "\n\n\t===============================\n"
                "\t  Maaf Pilihan Tidak Tersedia!\n"
                "\t===============================\n";
    }

    pengulangan();

    return 0;
}

void pengulangan (){
    char pilih [1];
    cout << "\n\n\n\t->  Kembali ke Menu? (y/t) : "; cin >> pilih;

    if ((strcmp(pilih, "y")==0)||(strcmp(pilih, "Y")==0)){
        system("cls");
        main();
    } else if ((strcmp(pilih, "t")==0)||(strcmp(pilih, "T")==0)){
        system("cls");
        cout << "\n\n\t================================================\n"
                "\n\t Terima Kasih Telah Menggunakan Program Ini!! \n"
                "\n\t================================================\n";
        exit(0);
    }

}


