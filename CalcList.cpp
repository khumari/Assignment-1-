#include "CalcList.hpp"

double CalcList::total() const
{
    //we have access to the member variable - atribute total
    //this returns the calculated total.
    return Calctotal;
    //return 0.0;
}

void CalcList::newOperation(const FUNCTIONS func, const double operand)
{
    //if(func == ADDITION)
}

void CalcList::removeLastOperation()
{
}

std::string CalcList::toString(unsigned short precision) const
{
    return "Hello World!";
}
