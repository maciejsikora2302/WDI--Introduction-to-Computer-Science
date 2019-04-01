#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a,x;
    float eps = 0.0001;
    cin >> a >> x;
    for(int i=0;i<200;i++){
        x=(2*x/3)+a/(3*x*x);
    }
    cout << x;
}
//a jest liczba z ktorej chcemy znalesc ppierwiastek
//x jest liczba dla ktorej pierwiastek z a na peno jest mniejszy
