// #include<iostream>
// using namespace std;

// template <class T,class T2>
// void print(T a,T2 b){
//     cout<<a<<b<<endl;
// }
// int main(){
//     print("c",20);
// return 0;
// }

#include<iostream>
using namespace std;

template <class T>

class car{
    T name;;;
public:

car(T n) {
    name = n;
}

void print(){
    cout<<name;
}

};

int main(){
    car <string> c1("chandu bro");
    c1.print();
    return 0;
    
}