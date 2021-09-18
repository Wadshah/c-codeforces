
#include <iostream>

using namespace std;

#define ll long long int
#define inf 1e18

const int N = 1e5 + 5;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m == n)
        {
            cout << n << " " << 3 << endl;
        }
        else
        {
            cout << n << " " << 1 << endl;
        }
    }
}
