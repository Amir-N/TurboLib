#include "TStrings.h"


TStrings::TStrings() : its_length{0}, the_string{new char[its_length+1]}
{

}
/*-------------------------------------------------------------------------*/

TStrings::TStrings(const char *str) : its_length {std::strlen(str)},
    the_string{new char[its_length+1]}
{
    std::memcpy(the_string, str, (its_length+1));
}
/*-------------------------------------------------------------------------*/

TStrings::TStrings(const TStrings& rhs) : its_length{rhs.its_length},
    the_string{new char[rhs.its_length+1]}
{
    std::memcpy(the_string, rhs.the_string, (its_length+1));

}
/*-------------------------------------------------------------------------*/

TStrings::~TStrings()
{
    delete [] the_string;

}
/*-------------------------------------------------------------------------*/

std::size_t TStrings::getLength() const
{
    return its_length;
}
/*-------------------------------------------------------------------------*/

char& TStrings::at(unsigned int index)
{
    if(index > its_length)
    {
        //Insert Exception -code.
        std::cerr<<"geht nicht.!! Die angegebene Zahl ist zu groß" <<std::endl;
        return *the_string;
    }else
    for(std::size_t i = 0; i < index; ++i)
    {
        ++the_string;
        if(i == index)
        {
            return *the_string;
        }
    }
    return *the_string;
}
/*-------------------------------------------------------------------------*/

char& TStrings::operator[](unsigned int index)
{
    for(std::size_t i = 0; i < index; ++i)
    {
        ++the_string;
        if(i == index)
        {
            return *the_string;
        }
    }
    return *the_string;
}
/*-------------------------------------------------------------------------*/
TStrings& TStrings::operator=(TStrings& rhs)
{
    delete [] this->the_string;
    its_length = rhs.its_length;
    the_string = new char[(rhs.its_length)+1];
    memcpy(the_string, rhs.the_string, (its_length+1));
    return *this;

}
