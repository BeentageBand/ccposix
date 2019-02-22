#ifndef CCPOSIX_FACTORY_H_
#define CCPOSIX_FACTORY_H_
#include "ccfactory.h"


namespace ccposix
{
class Factory : public cc::Factory
{
    public:
    virtual ~Factory(void){}
    std::shared_ptr<cc::Mutex> create_mutex(void);
    std::shared_ptr<cc::Semaphore> create_semaphore(uint32_t const resources);
    std::shared_ptr<cc::Cond_Var> create_cond_var(void);
    std::shared_ptr<cc::Thread::Cbk> create_thread_cbk(void);
    std::shared_ptr<cc::Barrier> create_barrier(uint32_t const resources);
    std::shared_ptr<cc::RW_Lock> create_rw_lock(void); 
    std::shared_ptr<cc::IPC::Retriever> create_ipc_retriever(IPC_TID_T const tid, cc::IPC & ipc);
    std::shared_ptr<cc::IPC::Sender> create_ipc_sender(IPC_TID_T const tid, cc::IPC & ipc); 
};
}
#endif /*CCPOSIX_FACTORY_H_*/
