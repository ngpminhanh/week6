

#include <iostream>
#include <vector>


using namespace std;

vector<int> Tong;

void Sum(int u){
    if(u == 0){
        for(int i = Tong.size() - 1; i >= 0; i--) cout << Tong[i] << ' ';
        cout << endl;
        return;
    }
    for(int i = u; i >= 1; i--){
        int U = u - i;
        Tong.push_back(i);
        Sum(U);
        Tong.pop_back();
    }

}

int main(){
    int n;
    cin >> n;
    Sum(n);
}
