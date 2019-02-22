#ifndef CCPOSIX_BARRIER_H_
#define CCPOSIX_BARRIER_H_

#include "ccbarrier.h"

namespace ccposix
{
class Barrier : public cc::Barrier
{
    public:
    explicit Barrier(uint32_t const resources);
    virtual ~Barrier(void);
    void wait(void);
    bool wait(IPC_Clock_T const wait_ms);
    void ready(void);
};

}
#endif /*CCPOSIX_BARRIER_H_*/
