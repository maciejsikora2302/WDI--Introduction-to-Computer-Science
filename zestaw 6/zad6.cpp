// ConsoleApplication2.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include<iostream>
#include <cmath>
using namespace std;

const int N = 6;

int liczba(int t[N], int pocz, int kon) {
	int l = 0, pod = 1;
	for (int i = kon; i >= pocz; i--) {
		l += pod * t[i];
		pod *= 2;
	}
	return l;
}
bool pierwsza(int a) {
	if (a < 2) return false;
	if (a == 2) return true;
	if (a%2 == 0) return false;
	for (int i = 3; i <= sqrt(a); i += 2) {
		if (a%i == 0) return false;
	}
	return true;
}

void zad6(int t[N], int start, bool &odp) {
	for (int i = start; i < N; i++) {
		int l = liczba(t, start, i);
		if(i-start==30){
            cout << "nie da sie" << endl;
            odp=true;
		}
		if (i + 1 < N and pierwsza(l)) {
			zad6(t, i + 1, odp);
		}

	}
	if (start == 0 and !odp) {
		cout << "nie da sie" << endl;
	}
	if (pierwsza(liczba(t, start, N - 1)) and !odp) {
		cout << "da sie " << endl;
		odp = true;
	}
}

void zad6_main(int t[N]){
	bool superzmienna = false;
	zad6(t, 0, superzmienna);
}

int main() {
	int tab[N] = { 1,1,0,1,0,0 };
	zad6_main(tab);
}
