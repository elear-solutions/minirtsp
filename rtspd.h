#ifndef __RTSPD_H__
#define __RTSPD_H__

#include "spook/spook.h"


SPOOK_SESSION_PROBE_t MINIRTSP_probe(const void* msg, ssize_t msg_sz);
SPOOK_SESSION_LOOP_t MINIRTSP_loop(uint32_t* trigger, int sock, time_t* read_pts, const void* msg, ssize_t msg_sz);

#endif
