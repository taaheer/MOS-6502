#include <iostream>

#include "Memory.h"
#include "CPU.h"

int main()
{
    Memory memory{};
    CPU cpu{};
    cpu.softReset(memory);

    return 0;
}
