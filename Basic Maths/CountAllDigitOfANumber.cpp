using namespace std;
#include <bits/stdc++.h>
int countDigits(int n){
    int cnt = 0;
    while(n>0){
        cnt = cnt + 1;

        n = n / 10;
    }
    return cnt;
}
int main(){
    int n = 329823;
    cout << "n: " << n << endl;
    int digits = countDigits(n);
    cout << "Digits in n:" << digits << endl;
}