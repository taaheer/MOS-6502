#ifndef CPU_H
#define CPU_H

#include "Register.h"

#include "Memory.h"

class CPU
{
    private:
    Register processorRegister{};

    void initialSetup();
    uint8_t fetchByte(const Memory &memory);

    public:
    void softReset(Memory &memory);
    void execute(Memory &memory);
};

#endif
