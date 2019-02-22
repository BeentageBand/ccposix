#include "ccposix_rw_lock.h"

using namespace ccposix;

RW_Lock::RW_Lock(void)
{}

RW_Lock::~RW_Lock(void){}

bool RW_Lock::rlock(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}

bool RW_Lock::wlock(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}

void RW_Lock::unlock(void)
{

}
