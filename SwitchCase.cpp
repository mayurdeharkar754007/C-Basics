#include <iostream>
using namespace std;
int main (){
    const int x = 10;
    const int y = 10;

    switch (x+y)
    {
    case 15:
        cout << "result is 15." << endl;
        break;
    case 20:
        cout << "result is 20." << endl;
        break;
    default:
        cout << "No match Found ." << endl;
        break;
    }
}
