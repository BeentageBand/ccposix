#include "ccposix_barrier.h"

using namespace ccposix;

Barrier::Barrier(uint32_t const resources)
{}
Barrier::~Barrier(void)
{}

void Barrier::wait(void)
{}
bool Barrier::wait(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}

void Barrier::ready(void)
{}
