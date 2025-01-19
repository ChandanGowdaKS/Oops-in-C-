#include <iostream>
#include <cstdlib>
using namespace std;

void address(int *a){
    cout<<&a<<endl;
    cout<<a<<endl;
    (*a)++;
    cout<<*a<<endl;

}
int main(){
    int x = 10;
    cout<<&x<<endl;
    cout<<x<<endl;
    address(&x);
    cout<<x;
    return 0;
}