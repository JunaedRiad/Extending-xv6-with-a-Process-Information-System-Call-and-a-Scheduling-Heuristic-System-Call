#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2){
    fprintf(2, "Usage: pinfo <pid>\n");
    exit(1);
  }

  int pid = atoi(argv[1]);
  struct procinfo info;

  if(processinfo(pid, &info) < 0){
    printf("processinfo failed for pid %d\n", pid);
    exit(1);
  }

  printf("Process info for pid %d:\n", pid);
  printf("  pid      = %d\n", info.pid);
  printf("  ppid     = %d\n", info.ppid);
  printf("  state    = %d\n", info.state);
  printf("  mem size = %d bytes\n", info.sz);
  printf("  cpu time = %d\n", info.ctime);
  printf("  name     = %s\n", info.name);

  exit(0);
}
