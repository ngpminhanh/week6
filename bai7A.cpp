
#include <iostream>

using namespace std;
string b;

void hoanvi(int k, char* a, int* use, int n)

{

    for(int i = 1; i <= n; i++)
    {
        if(!use[i])
        {
           a[k] = b[i-1];
           use[i] = 1;
           if(k == n)
           {
               for(int i = 1; i <= n; i++) cout << a[i] <<" ";
                cout << endl;
           }
           else hoanvi(k+1, a, use, n);
           use[i] =0;

        }
    }
}
int main()
{

    cin >> b;
    int n = b.length();

    char a[n+1];
    int use[n+1] = {0};
    hoanvi(1, a, use, n);
}
