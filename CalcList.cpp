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
    applyOp(func, operand);

    //storing the new operations in a linkedlist

    storeOpr(func, operand);
}

void CalcList::removeLastOperation()
{
    reverseLast();
    deallocateLast();
}

void CalcList::reverseLast()
{
    //get last Node , which is the head
    //get the operation and put in it in a temp var
    FUNCTIONS lastOp = head->opr;
    FUNCTIONS inverse;

    //if conditional to get the reverse operation. maybe put it int a reve
    if (lastOp == ADDITION)
        inverse = SUBTRACTION;
    else if (lastOp == SUBTRACTION)
        inverse = ADDITION;
    else if (lastOp == MULTIPLICATION)
        inverse = DIVISION;
    else if (lastOp == DIVISION)
        inverse = MULTIPLICATION;

    applyOp(inverse, head->value);

    //   do the reverse operation on runtotal
}
void CalcList::applyOp(const FUNCTIONS func, const double operand)
{
    if (func == ADDITION)
        runTotal += operand;
    else if (func == SUBTRACTION)
        runTotal -= operand;
    else if (func == MULTIPLICATION)
        runTotal *= operand;
    else if (func == DIVISION)
        runTotal /= operand;
}

std::string CalcList::toString(unsigned short precision) const
{

    return "";
}

bool CalcList::deallocateLast()
{
    //head is empty
    if (head == nullptr)
    {
        //TODO: TROW EXEPTION
        return false;
    }

    //there are nodes
    //nothign ater head

    //there are operation in the list
    //1 only one node
    if (head->next == nullptr)
    {
        delete head;    //deallocate
        head = nullptr; //make the head point to nullptr
    }
    else
    {
        //there is something after the head
        //make a temp var to save what is after head
        Node *temp = head->next;

        //detele the head
        delete head;
        //point to the head to the temp holding the rest of the linst
        head = temp;
    }

    return true;
}

//Destructor
CalcList::~CalcList()
{
    //go through the list and deallocate the memory
    while (head != nullptr)
    {
        deallocateLast();
    }
}
