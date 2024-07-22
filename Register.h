#ifndef REGISTER_H
#define REGISTER_H

#include <cstdint>

// 7-bit status register
struct StatusRegister
{
    bool n : 1; // negative
    bool v : 1; // overflow
    bool b : 1; // break
    bool d : 1; // decimal
    bool i : 1; // interrupt disable
    bool z : 1; // zero
    bool c : 1; // carry
};

class Register
{
    private:

    // 8-bit Accumulator register
    uint8_t A{};

    // 7-bit status register
    StatusRegister status{};

    // 16-bit program counter
    uint16_t PC{};

    // 8-bit stack pointer
    uint8_t SP{};

    // 8-bit index register
    uint8_t X{};
    uint8_t Y{};

    public:

    // Setters
    void setA(const uint8_t &a);
    void setX(const uint8_t &x);
    void setY(const uint8_t &y);
    void setPC(const uint16_t &pc);
    void setSP(const uint8_t &sp);
    void setStatusN(const bool &n);
    void setStatusV(const bool &v);
    void setStatusB(const bool &b);
    void setStatusD(const bool &d);
    void setStatusI(const bool &i);
    void setStatusZ(const bool &z);
    void setStatusC(const bool &c);

    // Getters
    uint8_t getA() const;
    uint8_t getX() const;
    uint8_t getY() const;
    uint16_t getPC() const;
    uint8_t getSP() const;
    bool getStatusN() const;
    bool getStatusV() const;
    bool getStatusB() const;
    bool getStatusD() const;
    bool getStatusI() const;
    bool getStatusZ() const;
    bool getStatusC() const;
};

#endif
