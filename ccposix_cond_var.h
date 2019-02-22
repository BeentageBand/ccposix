#ifndef CCPOSIX_COND_VAR_H_
#define CCPOSIX_COND_VAR_H_

#include "cccond_var.h"

namespace ccposix
{
class Cond_Var : public cc::Cond_Var
{
    public:
    Cond_Var(void);
    virtual ~Cond_Var(void);

    bool with_mutex(std::shared_ptr<cc::Mutex> mux);
    bool wait(IPC_Clock_T const wait_ms);
    void signal(void);
};
}
#endif /*CCPOSIX_COND_VAR_H_*/
