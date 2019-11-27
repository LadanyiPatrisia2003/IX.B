#include <iostream>

using namespace std;

int main()
{
    int S=0;
    int i,n,szam;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
        cout << "a kov szam";
        cin >> szam;
        int a = szam;
        int d=0;
        while (szam>0) {
            int c = szam%10;
            d=d*10+c;
            szam/=10;
        }
        if (d!=a) {
            S+=a;
        }
    }
    cout << S << endl;
    return 0;
}
