#ifndef CCPOSIX_RW_LOCK_H_
#define CCPOSIX_RW_LOCK_H_
#include "ccrw_lock.h"

namespace ccposix
{
class RW_Lock : public cc::RW_Lock
{
    public:
    RW_Lock(void);
    virtual ~RW_Lock(void);
    bool rlock(IPC_Clock_T const wait_ms);
    bool wlock(IPC_Clock_T const wait_ms);
    void unlock(void);
};
}
#endif /*CCPOSIX_RW_LOCK_H_*/
