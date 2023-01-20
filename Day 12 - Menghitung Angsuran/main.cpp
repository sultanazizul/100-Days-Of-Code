#include <iostream>

using namespace std;

int main()
{
    int pokokPinjaman, lamaPinjaman, angsuranPokok, totalAngsuran, angsuranPerbulan, bungaBulan, totalBunga;
    float besarBunga;

    cout << "\n\n\n";
    cout << "   POKOK PINJAMAN       : Rp. "; cin >> pokokPinjaman;
    cout << "   BESAR BUNGA (%)      : " ; cin >> besarBunga;
    cout << "   LAMA PINJAMAN (1-12) : "; cin >> lamaPinjaman;

    angsuranPokok = pokokPinjaman/lamaPinjaman;
    besarBunga = besarBunga/100;

    cout << "\n\n\n";
    cout << "====================================================================\n";
    cout << "   Bulan        Bunga       Angsuran Pokok      Angsuran Perbulan\n";
    cout << "====================================================================\n\n";

    for (int i=1; i<=lamaPinjaman; i++){
        bungaBulan = (pokokPinjaman-((i-1)*angsuranPokok))*besarBunga/12;

        angsuranPerbulan = angsuranPokok+bungaBulan;

        cout << "     "<<i<<"         Rp. "<<bungaBulan<<"       Rp. "<<angsuranPokok<<"            Rp. "<<angsuranPerbulan<<"\n\n";

        totalBunga += bungaBulan;
        totalAngsuran += angsuranPerbulan;
    }

    cout << "==================================================================(+)\n\n";
    cout << "  Total Bunga    =                                 Rp. "<<totalBunga;
    cout << "\n  Total Angsuran =                                 Rp. "<<totalAngsuran;
    cout << "\n\n====================================================================";
    cout << "\n\n\n";
    return 0;
}
