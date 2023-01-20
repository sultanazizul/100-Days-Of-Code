#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void konversiCelcius();
void konversiFarenheit();
void konversiReamur();
void konversiKelvin();
void konversiRankine();
void pengulangan ();

int main(){
    int pilihSuhu;
    cout << "==================================\n"
            "          KONVERSI SUHU\n"
            "==================================\n\n"
            "  1. Celcius \n\n"
            "  2. Farenheit \n\n"
            "  3. Reamur \n\n"
            "  4. Kelvin\n\n"
            "  5. Rankine \n\n"
            "==================================\n";
    cout << "  Pilih suhu : "; cin >> pilihSuhu;

    system("cls");
    if (pilihSuhu == 1 ){
            konversiCelcius();
    } else if (pilihSuhu == 2 ){
            konversiFarenheit();
    } else if (pilihSuhu == 3 ){
            konversiReamur();
    } else if (pilihSuhu == 4 ){
            konversiKelvin();
    } else if (pilihSuhu == 5 ){
            konversiRankine();
    }

    pengulangan();


 return 0;
}

void konversiCelcius(){
    int pilihKonversi;
    float celcius, reamur, farenheit, kelvin, rankine;

    cout <<"==================================\n"
           "     KONVERSI SUHU CELCIUS KE\n"
           "==================================\n\n"
           "   1. REAMUR \n\n"
           "   2. FARENHEIT \n\n"
           "   3. KELVIN\n\n"
           "   4. RANKINE\n\n"
           "==================================\n\n";
    cout <<"  Pilih Konversi : "; cin >> pilihKonversi;

    cout << fixed;
    cout << setprecision(2);

    system("cls");
    if (pilihKonversi==1){
        cout << "==================================\n"
                "        CELCIUS KE REAMUR\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam celcius : "; cin >> celcius;
        reamur = 0.8*celcius;

        cout << "\n============= HASIL =============\n\n";
        cout << celcius << " Celcius" << " = " << reamur << " Reamur\n\n";
        cout << "==================================\n";

    } else  if (pilihKonversi== 2){
        cout << "==================================\n"
                "        CELCIUS KE FARENHEIT\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam celcius : "; cin >> celcius;
        farenheit = 1.8*celcius + 32;

        cout << "\n============= HASIL =============\n\n";
        cout << celcius << " Celcius" << " = " << farenheit << " Farenheit\n\n";
        cout << "==================================\n";

    } else  if (pilihKonversi== 3){
        cout << "==================================\n"
                "        CELCIUS KE KELVIN\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam celcius : "; cin >> celcius;
        kelvin = celcius + 273.15;

        cout << "\n============= HASIL =============\n\n";
        cout << celcius << " Celcius" << " = " << kelvin << " Kelvin\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi== 4){
        cout << "==================================\n"
                "        CELCIUS KE RANKINE\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam celcius : "; cin >> celcius;
        rankine = (273.15+celcius)*1.8;

        cout << "\n============= HASIL =============\n\n";
        cout << celcius << " Celcius" << " = " << rankine << " Rankine\n\n";
        cout << "==================================\n";
   }
}

void konversiFarenheit(){
    int pilihKonversi;
    float celcius, reamur, farenheit, kelvin, rankine;

    cout <<"==================================\n"
           "     KONVERSI SUHU FARENHEIT KE\n"
           "==================================\n\n"
           "   1. REAMUR \n\n"
           "   2. CELCIUS \n\n"
           "   3. KELVIN\n\n"
           "   4. RANKINE\n\n"
           "==================================\n\n";
    cout <<"  Pilih Konversi : "; cin >> pilihKonversi;

    cout << fixed;
    cout << setprecision(2);

    system("cls");
    if (pilihKonversi==1){
        cout << "==================================\n"
                "        FARENHEIT KE REAMUR\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam farenheit : "; cin >> farenheit;
        reamur = 0.4*(farenheit-32);

        cout << "\n============= HASIL =============\n\n";
        cout << farenheit << " Farenheit" << " = " << reamur << " Reamur\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==2){
        cout << "==================================\n"
                "        FARENHEIT KE CELCIUS\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam farenheit : "; cin >> farenheit;
        celcius = (farenheit-32)*0.5;

        cout << "\n============= HASIL =============\n\n";
        cout << farenheit << " Farenheit" << " = " << celcius << " Celcius\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==3){
        cout << "==================================\n"
                "        FARENHEIT KE KElVIN\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam farenheit : "; cin >> farenheit;
        kelvin = (farenheit+459.67)*0.5;

        cout << "\n============= HASIL =============\n\n";
        cout << farenheit << " Farenheit" << " = " << kelvin << " Kelvin\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==4){
        cout << "==================================\n"
                "        FARENHEIT KE RANKINE\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam farenheit : "; cin >> farenheit;
        rankine = farenheit+459.67;

        cout << "\n============= HASIL =============\n\n";
        cout << farenheit << " Farenheit" << " = " << rankine << " Rankine\n\n";
        cout << "==================================\n";
    }
}

void konversiReamur(){
    int pilihKonversi;
    float celcius, reamur, farenheit, kelvin, rankine;

    cout <<"==================================\n"
           "     KONVERSI SUHU REAMUR KE\n"
           "==================================\n\n"
           "   1. FARENHEIT \n\n"
           "   2. CELCIUS \n\n"
           "   3. KELVIN\n\n"
           "   4. RANKINE\n\n"
           "==================================\n\n";
    cout <<"  Pilih Konversi : "; cin >> pilihKonversi;

    cout << fixed;
    cout << setprecision(2);

    system("cls");
    if (pilihKonversi==1){
        cout << "==================================\n"
                "        REAMUR KE FARENHEIT\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam reamur : "; cin >> reamur;
        farenheit = (reamur*2.25)+32;

        cout << "\n============= HASIL =============\n\n";
        cout << reamur << " Reamur" << " = " << farenheit << " Farenheit\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==2){
        cout << "==================================\n"
                "        REAMUR KE CELCIUS\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam reamur : "; cin >> reamur;
        celcius = reamur/0.8;

        cout << "\n============= HASIL =============\n\n";
        cout << reamur << " Reamur" << " = " << celcius<< " Celcius\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==3){
        cout << "==================================\n"
                "        REAMUR KE KELVIN\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam reamur : "; cin >> reamur;
        kelvin = (reamur/0.8) + 273.15;

        cout << "\n============= HASIL =============\n\n";
        cout << reamur << " Reamur" << " = " << kelvin<< " Kelvin\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==4){
        cout << "==================================\n"
                "        REAMUR KE RANKINE\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam reamur : "; cin >> reamur;
        rankine = (reamur* 2.25) + 491.67;

        cout << "\n============= HASIL =============\n\n";
        cout << reamur << " Reamur" << " = " << rankine<< " Rankine\n\n";
        cout << "==================================\n";
    }

}

void konversiKelvin(){
    int pilihKonversi;
    float celcius, reamur, farenheit, kelvin, rankine;

    cout <<"==================================\n"
           "     KONVERSI SUHU KELVIN KE\n"
           "==================================\n\n"
           "   1. FARENHEIT \n\n"
           "   2. CELCIUS \n\n"
           "   3. REAMUR\n\n"
           "   4. RANKINE\n\n"
           "==================================\n\n";
    cout <<"  Pilih Konversi : "; cin >> pilihKonversi;

    cout << fixed;
    cout << setprecision(2);

    system("cls");
    if (pilihKonversi==1){
        cout << "==================================\n"
                "        KELVIN KE FARENHEIT\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam kelvin : "; cin >> kelvin;
        farenheit = (kelvin * 1.8) - 459.67;

        cout << "\n============= HASIL =============\n\n";
        cout << kelvin << " Kelvin" << " = " << farenheit << " Farenheit\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==2){
        cout << "==================================\n"
                "        KELVIN KE CELCIUS\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam kelvin : "; cin >> kelvin;
        celcius = kelvin - 273.15;

        cout << "\n============= HASIL =============\n\n";
        cout << kelvin << " Kelvin" << " = " << celcius<< " Celcius\n\n";
        cout << "==================================\n";

    }  else if (pilihKonversi==3){
        cout << "==================================\n"
                "        KELVIN KE REAMUR\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam kelvin : "; cin >> kelvin;
        reamur= 0.8*(kelvin - 273);

        cout << "\n============= HASIL =============\n\n";
        cout << kelvin << " Kelvin" << " = " << reamur<< " Reamur\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==4){
        cout << "==================================\n"
                "        KELVIN KE RANKINE\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam kelvin : "; cin >> kelvin;
        rankine= kelvin * 1.8;

        cout << "\n============= HASIL =============\n\n";
        cout << kelvin << " Kelvin" << " = " << rankine<< " Rankine\n\n";
        cout << "==================================\n";
    }


}

void konversiRankine(){
    int pilihKonversi;
    float celcius, reamur, farenheit, kelvin, rankine;

    cout <<"==================================\n"
           "     KONVERSI SUHU RANKINE KE\n"
           "==================================\n\n"
           "   1. FARENHEIT \n\n"
           "   2. CELCIUS \n\n"
           "   3. REAMUR\n\n"
           "   4. KELVIN\n\n"
           "==================================\n\n";
    cout <<"  Pilih Konversi : "; cin >> pilihKonversi;

    cout << fixed;
    cout << setprecision(2);

    system("cls");
    if (pilihKonversi==1){
        cout << "==================================\n"
                "        RANKINE KE FARENHEIT\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam rankine : "; cin >> rankine;
        farenheit = rankine - 459.67;

        cout << "\n============= HASIL =============\n\n";
        cout << rankine << " Rankine" << " = " << farenheit << " Farenheit\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==2){
        cout << "==================================\n"
                "        RANKINE KE CELCIUS\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam rankine : "; cin >> rankine;
        celcius = (rankine - 459.67)*0.5;

        cout << "\n============= HASIL =============\n\n";
        cout << rankine << " Rankine" << " = " << celcius << " Celcius\n\n";
        cout << "==================================\n";

    } else if (pilihKonversi==3){
        cout << "==================================\n"
                "        RANKINE KE REAMUR\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam rankine : "; cin >> rankine;
        reamur = (rankine / 1.8 + 273.15)* 0.8;

        cout << "\n============= HASIL =============\n\n";
        cout << rankine << " Rankine" << " = " << reamur << " Reamur\n\n";
        cout << "==================================\n";

    }  else if (pilihKonversi==4){
        cout << "==================================\n"
                "        RANKINE KE KELVIN\n"
                "==================================\n\n";
        cout << " Masukkan suhu dalam rankine : "; cin >> rankine;
        kelvin = rankine*0.5;

        cout << "\n============= HASIL =============\n\n";
        cout << rankine << " Rankine" << " = " << kelvin << " Kelvin\n\n";
        cout << "==================================\n";
    }

}

void pengulangan (){
    char pilih [1];
    cout << "\n\n\n->  Kembali ke Menu? (y/t) : "; cin >> pilih;

    if ((strcmp(pilih, "y")==0)||(strcmp(pilih, "Y")==0)){
        system("cls");
        main();
    } else if ((strcmp(pilih, "t")==0)||(strcmp(pilih, "T")==0)){
        system("cls");
        cout << "\n\n================================================\n"
                "\n Terima Kasih Telah Menggunakan Program Ini!! \n"
                "\n================================================\n";
        exit(0);
    }
}

