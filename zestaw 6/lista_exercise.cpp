#include <iostream>
using namespace std;

struct lista{
    int wart;
    lista* next;
};

void dodajElementDoListy(int n, lista*& l){
    lista *pom = new lista();
    pom->wart=n;
    pom->next=l;
    l=pom;
}
/*
void wypiszListe(lista*& l){
    while(l->next!=NULL){
        cout<<l->wart<<endl;
        l=l->next;
    }
}*/

void wypiszListe(lista*& l){

    if(l->next==NULL)
        return;
    cout<<l->wart<<endl;
    wypiszListe(l->next);

}

int main(){
    lista* first = new lista();
    first->next=NULL;
    for(int i=0;i<5;i++) dodajElementDoListy(i,first);

    wypiszListe(first);
}
