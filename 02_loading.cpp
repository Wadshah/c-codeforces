#include<iostream>
#include<windows.h>
#include<direct.h>
using namespace std;
void file_i_o(){

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    #ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
}
int main()
{
     file_i_o();
    system("cls");
    char a = 177;
    char b = 219;
    system("color 0A");
    cout << "\n\n\n\t\t\t\tPlease wait while loading\n\n";
    cout << "\t\t\t\t";
    for (int i = 0;i <= 15;i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0;i <= 15;i++)
    {
        cout << b;
        for (int j = 0;j <= 1e8;j++);
    }
    return 0;
}