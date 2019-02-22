#include "ccmutex.h"

namespace ccposix
{
class Mutex : public cc::Mutex
{
    public:
    Mutex(void);
    virtual ~Mutex(void);

    bool lock(IPC_Clock_T const wait_ms);
    void unlock(void);
};
}
