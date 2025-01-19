// #include<iostream>
// using namespace std;

// class college{
//     int collegeid;
//     public:
//     college(int a = 10): collegeid(a){};
//     friend int edit(college &c1);
// };
// int edit(college &c1){
//     return c1.collegeid;
// }
// int main(){
//     college c2(9);
//     cout<<edit(c2);
// }

#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
class square;
class rectangle{
    int length,breath;
    public:
    rectangle(int a, int b): length(a),breath(b){};
    int calculatearea(){
        cout<<endl<<"the area";
        return length*breath;
    
    }
    friend int calculatetotal(rectangle &rec,square &sqr);
};
class square{
    int length;
    public:
    square(int a): length(a){};
    int calculatesquare(){
        return length*length;
    }
    friend int calculatetotal(rectangle &rec,square &sqr);

};
int calculatetotal(rectangle &rec,square &sqr){
    return rec.calculatearea() + sqr.calculatesquare();
    
}

int main(){
    rectangle r1(1,2);
    square s1(5);
    cout<<calculatetotal(r1,s1);
    cout<< r1.calculatearea();
    return 0;
}