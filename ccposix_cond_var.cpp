#include "ccposix_cond_var.h"

using namespace ccposix;

Cond_Var::Cond_Var(void){}
Cond_Var::~Cond_Var(void){}

bool Cond_Var::with_mutex(std::shared_ptr<cc::Mutex> mux)
{
    return true; //TODO
}

bool Cond_Var::wait(IPC_Clock_T const wait_ms)
{
    return true; //TODO
}

void Cond_Var::signal(void)
{}
