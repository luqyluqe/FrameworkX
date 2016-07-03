#include "ArithmeticException.hpp"

BEGIN_NAMESPACE_FRAMEWORKX

ArithmeticException::ArithmeticException(const char* what)
{
    _what=what;
}

const char* ArithmeticException::what()const throw()
{
    return _what;
}

END_NAMESPACE_FRAMEWORKX