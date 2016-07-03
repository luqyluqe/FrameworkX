#ifndef ArithmeticException_hpp
#define ArithmeticException_hpp

#include <exception>

#include "config.h"

using namespace std;

BEGIN_NAMESPACE_FRAMEWORKX

class ArithmeticException:public exception
{
public:
    ArithmeticException(const char* what);
    virtual const char* what()const throw();
    
private:
    const char* _what;
};

END_NAMESPACE_FRAMEWORKX

#endif /* ArithmeticException_hpp */
