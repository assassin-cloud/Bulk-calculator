#include<iostream>
using namespace std;

double multiplytwonumbers(double x, double y){
    cout << "SOLUTION:" << endl;
    return x*y;
}

double multiplywithpi(double x){
    double pi {3.141592653589793};
    cout << "SOLUTION:" << endl;
    return x*pi;
}

double bulkmultiplication(){
    cout << "How many numbers do you want to bulk multiply:" << endl;
    int size {};
    cin >> size;
    if(size<=0){
        cout << "Invalid Input" << endl;
        return 0.0;
    }
    else{
        double* p = new double[size];
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " number:" << endl;
            cin >> p[i];
        }
        if(size == 1){
            cout << "SOLUTION" << endl;
            return p[0];
            delete[] p;
            p = nullptr;
        }
        else{
            double multiply { p[0] };
            double output {};
            for(int i=1;i<size;i++){
                output = multiply*p[i];
                multiply = output;
            }
            delete[] p;
            p = nullptr;
            cout << "SOLUTION:" << endl;
            return output;
        }
    }
}

double addition(double x, double y){
    cout << "SOLUTION:" << endl;
    return x+y;
}

double bulkaddition(){
    cout << "How many numbers do you wanna add:" << endl;
    int size {};
    cin >> size;
    if(size<=0){
        cout << "Invalid Input!" << endl;
        return 0.0;
    }
    else{
        double* p = new double[size];
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " number" << endl;
            cin >> p[i];
        }
        if(size==1){
            cout << "SOLUTION:" << endl;
            return p[0];
            delete[] p;
            p = nullptr;
        }
        else{
            double sum { p[0] };
            for(int i=1;i<size;i++){
                sum+=p[i];
            }
            cout << "SOLUTION:" << endl;
            delete[] p;
            p = nullptr;
            return sum;
        }
    }
}
