#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <array>


class Memory
{
    private:
    static constexpr unsigned int MaxMemory{1024 * 64};
    std::array<uint8_t, MaxMemory> data{};

    public:

    void initialise();

    uint8_t read(const uint8_t &address) const;
    void write(const uint8_t &address, const uint8_t &value);
};

#endif
