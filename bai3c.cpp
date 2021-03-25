#include <iostream>
using namespace std;
int n, k;
string s;
string a;
int dem = 0;
void tohop(int vitri)
{
   a += s[vitri];
   dem++;
   if(dem == k)
   {
       cout << a;
       cout << endl;
       return;
   }
   else
   {
       for(int i = vitri +1; i < n; i++) tohop(i);
   }
}
int main()
{
    cin >> n >> k;
    for(int i = 0; i <= n - 1; i++ )
    {
        s+= 'a' + i;
    }
    for(int i = 0; i < n; i++)
    {
        tohop(i);
    }

}
