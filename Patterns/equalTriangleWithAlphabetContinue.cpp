#include <iostream>
using namespace std;
int main(){
    int  n=6;
    char ch = 'A';

    for(int i =1; i<=n; i++){
    for(int j =1; j<=n-i; j++){
        cout << " ";
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
    B C 
   D E F 
  G H I J 
 K L M N O 
P Q R S T U 




*/