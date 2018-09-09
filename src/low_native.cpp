// -----------------------------------------------------------------------------
//  low_native.cpp
// -----------------------------------------------------------------------------

#include "low_native_aux.h"
#include "low_process.h"
#include "low_module.h"
#include "low_loop.h"
#include "low_fs.h"
#include "low_net.h"
#include "low_tls.h"
#include "low_http.h"
#include "low_dns.h"

// The methods of the module 'native', accessable by files in lib_js directory
duk_function_list_entry g_low_native_methods[] = {
    {"processInfo", low_process_info, 2},
    {"ttyInfo", low_tty_info, 0},
    {"compile", low_compile, 1},
    {"runInContext", low_run_in_context, 4},
    {"compare", low_compare, 2},
    {"setChore", low_loop_set_chore, 3},
    {"clearChore", low_loop_clear_chore, 1},
    {"choreRef", low_loop_chore_ref, 2},
    {"runRef", low_loop_run_ref, 1},
    {"open", low_fs_open, 4},
    {"openSync", low_fs_open_sync, 3},
    {"close", low_fs_close, 2},
    {"read", low_fs_read, 6},
    {"write", low_fs_write, 6},
    {"fstat", low_fs_fstat, 2},
    {"waitDone", low_fs_waitdone, 1},
    {"listen", low_net_listen, 7},
    {"connect", low_net_connect, 5},
    {"setsockopt", low_net_setsockopt, 5},
    {"shutdown", low_net_shutdown, 2},
    {"isIP", low_is_ip, 1},
    {"lookup", low_dns_lookup, 4},
    {"lookupService", low_dns_lookup_service, 3},
    {"newResolver", low_dns_new_resolver, 1},
    {"resolverCancel", low_dns_resolver_cancel, 1},
    {"resolverGetServers", low_dns_resolver_get_servers, 1},
    {"resolverSetServers", low_dns_resolver_set_servers, 2},
    {"resolverResolve", low_dns_resolver_resolve, 5},
    {"resolverGetHostByAddr", low_dns_resolver_gethostbyaddr, 3},
    {"httpGetRequest", low_http_get_request, 2},
    {"httpRead", low_http_read, 3},
    {"httpWrite", low_http_write, 3},
    {"httpWriteHead", low_http_write_head, 4},
    {"createTLSContext", low_tls_create_context, 1},
    {"makeModule", low_module_make, 2},
    {NULL, NULL, 0}};