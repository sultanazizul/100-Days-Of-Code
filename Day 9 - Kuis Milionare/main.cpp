#include <iostream>
#include <cstring>

using namespace std;
int level1();
int level2();

int main()
{
    int nilaiLevel1, nilaiLevel2, nilaiTotal;
    cout <<"===================== QUIZ MILIONER =====================\n\n";

    nilaiLevel1 = level1();

    if (nilaiLevel1==50){
        cout << " Selamat Kamu Menyelesaikan Level 1 Dengan Sempurna!!!!\n\n";
        system("pause");
        system("cls");
        nilaiLevel2 =level2();
    } else {
        cout << "\n\n Maaf Nilai Kamu Tidak Mencukupi";
    }
    nilaiTotal= nilaiLevel1+nilaiLevel2;
    system("pause");
    system("cls");

    if (nilaiTotal==100){
    cout << "===================== QUIZ MILIONER =====================\n\n";
    cout << "  Nilai Kamu "<< nilaiTotal << " dari 100\n\n";
    cout << "  Kamu Berhak Membawa Pulang Rp. 1.000.000.000\n\n";
    cout << "=========================================================\n\n";
    }

    return 0;
}

int level1(){
    char jawaban[2];
    int subNilai;
    cout << "       ================ LEVEL 1 ================\n\n";
    cout << " 1. Penduduk asli benua amerika adalah \n\n"
            "      a. INDIAN      b. AMERICAN     c. MADURAN\n\n";

    cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "a")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }


    cout << " 2. Alexander Graham Bell adalah penemu  \n\n"
            "      a. TELEPHONE   b. TELEGRAM  c. TELEPROMTER\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "a")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }

    cout << " 3. Binatang yang merupakan ciri khas rusia adalah   \n\n"
            "      a. BABI        b. BERUANG   c. AYAM\n\n";


     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "b")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }


    cout << " 4. Percakapan antar pemain drama disebut    \n\n"
            "      a. DIALOG      b. MONOLOG   c. PROLOG\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "a")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }


    cout << " 5. Senjata khas suku aborigin     \n\n"
            "      a. KERIS       b. BUMERANG  c. PISAU\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "b")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }

    cout << "=======================================================\n\n";
    return subNilai;
}


int level2(){
    char jawaban[2];
    int subNilai;
    cout << "      ================ LEVEL 2 ================\n\n";
    cout << " 1. Binatang apa yang digunakan sebagai simbol dalam pada majalah playboy  \n\n"
            "      a. KATAK      b. RUSA     c. KELINCI\n\n";

    cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "c")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }

    cout << " 2. Penemu bola lampu pertama kali   \n\n"
            "      a. ALEXSANDER  b. THOMAS ALFA EDISON  c. MASUKA\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "b")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }

    cout << " 3. Sungai Amazone terletak di negara   \n\n"
            "      a. INDONESIA        b. BRAZILIA   c. MAROKO\n\n";


     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "b")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }


    cout << " 4. Permainan kartu solitaire, umumnya dimainkan oleh   \n\n"
            "      a. 1 Orang      b. 3 Orang  c. 2 Orang\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "a")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }


    cout << " 5. Delegasi Indonesia dalam konferensi meja bundar adalah     \n\n"
            "      a. DRS. MOH. HATTA       b. SOEKARNO  c. SAMSUDIN\n\n";

     cout << " Jawaban : "; cin >> jawaban;

    if (strcmp(jawaban, "a")==0){
        cout << "\n\t\t <|BENAR|>\n\n\n";
        subNilai += 10;
    } else {
        cout << "\n\t\t <|SALAH|>\n\n\n";
    }
    cout <<"\n\n==============================================================\nn";
    cout << " Selamat Kamu Menyelesaikan Level 2 Dengan Sempurna!!!!\n\n";
    return subNilai;
}



