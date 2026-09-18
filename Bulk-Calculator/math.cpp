#include<iostream>
using namespace std;

double multiplytwonumbers(){
    cout << "Input 1st number:" << endl;
    double x {};
    cin >> x;
    cout << "Input 2nd number:" << endl;
    double y {};
    cin >> y;
    cout << endl;
    cout << "SOLUTION:" << endl;
    return x*y;
}

double multiplywithpi(){
    cout << "Input a number" << endl;
    double number {};
    cin >> number;
    double pi {3.141592653589793};
    cout << "SOLUTION:" << endl;
    return number*pi;
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
            double size1 = p[0];
            delete[] p;
            p = nullptr;
            return size1;
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

double addition(){
    cout << "Input 1st number:" << endl;
    double x {};
    cin >> x;
    cout << "Input 2nd number:" << endl;
    double y {};
    cin >> y;
    cout << endl;
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
            double size1 { p[0] };
            delete[] p;
            p = nullptr;
            return size1;
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

double subtraction(){
    cout << "Input 1st number:" << endl;
    double x {};
    cin >> x;
    cout << "Input 2nd number:" << endl;
    double y {};
    cin >> y;
    cout << endl;
    cout << "SOLUTION:" << endl;
    return x-y;
}

double bulksubtraction(){
    cout << "How many numbers do you wanna subtract" << endl;
    int size {};
    cin >> size;
    if(size <= 0){
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
            double size1 { p[0] };
            delete[] p;
            p = nullptr;
            return size1;
        }
        else{
            double output { p[0] };
            for(int i=1;i<size;i++){
                output -= p[i];
            }
            delete[] p;
            p = nullptr;
            cout << "SOLUTION:" << endl;
            return output;
        }
    }
}

double division(){
    cout << "Enter 1st number:" << endl;
    double x {};
    cin >> x;
    cout << "Enter 2nd number:" << endl;
    double y {};
    cin >> y;
    if(y == 0){
        cout << "Can't divide by zero!" << endl;
    }
    else{
        cout << "SOLUTION:" << endl;
        return x/y;
    }
}

double bulkdivision(){
    cout << "How many numbers do you wanna divide:" << endl;
    int size {};
    cin >> size;
    if(size<=0){
        cout << "Invalid Input!" << endl;
        return 0.0;
    }
    else{
        double* p = new double[size];
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " number:" << endl;
            cin >> p[i];
        }
        if(size == 1){
            double size1 { p[0] };
            delete[] p;
            p = nullptr;
            return size1;
        }
        else{
            double output { p[0] };
            for(int i=1;i<size;i++){
                if(p[i] == 0){
                    cout << "Can't divide by zero!" << endl;
                    delete[] p;
                    p = nullptr;
                    return 0.0;
                }
                else{
                    output /= p[i];
                }
            }
            delete[] p;
            p = nullptr;
            cout << "SOLUTION:" << endl;
            return output;
        }
    }
}

double square(){
    cout << "Input number:" << endl;
    double number {};
    cin >> number;
    cout << "SOLUTION" << endl;
    return number*number;
}

double cube(){
    cout << "Input number:" << endl;
    double number {};
    cin >> number;
    cout << "SOLUTION" << endl;
    return number*number*number;
}
