#ifndef CALC_LIST_H
#define CALC_LIST_H

#include <iostream>
#include <string>
#include "CalcListInterface.hpp"

typedef enum { SUBTRACTION, ADDITION, MULTIPLICATION, DIVISION } FUNCTIONS;
//the enum contains the arithmetic functions needed for the arithmetic operations.
//typedef struct Node

class Node {
    private:
        FUNCTIONS opr;
        double vaule;
        Node *next; //next node in linked list
        Node *prev; //previous node
        friend class CalcList; 
}     

class CalcList{

    private:
        double runTotal;  //public CalcListInterface
        Node *head;       
        Node *tail;

    public:
        //constructor
        CalcList()
        {
            runTotal = 0;
            head = nullptr;
        }

        double total() const;
        void newOperation(const FUNCTIONS func, const double operand);
        void removeLastOperation();
        std::string toString(unsigned short precision) const;

    //Destructor , should deallocate all memeory from linked
};


#endif
