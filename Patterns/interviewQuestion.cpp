#include <iostream>
using namespace std;

int main(){

    int n = 5;

    for(int i=1; i<=n; i++){

        if(i==2){

        for(int j=1; j<=3; j++){
            cout << i+1;
        }
        for(int j=1; j<=4; j++){
            cout << i;
        }
        cout << endl;
        }
        else
        {
            for(int j=1; j<=3; j++){
            cout << i;
        }
        for(int j=1; j<=4; j++){
            cout << i+1;
        }
        cout << endl;
        }
    }
    
}