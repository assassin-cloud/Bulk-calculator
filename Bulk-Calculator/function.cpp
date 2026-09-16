#include<iostream>
using namespace std;

void welcome(){
    cout << "=====================" << endl;
    cout << "   Bulk Calculator   " << endl;
    cout << "=====================" << endl;
    cout << endl;
    cout << "1. Multiplier" << endl;
    cout << "2. Addition" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Input: " << endl;
}

void multiplicationsection(){
    cout << "=================" << endl;
    cout << "   Multiplier    " << endl;
    cout << "=================" << endl;
    cout << endl;
    cout << "1. Multiply(Add only 2 numbers at a time)" << endl;
    cout << "2. Multiply number with PI(one number multiply by PI)" << endl;
    cout << "3. Multiply numbers in bulk" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
    cout << "Input: " << endl;
}

void additionsection(){
    cout << "===============" << endl;
    cout << "   ADDITION    " << endl;
    cout << "===============" << endl;
    cout << endl;
    cout << "1. Addition(Multiply only 2 numbers at a time)" << endl;
    cout << "2. Add numbers in bulk" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Input: " << endl;
}

void goback(){
    cout << "Type anything to go back to main menu:" << endl;
    string anything;
    cin >> anything;
}

void cinfail(){
    cout << "Invalid Input!" << endl;
    cin.clear();
    cin.ignore(1000,'\n');
}
