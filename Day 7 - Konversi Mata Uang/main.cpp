#include <iostream>
#include <iomanip>

using namespace std;

void konversiRupiah ();
void konversiDollarAS();
void konversiRinggit();

int main (){
    int pilih;

    cout << "======================\n"
            "  KONVERSI MATA UANG \n"
            "======================\n\n"
            "  1. Rupiah - IDR\n\n"
            "  2. Dollar - AS\n\n"
            "  3. Ringgit - MYR\n\n"
            "======================\n";
    cout << "  Pilih mata uang : "; cin >> pilih;

    system ("cls");
    if (pilih == 1){
        konversiRupiah();
    } else if (pilih == 2){
        konversiDollarAS();
    } else if (pilih == 3){
       konversiRinggit();
    }


 return 0;
}

void konversiRupiah (){
    int pilih;
    float dollar = 0.000064, ringgit = 0.00028, rupiah;
    cout << "======================\n"
            "  KONVERSI RUPIAH KE \n"
            "======================\n\n"
            "  1. Dollar - AS\n\n"
            "  2. Ringgit - MYR\n\n"
            "======================\n";
    cout << " Pilih mata uang : "; cin >> pilih;

    system("cls");
    if (pilih==1){
            cout << "======================\n"
                    "   RUPIAH KE DOLLAR \n"
                    "======================\n\n";
            cout << " Masukkan uang: Rp. "; cin >> rupiah;
            dollar = rupiah * dollar;
            cout << "\n\n======================\n";
            cout << fixed << setprecision(2) << " Hasil : $ "<< dollar;
            cout << "\n======================\n";


    } else if (pilih==2){
            cout << "======================\n"
                    "   RUPIAH KE RINGGIT \n"
                    "======================\n\n";
            cout << " Masukkan uang: Rp. "; cin >> rupiah;
            ringgit = rupiah * ringgit;
            cout << "\n\n======================\n";
            cout << fixed << setprecision(2) << " Hasil : RM. "<< ringgit;
            cout << "\n======================\n";

    }

}

void konversiDollarAS() {
    int pilih, rupiah = 15549.7;
    float ringgit = 4.37, dollar;
    cout << "======================\n"
            "  KONVERSI DOLLAR KE \n"
            "======================\n\n"
            "  1. Rupiah - IDR\n\n"
            "  2. Ringgit - MYR\n\n"
            "======================\n";
    cout << " Pilih mata uang : "; cin >> pilih;

    system("cls");
    if (pilih==1){
            cout << "======================\n"
                    "   DOLLAR KE RUPIAH  \n"
                    "======================\n\n";
            cout << " Masukkan uang: $ "; cin >> dollar;
            rupiah = rupiah * dollar;
            cout << "\n\n======================\n";
            cout << " Hasil : Rp. "<< rupiah;
            cout << "\n======================\n";


    } else if (pilih==2){
            cout << "======================\n"
                    "   DOLLAR KE RINGGIT \n"
                    "======================\n\n";
            cout << " Masukkan uang: $ "; cin >> dollar;
            ringgit = dollar * ringgit;
            cout << "\n\n======================\n";
            cout << fixed << setprecision(2) << " Hasil : RM. "<< ringgit;
            cout << "\n======================\n";

    }
}

void konversiRinggit() {
    int pilih, rupiah = 3555.11;
    float ringgit, dollar = 0.23;
    cout << "======================\n"
            "  KONVERSI RINGGIT KE \n"
            "======================\n\n"
            "  1. Rupiah - IDR\n\n"
            "  2. Dollar - AS\n\n"
            "======================\n";
    cout << " Pilih mata uang : "; cin >> pilih;

    system("cls");
    if (pilih==1){
            cout << "======================\n"
                    "   RINGGIT KE RUPIAH  \n"
                    "======================\n\n";
            cout << " Masukkan uang: RM. "; cin >> ringgit;
            rupiah = rupiah * ringgit;
            cout << "\n\n======================\n";
            cout << " Hasil : Rp. "<< rupiah;
            cout << "\n======================\n";

    } else if (pilih==2){
            cout << "======================\n"
                    "   RINGGIT KE DOLLAR \n"
                    "======================\n\n";
            cout << " Masukkan uang: RM. "; cin >> ringgit;
            dollar = dollar * ringgit;
            cout << "\n\n======================\n";
            cout << fixed << setprecision(2) << " Hasil : $. "<< dollar;
            cout << "\n======================\n";

    }
}

