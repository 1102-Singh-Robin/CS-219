#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <fstream>
  
using namespace std;

class Calculator{
    string operation;
    unsigned int operand1;
    unsigned int operand2;

    public:
        Calculator();
        Calculator(string, unsigned int, unsigned int);
        Calculator(const Calculator&);

        string getOperation();
        void setOperation(string);

        unsigned int getOperand1();
        void setOperand1(unsigned int);

        unsigned int getOperand2();
        void setOperand2(unsigned int);

        unsigned int Addition();

        
};

#endif