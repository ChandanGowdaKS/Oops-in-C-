/*Write a C++ program to create a class called Rectangle that has private member variables
for length and width. Implement member functions to calculate the rectangle&#39;s area and
perimeter.*/

#include<iostream>
using namespace std;

class Rectangle{
    double length,breath;

public:
Rectangle(double a =0,double b = 0){
    length = a;
    breath = b;
}
int calculatearea(){
    return length*breath;
}
int calculatebreath(){
    return 2*(length+breath);
}

};

int main(){
    Rectangle R1(12.5,10);
    double res = R1.calculatearea();
    cout<<res<<endl;
    res = R1.calculatebreath();
    cout<<res;
    cout<<"hi"<<endl;
    return 0;
}