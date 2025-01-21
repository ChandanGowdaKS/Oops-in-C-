
// #include <iostream> 
// using namespace std; 
  
// void myFunction() 
// {  
//     // static variable, 
//     // will only get initialised in first function call
//     static int count = 0; 
    
//     cout << count << " "; 
      
//     // value from previous function call is retained 
//     // will be carried to next function calls
//     count++; 
// } 
  
// int main() 
// { 
//     for (int i = 0; i <= 10; i++)     
//         myFunction();
        
//     return 0; 
// }

#include<iostream>
#include<cstdlib>
using namespace std;

class sta{
    static int count;
    public:
    void show(){
        cout<<"hello";
    }
    sta(){
        // cout<<count<<endl;
        count++;
        cout<<count<<endl;
    }
};
int sta::count;
int main(){
    sta obj[5];
    obj[2].show();
    return 0;
}