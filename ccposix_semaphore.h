#ifndef CCPOSIX_SEMAPHORE_H_
#define CCPOSIX_SEMAPHORE_H_

#include "ccsemaphore.h"

namespace ccposix
{
class Semaphore : public cc::Semaphore
{
    public:
    explicit Semaphore(uint32_t const resources);
    ~Semaphore(void);

    bool wait(void);
    bool wait(IPC_Clock_T const wait_ms);
    void signal(void);
    void signal(uint32_t const resources);

};
}
#endif /*CCPOSIX_SEMAPHORE_H_*/
