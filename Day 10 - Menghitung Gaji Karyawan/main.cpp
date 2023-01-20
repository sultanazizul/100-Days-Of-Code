#include <iostream>
#include <cstring>

using namespace std;

int main (){
    string nama;
    char golongan[2];
    int jamKerja, upahPerjam,gajiKaryawan, uangLembur;
    cout << "\n\n=========================================\n";
    cout << "         Mengitung Gaji Karyawan";
    cout << "\n=========================================\n\n";

    cout << " Masukkan nama     : "; cin >> nama;
    cout << " Masukkan golongan : "; cin >> golongan;
    cout << " Masukkan jam kerja: "; cin >> jamKerja;

    if (strcmp(golongan, "A")==0){
        upahPerjam=5000;

    } else if (strcmp(golongan, "B")==0){
        upahPerjam=7000;

    } else if (strcmp(golongan, "C")==0){
        upahPerjam=8000;

    } else if (strcmp(golongan, "D")==0){
        upahPerjam=10000;
    }

    gajiKaryawan = upahPerjam * jamKerja;

    /*	Jika jam kerja karyawan lebih dari 48 jam per minggu
 maka akan mendapat uang lembur dengan
perhitungan uang lembur = (jam kerja-48)*4000.
*/

    if (jamKerja>48){
        cout << "\n Dapet Gaji lembur \n";
        uangLembur = (jamKerja-48)*4000;
        gajiKaryawan = gajiKaryawan + uangLembur;
    }

    cout << "\n\n=========================================\n\n";
    cout << " Nama Karyawan      = "<< nama;
    cout << "\n\n Gaji yang diterima = "<< gajiKaryawan;
    cout << "\n\n=========================================\n\n";

    return 0;
}
