// #include <iostream>

// Using const
const int MAX_USERS = 100;

// // Using #define
// #define PI 3.14159

// int main() {
//     std::cout << "Max Users: " << MAX_USERS << std::endl;
//     std::cout << "Value of Pi: " << PI << std::endl;
//     PI = 3.55;

//     // Uncommenting the following line will cause a compilation error
//     // MAX_USERS = 200;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sum(int n1, int n2, int n3 = 2, int n4 = 2, int n5 = 2);
// int main() {
//  cout << sum(1, 1, 1, 1, 1) << endl; 
//  cout << sum(1, 1, 1, 1) << endl; 
//  cout << sum(1, 1, 1) << endl; 
//  cout << sum(1, 1) << endl; 
//  cout << sum(1) << endl; 
// }
// int sum(int n1, int n2, int n3, int n4, int n5) {
//  return n1 + n2 + n3 + n4 + n5;
// }


#include <iostream>
using namespace std;

void temp(int a =10, float b = 1.2){
    cout<<a<<"\n"<<b;
}
int main(){
    temp(18.8);
    
}