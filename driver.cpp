// Author: Robin Pratap Singh
// Class: CS-219
// Project - 1 

#include "calculator.h"
#define MAX_CALCULATION 100

int getCalculationDatabase(Calculator* calculatorArray);
void additionPrinter(Calculator* calculatorArray, int i);
string overloadOrNot(Calculator* calculatorArray, int i);

int main(){
    Calculator calculatorArray[MAX_CALCULATION];
    int totalOperations =  getCalculationDatabase(calculatorArray);
    
    for(int i = 0; i < totalOperations; i++){
        additionPrinter(calculatorArray, i);
        
    }
    return 0;
}

int getCalculationDatabase(Calculator* calculatorArray){
    ifstream fin("calculator.txt");
    int count=0;
    
    string operation;
    unsigned int operand1;
    unsigned int operand2;

    if(fin.is_open()){
       while(fin >> operation >> hex >> operand1 >> hex >> operand2){
            Calculator calculation(operation, operand1, operand2);
            calculatorArray[count]= calculation;
            count++;
       }
    }
    return count;
}

void additionPrinter(Calculator* calculatorArray, int i){
    cout << hex << uppercase << calculatorArray[i].getOperation() << setw(5) << setfill(' ');
    cout << hex << uppercase << right << setfill(' ') << "0x" << calculatorArray[i].getOperand1() << setw(5);
    cout << hex << uppercase << "0x" << calculatorArray[i].getOperand2() << setfill(' ') << ": ";
    cout << hex << uppercase << "< 0x" << calculatorArray[i].Addition() << " >" << endl;
    cout << "Overflow:  "<<overloadOrNot(calculatorArray, i)<< endl << endl;

}



string overloadOrNot(Calculator* calculatorArray, int i){
    if(calculatorArray[i].getOperand1() > 0 && calculatorArray[i].getOperand2() > 0 && calculatorArray[i].Addition()>0){
        if(calculatorArray[i].Addition() <= 0xFFFFFFFF){
            return "< No >";

        }
        return "< Yes >";

    }
    return "< Yes >";
}