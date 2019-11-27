#include <iostream>

using namespace std;

int main()
{
    int P=1;
    int i,n,szam;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
    cout << "a kov szam";
    cin >> szam;
    bool prim=true;
    for (int oszto=2; oszto<szam/2+1; oszto++) {
        if (szam%oszto==0) {
            prim=false;
        }
    }
    if (prim) {
        P*=szam;
    }
    }

    cout << P << endl;
    return 0;
}
