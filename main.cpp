#include <iostream>

using namespace std;

int main()
{
     int b=0,c,n,i,a,S=0;
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        cout<<"a= ";
        cin >>a;
        if (a%2==0)
        S=S+a;
        b=b+1;
    }
        c=S/b;
        cout<<"atlag "<<c<<endl;



    return 0;
}
