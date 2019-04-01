#include <iostream>
using namespace std;

struct listaDwu{
    int wart;
    listaDwu* prev;
    listaDwu* next;
}

void wypisz(listaDwu* l){

}

void dodajElement(int n, listaDwu*& l){
    listaDwu* pom=new listaDwu();
    pom->wart=n;
    if(l->next==null and l->prev==null){
        l->next=pom;
        pom->next=NULL;
        pom->prev=NULL;
        return;
    }
    while()
}



int main(){
    listaDwu* first = new listaDwu();
    first->next=null;
    first->prev=null;
}
