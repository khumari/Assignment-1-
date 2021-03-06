#ifndef CALC_LIST_H
#define CALC_LIST_H

#include <iostream>
#include <string>
#include "CalcListInterface.hpp"

typedef struct Node
{
    FUNCTIONS opr;
    double value;
    Node *next;
} Node;

class CalcList : public CalcListInterface
{
private:
    double runTotal;
    double prevRunningTotal;
    Node *head;

public:
    //constructor for Calculator
    CalcList()
    {
        runTotal = 0.0;
        head = nullptr;
        prevRunningTotal = 0.0;
    }

    double total() const;
    void newOperation(const FUNCTIONS func, const double operand);
    void removeLastOperation();
    std::string toString(unsigned short precision) const;

    void storeOpr(const FUNCTIONS func, const double operand);
    void reverseLast();
    void applyOp(const FUNCTIONS func, const double operand);
    bool deallocateLast();
    //Destructor , should deallocate all memeory from linked
    ~CalcList();
};

#endif
