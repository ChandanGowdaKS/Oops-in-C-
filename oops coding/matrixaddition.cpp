/*Write a C++ program, create class Matrix with member variables 
mat[10][10], row, column and member functions read_matrix(), 
print_matrix() and add(). Define all functions outside the class. 
The prototype of add() function is:
void add(Matrix m1,Matrix m2);
Illustrate the addition of two Matrices in the program.*/

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

class Matrix{
    int row,column;
    
    public:
    int mat[10][10];
    void read_matrix(){
        cout<<"enter the rows for matrix\n";
        cin>>row;
        cout<<"enter the column for matrix\n;";
        cin>>column;
         for (int i = 0; i <row;i++){
            for (int j =0;j < column;j++){
                cin>>mat[i][j];
            }
         }
    }
    void printmatrix(){
        for (int i = 0; i <row;i++){
            for (int j =0;j < column;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    } 
};

int main(){
    Matrix m1;
    m1.read_matrix();
    m1.printmatrix();
    return 0;
}