using namespace std;
#include <iostream>
int main(){
    int n = 5;
    int factorial = 1;
    while(n>0){
        factorial *= n;
        n--;
    }
    cout << "factorrial of 5 is :" << factorial << endl;
}