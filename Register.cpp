#include "Register.h"

// set Accumulator register
void Register::setA(const uint8_t &a)
{
    A = a;
}

// set X index register
void Register::setX(const uint8_t &x)
{
    X = x;
}

// set Y index register
void Register::setY(const uint8_t &y)
{
    Y = y;
}

// set Program Counter
void Register::setPC(const uint16_t &pc)
{
    PC = pc;
}

// set interrupt
void Register::setStatusI(const bool &i)
{
    status.i = i;
}

// set zero
void Register::setStatusZ(const bool &z)
{
    status.z = z;
}

// set carry
void Register::setStatusC(const bool &c)
{
    status.c = c;
}

// set stack pointer
void Register::setSP(const uint8_t &sp)
{
    SP = sp;
}

// set negative
void Register::setStatusN(const bool &n)
{
    status.n = n;
}

// set overflow
void Register::setStatusV(const bool &v)
{
    status.v = v;
}

// set break
void Register::setStatusB(const bool &b)
{
    status.b = b;
}

// set decimal
void Register::setStatusD(const bool &d)
{
    status.d = d;
}

// get Accumulator
uint8_t Register::getA() const
{
    return A;
}

// get X index register
uint8_t Register::getX() const
{
    return X;
}

// get X index register
uint8_t Register::getY() const
{
    return Y;
}

// get Program Count
uint16_t Register::getPC() const
{
    return PC;
}

// get Stack Pointer
uint8_t Register::getSP() const
{
    return SP;
}

// get negative
bool Register::getStatusN() const
{
    return status.n;
}

bool Register::getStatusV() const
{
    return status.v;
}

bool Register::getStatusB() const
{
    return status.b;
}

bool Register::getStatusD() const
{
    return status.d;
}

bool Register::getStatusI() const
{
    return status.i;
}

bool Register::getStatusZ() const
{
    return status.z;
}

bool Register::getStatusC() const
{
    return status.c;
}
