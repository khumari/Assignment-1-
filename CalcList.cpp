#include "CalcList.hpp"

double CalcList::total() const
{
    return runTotal;
}

void CalcList::storeOpr(const FUNCTIONS func, const double operand)
{
    //storing the new operations in a linkedlist
    //dynamically allocate mem
    Node *newNode;
    newNode = new Node();
    //putting data on teh node
    newNode->opr = func;
    newNode->value = operand;

    //when the linkedlist is empty
    if (head == nullptr)
    {
        head = newNode;
        //the head's next is already nullptr bc of constructor
    }
    else
    {
        //when the linkedlist is not empty
        Node *temp;
        temp = head;
        head = newNode;
        newNode->next = temp;
    }
}

void CalcList::newOperation(const FUNCTIONS func, const double operand)
{
    //apply new operation to the running total
    if (func == ADDITION)
        runTotal += operand;
    else if (func == SUBTRACTION)
        runTotal -= operand;
    else if (func == MULTIPLICATION)
        runTotal *= operand;
    else if (func == DIVISION)
        runTotal /= operand;
    //storing the new operations in a linkedlist

    storeOpr(func, operand);
}

void CalcList::removeLastOperation()
{
}
std::string CalcList::toString(unsigned short precision) const
{

    return "";
}
