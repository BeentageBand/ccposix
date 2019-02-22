#include "ccposix_semaphore.h"

using namespace ccposix;

Semaphore::Semaphore(uint32_t const resources)
{}

Semaphore::~Semaphore(void)
{}

bool Semaphore::wait(void)
{
    return true; //TODO
}

bool Semaphore::wait(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}
void Semaphore::signal(void)
{}
void Semaphore::signal(uint32_t const resources)
{}
