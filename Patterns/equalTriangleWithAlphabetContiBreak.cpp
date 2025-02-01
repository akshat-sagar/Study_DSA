#include <iostream>
using namespace std;
int main(){
    int n = 6;
    char ch = 'A';

    for(int i =1; i<=n; i++){ 
        ch = 'A';
        for(int j=1; j<=n-i; j++){
            cout<< " ";
        }
        for(int j=1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    
    }
}
/*

     A 
    A B 
   A B C 
  A B C D 
 A B C D E 
A B C D E F 









*/