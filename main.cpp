#include <iostream>
#include "list.h"

using namespace std;

int main()
{
infotype x;
List L;
address P;
int pilihan = 0, n;
double v ;
int k ;

creatList_1302220048(L);

pilihan = selectMenu_1302220048();
    while (pilihan != 0){
      switch(pilihan){
         case 1:
            cout << "Junmlah data yang akan ditambahkan : ";
            cin >> n;

            for (int i = 0; i < n ; i++){
            cout << "Masukan data baru : ";
            cin >> x;
            P = newElement_1302220048(x);
            insertLast_1302220048(L,P);
            }
             break;

          case 2:
             cout << "Berikut adala semua data yang ada dalam list: ";
             showAllData_1302220048(L);
             break;

         case 3 :
         v = vocalPersentege_1302220048(L);
         cout << "Berikut ini adalah Presentase vokal : " << v << "%" <<endl;
                  break;

        case 4 :
         cout << "Masukan nilai k untuk mencari data ke-k terakhir:  ";
         cin >> k;
        showLastK_1302220048(L,k);
        break ;


   }
      pilihan = selectMenu_1302220048();
    }
    return 0 ;

}
