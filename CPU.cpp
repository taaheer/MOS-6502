#include "CPU.h"

void CPU::initialSetup()
{
    processorRegister.setX(0xFF);
    processorRegister.setStatusI(false);
    processorRegister.setSP(processorRegister.getX());
    processorRegister.setStatusD(false);
}

uint8_t CPU::fetchByte(const Memory &memory)
{
    uint16_t pc{processorRegister.getPC()};
    return memory.read(++pc);
}

void CPU::softReset(Memory &memory)
{
    initialSetup();
    memory.initialise();
}
