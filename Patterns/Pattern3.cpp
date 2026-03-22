using namespace std;
#include <bits/stdc++.h>

class solution {
    public:
    void pattern3(int n){
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= i;j++){
                cout << j << "";
            }
            cout << endl;
        }
    }
};
int main (){
    int n;
    cout<< "Enter the number of rows: ";
    cin >> n;
    solution s;
    s.pattern3(n);
    return 0;

}
