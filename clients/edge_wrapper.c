#include <edge_call.h>
#include "eapp_utils.h"
#include "syscall.h"

void edge_init(){
  /* Nothing for now, will probably register buffers/callsites
     later */
}

void ocall_print_value(unsigned long val){

  unsigned long val_ = val;
  ocall(2, &val_, sizeof(unsigned long), 0, 0);

  return;
}

unsigned long ocall_print_buffer(char* data, size_t data_len){

  unsigned long retval;
  ocall(1, data, data_len, &retval ,sizeof(unsigned long));

  return retval;
}
