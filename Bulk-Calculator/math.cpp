#include "functiondecl.h"
#include<iostream>
using namespace std;

double bulkcalculation(){
    cout << "How many numbers do you wanna bulk calculate:" << endl;
    int size { takeinputfromuser() };
    if(size<=0){
        cout << "Invalid Input!" << endl;
    }
    else{
        double* p = new double[size];
        double result {};
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " number" << endl;
            cin >> p[i];
        }
        if(size == 1){
            cout << "SOLUTION:" << endl;
            result = p[0];
            delete[] p;
            p = nullptr;
            return result;
        }
        else{
            if(userinput == 1){
                result = p[0];
                for(int i=1;i<size;i++){
                    result*=p[i];
                }
            }
            else if(userinput == 2){
                result = p[0];
                for(int i=1;i<size;i++){
                    result+=p[i];
                }
            }
            else if(userinput == 3){
                result = p[0];
                for(int i=1;i<size;i++){
                    result -= p[i];
                }
            }
            else if(userinput == 4){
                result = p[0];
                for(int i=1;i<size;i++){
                    if(p[i] == 0){
                        cout << "Can't divide by zero!" << endl;
                        delete[] p;
                        p = nullptr;
                        return 0.0;
                    }
                    else{
                        result /= p[i];
                    }
                }
            }
        }
        delete[] p;
        p = nullptr;
        cout << "SOLUTION:" << endl;
        return result;
    }
    return 0.0;
}

double multiplytwonumbers(){
    cout << "Input 1st number:" << endl;
    double x { takedoubleinput() };
    cout << "Input 2nd number:" << endl;
    double y { takedoubleinput() };
    cout << endl;
    cout << "SOLUTION:" << endl;
    return x*y;
}

double multiplywithpi(){
    cout << "Input a number" << endl;
    double number { takedoubleinput() };
    double pi {3.141592653589793};
    cout << "SOLUTION:" << endl;
    return number*pi;
}

void bulkmultiplication(){
    cout << bulkcalculation() << endl;
}

double addition(){
    cout << "Input 1st number:" << endl;
    double x { takedoubleinput() };
    cout << "Input 2nd number:" << endl;
    double y { takedoubleinput() };
    cout << endl;
    cout << "SOLUTION:" << endl;
    return x+y;
}

void bulkaddition(){
    cout << bulkcalculation() << endl;
}

double subtraction(){
    cout << "Input 1st number:" << endl;
    double x { takedoubleinput() };
    cout << "Input 2nd number:" << endl;
    double y { takedoubleinput() };
    cout << endl;
    cout << "SOLUTION:" << endl;
    return x-y;
}

void bulksubtraction(){
    cout << bulkcalculation();
}

double division(){
    cout << "Enter 1st number:" << endl;
    double x { takedoubleinput() };
    cout << "Enter 2nd number:" << endl;
    double y { takedoubleinput() };
    if(y == 0){
        cout << "Can't divide by zero!" << endl;
        return 0.0;
    }
    else{
        cout << "SOLUTION:" << endl;
        return x/y;
    }
}

void bulkdivision(){
    cout << bulkcalculation() << endl;
}

double square(){
    cout << "Input number:" << endl;
    double number { takedoubleinput() };
    cout << "SOLUTION" << endl;
    return number*number;
}

double cube(){
    cout << "Input number:" << endl;
    double number { takedoubleinput() };
    cout << "SOLUTION" << endl;
    return number*number*number;
}

double exponent(){
    cout << "Input number:" << endl;
    double number { takedoubleinput() };
    cout << "Input power/exponent:" << endl;
    int powerorexponent { takeinputfromuser() };
    if(powerorexponent == 0){
        cout << "SOLUTION:" << endl;
        return 1;
    }
    else if(powerorexponent == 1){
        cout << "SOLUTION:" << endl;
        return number;
    }
    else if(powerorexponent<0){
        if(number == 0){
            cout << "Invalid Input!" << endl;
            return 0.0;
        }
        else{
            for(int i=-1;i>powerorexponent;i--){
                number *= number;
            }
            cout << "SOLUTION:" << endl;
            return 1/number;
        }
    }
    else{
        for(int i=1;i<powerorexponent;i++){
        number *= number;
        }
        cout << "SOLUTION:" << endl;
        return number;
    }
}
