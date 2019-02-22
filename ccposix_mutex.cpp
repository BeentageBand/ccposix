#include "ccposix_mutex.h"

using namespace ccposix;

Mutex::Mutex(void){}
Mutex::~Mutex(void){}

bool Mutex::lock(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}
void Mutex::unlock(void)
{}
