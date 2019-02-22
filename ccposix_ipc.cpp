#include "ccposix_ipc.h"

using namespace ccposix;

Sender::Sender(IPC_TID_T const tid, cc::IPC & ipc)
: cc::IPC::Sender(tid)
{}
Sender::~Sender(void)
{}

void Sender::send(cc::Mail const & mail)
{}

Retriever::Retriever(IPC_TID_T const tid, cc::IPC & ipc)
{}
Retriever::~Retriever(void){}
std::shared_ptr<cc::Mail> Retriever::retrieve(IPC_Clock_T const tout_ms)
{
    cc::Mail::Builder builder;
    return std::make_shared<cc::Mail>(builder.build()); //TODO
}
