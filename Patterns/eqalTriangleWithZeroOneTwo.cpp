#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int x = 0;

    for(int i=1; i <=n; i++){
        for(int j= 1; j<=n-i; j++){
            cout << " ";
        }
        for(int j=2; j<=i; j++){
            cout << x << " ";
        }
        cout << x++;
        cout << endl;
    }
}

/*

    0
   1 1
  2 2 2
 3 3 3 3
4 4 4 4 4





*/