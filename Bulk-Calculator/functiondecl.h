#ifndef FUNCTIONDECL
#define FUNCTIONDECL

extern int userinput;

// From functions.cpp
double takedoubleinput();
int takeinputfromuser();
void welcome();
void multiplicationsection();
void additionsection();
void subtractionsection();
void divisionsection();
void exponentiationsection();
void goback();
void cinfail();

// From math.cpp

// multiplication Section
void bulkmultiplication();
double multiplytwonumbers();
double multiplywithpi();

// Addition Section
double addition();
void bulkaddition();

// Subtraction section
double subtraction();
void bulksubtraction();

// Division section
double division();
void bulkdivision();

// Exponention section
double square();
double cube();
double exponent();
#endif
