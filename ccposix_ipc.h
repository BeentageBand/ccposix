#ifndef CCPOSIX_IPC_H_
#define CCPOSIX_IPC_H_

#include "ccipc.h"

namespace ccposix
{
class Sender : public cc::IPC::Sender
{
   public:
   explicit Sender(IPC_TID_T const tid);
   virtual ~Sender(void);
   void send(cc::Mail const & mail);

};

class Retriever : public cc::IPC::Retriever
{
    public:
    explicit Retriever(IPC_TID_T const tid);
    virtual ~Retriever(void);
    std::shared_ptr<cc::Mail> retrieve(IPC_Clock_T const tout_ms);

};
}

#endif /*CCPOSIX_IPC_H_*/
