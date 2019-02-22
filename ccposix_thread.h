#ifndef CCPOSIX_THREAD_H_
#define CCPOSIX_THREAD_H_

#include "ccthread.h"

namespace ccposix
{
class Thread : public cc::Thread::Cbk
{
    public:
    Thread(void);
    virtual ~Thread(void);
    int register_thread(cc::Thread & thread);
    int create_thread(cc::Thread & thread);
    int cancel_thread(void *& exit);
    int join_thread(void);
};
}
#endif /*CCPOSIX_THREAD_H_*/
