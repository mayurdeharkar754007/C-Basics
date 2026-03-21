using namespace std;
#include <iostream>
int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10;i++){
        if(num%2==0){
            cout << "Number is Even" << endl;  
        }
        else{
            cout << "Number is Odd" << endl;
            break;
        }
    }
    return 0;
}