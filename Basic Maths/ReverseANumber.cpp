using namespace std;
#include <bits/stdc++.h>
class Solution {
    public:
    int reverse(int n){
        int revnum = 0;
        while(n>0){
            int lastDigit = n % 10;
            revnum = revnum * 10 + lastDigit;
            n = n / 10;

        }
        return revnum;
    }
};
int main (){
    Solution obj;
    int num = 12345;
    cout<<obj.reverse(num)<<endl;
    return 0;
}