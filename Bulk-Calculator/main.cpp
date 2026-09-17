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
                            cout << "Input 1st number:" << endl;
                            double  multipliernumberx {};
                            cin >> multipliernumberx;
                            cout << "Input 2nd number:" << endl;
                            double multipliernumbery {};
                            cin >> multipliernumbery;
                            cout << endl;
                            cout << multiplytwonumbers(multipliernumberx, multipliernumbery) << endl;
                            goback();
                        }
                        else if(multiplieruserinput == 2){
                            cout << "Input a number" << endl;
                            double number {};
                            cin >> number;
                            cout << multiplywithpi(number) << endl;;
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
                            cout << "Input 1st number: " << endl;
                            double additionnumberx {};
                            cin >> additionnumberx;
                            cout << "Input 2nd number: " << endl;
                            double additionnumbery {};
                            cin >> additionnumbery;
                            cout << endl;
                            cout << addition(additionnumberx, additionnumbery) << endl;
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
                            cout << "Input 1st number:" << endl;
                            double subtractionnumberx {};
                            cin >> subtractionnumberx;
                            cout << "Input 2nd number:" << endl;
                            double subtractionnumbery {};
                            cin >> subtractionnumbery;
                            cout << subtraction(subtractionnumberx,subtractionnumbery) << endl;;
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
                    divisonsection();
                    int divisonuserinput {};
                    cin >> divisonuserinput;
                    if(cin.fail()){
                        cinfail();
                    }
                    else{
                        if(divisonuserinput == 1){
                            cout << "Enter 1st number:" << endl;
                            double divisonnumberx {};
                            cin >> divisonnumberx;
                            cout << "Enter 2nd number:" << endl;
                            double divisonnumbery {};
                            cin >> divisonnumbery;
                            if(divisonnumbery == 0){
                                cout << "Can't divide by zero!" << endl;
                            }
                            else{
                                cout << division(divisonnumberx,divisonnumbery) << endl;
                                goback();
                            }
                        }
                        else if(divisonuserinput == 2){
                            cout << bulkdivision() << endl;
                            goback();
                        }
                        else if(divisonuserinput == 3){
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
                break;
            }
            else{
                cout << "Invalid Input!" << endl;
                goback();
            }
        }
    }
}
