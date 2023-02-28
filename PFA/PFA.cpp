#include "PFA.hpp"

void PFA::addElement(const std::string &s)
{
    _data[_currSize] = s;
    _currSize++;
}


std::ostream& operator<< (std::ostream &os, const PFA &arr)
{
    os << "<";
    for (int index = 0; index < arr._currSize; index++)
    {
        os << arr._data[index];
    }
    os << ">";

    return os;
}
