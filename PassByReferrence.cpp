using namespace std;
#include <iostream>
void modify (int&a){
    a = a + 10;
}
int main (){
    int x = 5;
    modify (x);
    cout << x << endl;
    return 0;
}