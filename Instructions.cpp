#include <cstdint>

namespace Instructions
{
    namespace LoadAndStore
    {
        void LDA(); // load Accumulator
        void LDX(); // load X Register
        void LDY(); // load Y Register

        void STA(); // store Accumlator
        void STX(); // store X Register
        void STY(); // store Y Register
    }

    namespace RegisterTransfers
    {
        void TAX(); // transfer accumulator to X
        void TAY(); // transfer accumulator to Y
        void TXA(); // transfer X to accumulator
        void TYA(); // transfer Y to accumulator
    }
}
