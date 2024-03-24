#include "list.h"
#include <iostream>

using namespace std;

void creatList_1302220048(List &L){
 first(L) = NULL ;

}

address newElement_1302220048(infotype x){
  address p =new elmlist;
  info(p) = x;
  next(p) =NULL ;
  return p;
}

void insertLast_1302220048(List &L, address p){
 address Q;

 if (first(L)== NULL){
     first(L) = p;
    }else{
     Q = first(L);

     while(next(Q) !=NULL){
        Q = next(Q);
     }
     next(Q) = p;
    }
    next(p)= NULL;
}

void showAllData_1302220048(List L){


address p = first(L);
while (p != NULL){
    cout <<info(p)<<"";
    p=next(p);

   }
   cout<<endl;
}


double vocalPersentege_1302220048(List L){
  address p;
  double vokal,consonan,presentase;

  p = first(L);

  while (p != NULL){
    if (info(p) == 'A' ||info(p) == 'a' ||info(p) == 'I' ||info(p) == 'i' ||info(p) == 'U' ||
        info(p) == 'u' ||info(p) == 'E' ||info(p) == 'e' ||info(p) == 'O' ||info(p) == 'o' ){
      vokal++ ;
    }else{
        consonan++;
    }
    p = next(p);
  }
  presentase = vokal / (consonan +vokal)*100 ;

  return presentase ;

 }
void showLastK_1302220048(List L,int k){
    address p,Q;
    bool found = false;


    p = first(L);

    while(!found){
        Q = p;
        for (int i = 1; i <= k-1 ; i++){
            Q = next(Q);
        }

        if (next(Q) == NULL){
            found = true;
        } else {
            p = next(p);
        }
    }
    cout << "karakter ke " << k << " terakhir adalah " << info(p) << endl;

}




int selectMenu_1302220048()
{
  cout << "======MENU======" <<endl;
  cout << "1.Menambahkan N data baru" <<endl;
  cout << "2.Menampilkan semua data" <<endl;
  cout << "3.Menampilkan Presentase vokal" <<endl;
  cout << "4.Menampilakan Karakter diPosisi k terkhir " <<endl;
  cout << "0.Exit" <<endl;
  cout << "Pilih Menu : ";

  int input = 0 ;
  cin >> input ;

  return input ;

}
