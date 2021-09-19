#ifndef CALC_LIST_H
#define CALC_LIST_H

#include <iostream>
#include <string>
#include "CalcListInterface.hpp"

<<<<<<< HEAD
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
=======
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
    Node *head;

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
>>>>>>> cfd540a86c9a86ebbc36e7e108a0574217634586

    void storeOpr(const FUNCTIONS func, const double operand);
    void reverseLast();
    void applyOp(const FUNCTIONS func, const double operand);
    bool deallocateLast();
    //Destructor , should deallocate all memeory from linked
    ~CalcList();
};


#endif
