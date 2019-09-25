#include <iostream>

using namespace std;

int main()
{
    int b=0,n,i,a,S=0,c,x,y,d;
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        cout<<"a= ";
        cin >>a;
        if (a%2==0)
        {

            S=S+a;
            b=b+1;
        }

        c=S/b;
        cout<<"paros szamok atlaga "<<c<<endl;

        else
        {
            x=x+a;
            y=y+1;
        }
    }

            d=x/y;

            cout<<"paratlan szamok atlaga "<<d<<endl;





    return 0;
}
