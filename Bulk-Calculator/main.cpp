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
                while(true){
                    multiplicationsection();
                    int multiplieruserinput {};
                    cin >> multiplieruserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(multiplieruserinput == 1){
                            cout << multiplytwonumbers() << endl;
                            goback();
                        }
                        else if(multiplieruserinput == 2){
                            cout << multiplywithpi() << endl;
                            goback();
                        }
                        else if(multiplieruserinput == 3){
                            cout << bulkmultiplication() << endl;
                            goback();
                        }
                        else if(multiplieruserinput == 4){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                            goback();
                        }
                    }
                }
            }
            else if(userinput == 2){
                while(true){
                    additionsection();
                    int additionuserinput {};
                    cin >> additionuserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(additionuserinput == 1){
                            cout << addition() << endl;
                            goback();
                        }
                        else if(additionuserinput == 2){
                            cout << bulkaddition() << endl;
                            goback();
                        }
                        else if(additionuserinput == 3){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                            goback();
                        }
                    }
                }
            }
            else if(userinput == 3){
                while (true){
                    subtractionsection();
                    int subtractionuserinput {};
                    cin >> subtractionuserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(subtractionuserinput == 1){
                            cout << subtraction() << endl;
                            goback();
                        }
                        else if(subtractionuserinput == 2){
                            cout << bulksubtraction() << endl;
                            goback();
                        }
                        else if(subtractionuserinput == 3){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                            goback();
                        }
                    }
                }
            }
            else if(userinput == 4){
                while(true){
                    divisionsection();
                    int divisionuserinput {};
                    cin >> divisionuserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(divisionuserinput == 1){
                            cout << division() << endl;
                            goback();
                        }
                        else if(divisionuserinput == 2){
                            cout << bulkdivision() << endl;
                            goback();
                        }
                        else if(divisionuserinput == 3){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                            goback();
                        }
                    }
                }
            }
            else if(userinput == 5){
                while(true){
                    exponentiationsection();
                    int exponentiationuserinput {};
                    cin >> exponentiationuserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(exponentiationuserinput == 1){
                            cout << square() << endl;
                            goback();
                        }
                        else if(exponentiationuserinput == 2){
                            cout << cube() << endl;
                            goback();
                        }
                        else if(exponentiationuserinput == 3){
                            cout << exponent() << endl;
                            goback();
                        }
                        else if(exponentiationuserinput == 4){
                            break;
                        }
                        else{
                            cout << "Invalid Input!" << endl;
                            goback();
                        }
                    }
                }
            }
            else if(userinput == 6){
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
                goback();
            }
        }
    }
}
