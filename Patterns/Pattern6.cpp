using namespace std;
#include <bits/stdc++.h>
class solution{
    public:
    void pattern6(int n){
        int num = 1; 
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= i;j++){
                cout << num << " ";
                num = num + 1;
            }
            cout << endl;
        }
    }
};
int main (){

    int n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    solution obj;
        obj.pattern6(n);
    return 0;
}