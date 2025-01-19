#include <iostream>
using namespace std;

    int sum(int n1, int n2, int n3 = 2, int n4 = 2, int n5 = 2);
    int main() {
    cout << sum(1, 1, 1, 1, 1) << endl; 
    cout << sum(1, 1, 1, 1) << endl; 
    cout << sum(1, 1, 1) << endl; 
    cout << sum(1, 1) << endl; 
    cout << sum(1) << endl; // error it need 2 arguments
    }
    int sum(int n1, int n2, int n3, int n4, int n5) {
    return n1 + n2 + n3 + n4 + n5;
    }

//     #include <iostream>
// using namespace std;

// void temp(int a =10, float b = 1.2){
//     cout<<a<<"\n"<<b;
// }
// int main(){
//     temp(18.8);
    
// }
// o/p wrong intake, o/p a = 18, b = 1.2 it will take first argument 18.
