#include <iostream>
using namespace std;
int main (){
    int age;
    cout << "Enter your Age:";
    cin >> age;

    if(age>=18){
        cout << "You are an Adult" << endl;
    }
    else{
        cout << "You are not an Adult" << endl;
    }
    return 0;
    
}