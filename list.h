#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(L)L.first
#define next(p) p->next
#define info(p) p->info

using namespace std;


typedef char infotype;
typedef struct elmlist *address;

struct elmlist{
  infotype info ;
  address next;

};

struct List{
 address first;
};

void creatList_1302220048(List &L);
address newElement_1302220048(infotype x);
void insertLast_1302220048(List &L, address p);
void showAllData_1302220048(List L);
double vocalPersentege_1302220048(List L);
void showLastK_1302220048(List L,int k);
int selectMenu_1302220048();



#endif // LIST_H_INCLUDED
