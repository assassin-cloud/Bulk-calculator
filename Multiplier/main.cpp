#include "functiondecl.h"
#include<iostream>
using namespace std;

int main(){
    while(true){
        welcome();
        int userinput {};
        cin >> userinput;
        if(cin.fail()){
            cinfail();
        }
        else{
            if(userinput == 1){
                cout << "Input 1st number:" << endl;
                double  numberx {};
                cin >> numberx;
                cout << "Input 2nd number:" << endl;
                double numbery {};
                cin >> numbery;
                cout << endl;
                cout << multiplytwonumbers(numberx, numbery) << endl;
                goback();
            }
            else if(userinput == 2){
                cout << "Input a number" << endl;
                double number {};
                cin >> number;
                cout << multiplywithpi(number) << endl;;
                goback();
            }
            else if(userinput == 3){
                cout << bulkmultiplication() << endl;
                goback();
            }
            else if(userinput == 4){
                break;
            }
        }
    }
}