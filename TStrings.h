#ifndef TSTRINGS_H
#define TSTRINGS_H

#include <iostream>
#include <cstring>
#include <exception>

class TStrings
{
public:

    TStrings();
    TStrings(const char* str);
    TStrings(const TStrings& rhs);
    ~TStrings();
    std::size_t getLength() const;
    char& at(unsigned int index);
    char& operator[](unsigned int index);
    TStrings& operator=(TStrings& rhs);
    friend std::ostream& operator << (std::ostream& out, const TStrings& str);

private:
    std::size_t its_length;
    char* the_string;
};

/*-------------------------------------------------------------------------*/
inline std::ostream& operator << (std::ostream& out, const TStrings& str)
{
    out << str.the_string;
    return out;
}
/*-------------------------------------------------------------------------*/

#endif // TSTRINGS_H
