#include <iostream>
using namespace std;
void printOne(int n){ // we gave n, so that print number of times we want 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void printTwo(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++) // when i=0, it runs from 0 to 1 and so on...
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printThree(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=i; j++) // ini. form 1 because in 2nd row the numbers start
        {
            cout << j << " "; // because j=1, we need to start from 1;
            
        }
        cout << endl;
    }
}
void printFour(int n){
    for(int i=0; i<=n; i++)// if not "<=" then goes infinite!
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";//we have to print row no. in every row, also in col wise
        }
        cout << endl;
    }
}
void printFive(int n){
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)// n-no. of rows +1
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    // printOne(5);
    // printTwo(4);
    // printThree(5);
    // printFour(5);
    // printFive(6);
    return 0;
}