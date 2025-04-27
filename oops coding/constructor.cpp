// #include<iostream>
// using namespace std;
// class complex1{
// int x,y;
// public:
//   complex1()
//   {
//    x=0;
//    y=0;
//   }
//   complex1(int a,int b=0)
//   {
//     x=a;
//     y=b;
//   }
//   complex1(complex1 &b)
//   {
//     x=b.x;
//     y=b.y;
//   }
//  void display()
// { 
//   cout<<endl<<"x="<<x<<"\t"<<"y="<<y<<endl;
// }

// };
// int main()
// {
//   complex1 c1;//default
//   cout<<"default constructors\n";
//   c1.display(); //0,0
//   complex1 c2(2);
//   cout<<"parameterized constructors with default argument\n";
//   c2.display(); //2,0
 
//   complex1 c3(3,4);
//   cout<<"parametized construcotrs \n";
//   c3.display();
//   complex1 c4(c3);
//   cout<<"copy constructor\n"; 
//   c4.display();
//   complex1 c5=c2;
//   cout<<"copy constructor\n";
//   c5.display();
//   complex1 c6;
//   c6.display();
//   c6=c5;
//   cout<<"assignment done\n";
//   c6.display();
//   cout<<"enter values of x and y\n";
//   int x,y;
//   cin>>x>>y;
//   cout<<"dynamic initialization done\n";
//   complex1 c7(x,y);//parametrized constructor dynamic initialization
//   c7.display(); 
// }

#include<iostream>
using namespace std;

class con{
    int x,y;
    public:
    con():x(0),y(0){};
    con(int a, int b):x(a),y(b){};
    con(con &c1):x(c1.x),y(c1.y){};
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    con c2;
    c2.display();
    con c3 = c2;
    c3.display();
    con c4(4,5);
    c4.display();
    con c5 = c4;
    c5.display();

}
// finished
