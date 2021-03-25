#include <iostream>
using namespace std;
double h(int n)
{
    if(n == 1) return 0.0;
    return h(n-1) + 1.0/n;
}
int main()
{
    int n;
    cin >> n;
    cout << h(n);
}
// n = 5000 chương trình vẫn chạy được nhưng khi đến một con số lớn hơn ví dụ như 5000000000000000000 chương trình sẽ trục trặc vì số nguyên dạng int sẽ giới hạn trong khoảng từ －32768 đến 32767

