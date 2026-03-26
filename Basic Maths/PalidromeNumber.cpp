using namespace std;
#include <bits/stdc++.h>
bool Palidrome(int n){
    int revNum = 0;
    int dup = n;
    while(n>0){
       int Id= n % 10;
         revNum = revNum * 10 + Id;
         n = n / 10;
    }
    if(dup == revNum){
        return true;
    }
    else{
        return false;
    }
}
int main (){
    int number = 4554;
    if (Palidrome(number)){
        cout << number << " is a Palidrome Number" << endl;
    }
    else{
        cout << number << " is not a Palidrome Number" << endl;
    }
    return 0;
}
