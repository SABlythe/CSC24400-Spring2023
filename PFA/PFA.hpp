#ifndef _PFA_HPP_
#define _PFA_HPP_

#include <iostream>
#include <string>

#define DEFAULT_SIZE 5

class PFA
{
private:
    std::string *_data; // actual array
    int _currSize;
public:
    PFA() {_currSize=0; _data=new std::string[DEFAULT_SIZE];}

    void addElement(const std::string &s);

    friend std::ostream& operator<< (std::ostream &os, const PFA &arr);
};

#endif
