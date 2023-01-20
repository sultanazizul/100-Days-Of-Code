#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    ulang:

    int dadu;
    srand(time(0));
    dadu = rand()%6+1;

        cout << "   ====================\n"
                "        ACAK DADU\n"
                "   ====================\n\n";

    if (dadu == 1){
         cout <<"\t===========\n"
                "\t=         =\n"
                "\t=    0    =\n"
                "\t=         =\n"
                "\t===========\n";

    }else if (dadu== 2){
        cout <<"\t===========\n"
                "\t=      0  =\n"
                "\t=         =\n"
                "\t=   0     =\n"
                "\t===========\n";

    }else if (dadu== 3){
        cout << "\t===========\n"
                "\t=    0    =\n"
                "\t=         =\n"
                "\t=  0   0  =\n"
                "\t===========\n";

    }else if (dadu== 4){
        cout << "\t===========\n"
                "\t=  0   0  =\n"
                "\t=         =\n"
                "\t=  0   0  =\n"
                "\t===========\n";

    }else if (dadu== 5){
        cout << "\t===========\n"
                "\t=  0   0  =\n"
                "\t=    0    =\n"
                "\t=  0   0  =\n"
                "\t===========\n";

    }else if (dadu== 6){
        cout << "\t===========\n"
                "\t=  0   0  =\n"
                "\t=  0   0  =\n"
                "\t=  0   0  =\n"
                "\t===========\n";

    }
    cout << "\n   ====================\n";
    cout << "    Dadumu adalah "<<dadu;
    cout << "\n   ====================\n";

    system("pause");
    system("cls");

    goto ulang;
    return 0;
}
