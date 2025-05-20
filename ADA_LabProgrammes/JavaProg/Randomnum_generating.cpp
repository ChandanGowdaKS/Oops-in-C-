#include<iostream>
// #include<cstdlib>
#include<time.h>
using namespace std;

int main(){
srand(time(0));
int n = rand();
cout<< n<< endl;

int a = 10;
int b = 20;
swap(a,b);
cout<<a <<b;
return 0;
}