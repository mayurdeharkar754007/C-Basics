using namespace std;
#include <iostream>
int findGCD(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}
int main (){
    int n1 = 12;
    int n2 = 15;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    int gcd = findGCD(n1, n2);
    cout << "GCD of n1 and n2: " << gcd << endl;
    return 0;
}