#include "Memory.h"

#include <algorithm>

void Memory::initialise()
{
    std::fill(data.begin(), data.end(), 0);
}

uint8_t Memory::read(const uint8_t &address) const
{
    return data[address];
}

void Memory::write(const uint8_t &address, const uint8_t &value)
{
    data[address] = value;
}
