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
                cout << "How many numbers do you want to bulk multiply:" << endl;
                int size {};
                cin >> size;
                if(size<=0){
                    cout << "Invalid Input" << endl;
                }
                else{
                    double* p = new double[size];
                    double output {};
                    for(int i=0;i<size;i++){
                        cout << "Input " << i+1 << " number:" << endl;
                        cin >> p[i];
                    }
                    double multiply { p[0] };
                    for(int i=1;i<size;i++){
                        output = multiply*p[i];
                        multiply = output;
                    }
                    cout << output << endl;
                    delete[] p;
                    p = nullptr;
                    goback();
                }
            }
            else if(userinput == 4){
                break;
            }
        }
    }
}