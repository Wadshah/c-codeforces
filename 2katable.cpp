#include <iostream>
using namespace std;
int main()
{int n,r;

    cout<<"Enter Your Number:";
    cin>>n;


    while(n!=0)
    {
               r=n%10;
               n=n/10;

               cout<<r<<",";
    }
    cout<<endl;

    system("PAUSE");
    return 0;
}
