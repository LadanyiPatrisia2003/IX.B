using namespace std;

int main()
{
    int a, b, c, d, oszto=2, i;
    bool prim= true ;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    for (i=0; i<b; i++) {
    while (oszto<a/2+1){
     if (a%oszto==0) {
        prim=false;
     }
     oszto++;
    }
    if (prim) {
    d=0;
    b=a;
    while (a>0)
    {
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
    if (a==d)
    {
        cout << a szam pallindrom;
    }

}


    cout << i << endl;

    return 0;
}
