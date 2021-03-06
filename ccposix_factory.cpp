#undef Dbg_FID
#define Dbg_FID DBG_FID_DEF(IPC_FID,9)
#include "ccposix_barrier.h"
#include "ccposix_cond_var.h"
#include "ccposix_factory.h"
#include "ccposix_ipc.h"
#include "ccposix_mutex.h"
#include "ccposix_rw_lock.h"
#include "ccposix_semaphore.h"
#include "ccposix_thread.h"
#include "dbg_log.h"

using namespace cc;
using namespace std;

shared_ptr<Mutex> ccposix::Factory::create_mutex(void)
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Mutex>();
}

shared_ptr<Semaphore> ccposix::Factory::create_semaphore(uint32_t const resources)
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Semaphore>(resources);
}

std::shared_ptr<Cond_Var> ccposix::Factory::create_cond_var(void) 
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Cond_Var>();
}

std::shared_ptr<Thread::Cbk> ccposix::Factory::create_thread_cbk(void) 
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Thread>();
}

std::shared_ptr<Barrier> ccposix::Factory::create_barrier(uint32_t const resources) 
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Barrier>(resources);
}

std::shared_ptr<RW_Lock> ccposix::Factory::create_rw_lock(void) 
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::RW_Lock>();
}

std::shared_ptr<IPC::Retriever> ccposix::Factory::create_ipc_retriever(IPC_TID_T const tid, cc::IPC & ipc) 
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Retriever>(tid, ipc);
}

std::shared_ptr<IPC::Sender> ccposix::Factory::create_ipc_sender(IPC_TID_T const tid, cc::IPC & ipc)
{
    Dbg_Info("ccposix::Factory::%s", __func__);
    return make_shared<ccposix::Sender>(tid, ipc);
}
