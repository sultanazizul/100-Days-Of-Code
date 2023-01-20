#include <iostream>

using namespace std;

int main()
{
    char nilaiHuruf;
    int nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    cout << " Masukkan Nilai Tugas : "; cin >> nilaiTugas;
    cout << " Masukkan Nilai UAS : "; cin >> nilaiUAS;
    cout << " Masukkan Nilai UTS : "; cin >> nilaiUTS;

    nilaiAkhir = nilaiTugas*0.3 + nilaiUAS*0.35 + nilaiUTS*0.35;

    if (nilaiAkhir<=45){
        nilaiHuruf = 'E';
    } else if (nilaiAkhir<=46){
        nilaiHuruf = 'D';
    } else if (nilaiAkhir<=55){
        nilaiHuruf = 'C';
    } else if (nilaiAkhir<=70){
        nilaiHuruf = 'B';
    } else if (nilaiAkhir<=90 || nilaiAkhir <=100){
        nilaiHuruf = 'A';
    }

    cout << "\n Nilai Akhir = " << nilaiAkhir;
    cout << "\n Nilai Huruf = " << nilaiHuruf;

    if (nilaiAkhir >= 70) {
        cout << "\n\n Mahasiwa LULUS ";
    } else if (nilaiAkhir <70 ){
        cout << "\n\n Mahasiswa TIDAK LULUS ";
    }

    return 0;
}
