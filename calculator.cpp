#include "calculator.h"

Calculator::Calculator(){
    operation = "";
    operand1 = 0;
    operand2 = 0;
}

Calculator::Calculator(string operations, unsigned int oper1, unsigned int oper2){
    operation = operations;
    operand1 = oper1;
    operand2 = oper2;
}

Calculator::Calculator(const Calculator& rhs){
    operation = rhs.operation;
    operand1 = rhs.operand1;
    operand2 = rhs.operand2;
}

string Calculator::getOperation(){
    return operation;
}

void Calculator::setOperation(string operations){
    operation = operations;
}

unsigned int Calculator::getOperand1(){
    return operand1;
}

void Calculator::setOperand1(unsigned int oper1){
    operand1 = oper1;
}

unsigned int Calculator::getOperand2(){
    return operand2;
}

void Calculator::setOperand2(unsigned int oper2){
    operand2 = oper2;
}

unsigned int Calculator::Addition(){
    return operand1+operand2;
}

