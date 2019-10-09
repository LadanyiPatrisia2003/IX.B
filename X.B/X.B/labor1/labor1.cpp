#include <iostream>

using namespace std;

int main()
{
    double szam1, szam2, szam3, szam4, szam5, szam6, S=0, F=0;
    cout << "szam1: ";
    cin >> szam1;
    if (szam1%2==0){
     S==S+szam1;
   } else {
     F==F+szam1;
   }
    cout <<"szam2: ";
    cin >> szam2;
    if (szam2%2==0) {
     S==S+szam2;
    } else {
     F==F+szam2;
    }
    cout << "szam3: ";
    cin >> szam3;
    if (szam3%2==0) {
     S==S+szam3;
    } else {
    F==F+szam3;
    }
    cout <<"szam4: ";
    cin >> szam4;
    if (szam4%2==0) {
     S==S+szam4;
   } else {
    F==F+szam4;
   }
    cout << "szam5: ";
    cin >> szam5;
    if (szam5%2==0) {

    S==S+szam5;
    } else {
    F==F+szam5;
    }
    cout << "szam6: ";
    cin >> szam6;
    if (szam6%2==0) {
    S==S+szam6;
    } else {
    F==F+szam6;
    }
    cout << S << endl;
    cout << F << endl;
    return 0;
}
