#include <iostream>

using namespace std;

int main()
{
  int  i, a, n;
  double S=0, db=0;
  cout << "n=:" ;
  cin >> n ;
  for (i=0 ; i<10 ; i++) {
    cout << "a=";
    cin >> a;
    S=S+a;
    db++;
  }
  cout << "atlag=" << S/db;
  return 0;
}
