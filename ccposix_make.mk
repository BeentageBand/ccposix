define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=\
ccposix_barrier.h \
ccposix_cond_var.h \
ccposix_factory.h \
ccposix_ipc.h \
ccposix_mutex.h \
ccposix_rw_lock.h \
ccposix_semaphore.h \
ccposix_thread.h \

$(_flavor_)_$(_feat_)_lib_objs=\
ccposix_barrier \
ccposix_cond_var \
ccposix_factory \
ccposix_ipc \
ccposix_mutex \
ccposix_rw_lock \
ccposix_semaphore \
ccposix_thread \

$(_flavor_)_$(_feat_)_lib=ccposix
endef

include $(PROJ_MAK_DIR)/epilog.mk
