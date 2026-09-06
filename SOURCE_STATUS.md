# Source Status

This file distinguishes what is directly present in the supplied `diff_report.txt` from what is described elsewhere in the project documents.

## Directly present in the supplied diff

- `SYS_processinfo` assigned syscall number 22.
- `SYS_ps` assigned syscall number 23.
- `SYS_setsched` assigned syscall number 24.
- `sys_processinfo()` added to `kernel/sysproc.c`.
- `sys_ps()` added to `kernel/sysproc.c`.
- `sys_processinfo` and `sys_ps` registered in `kernel/syscall.c`.
- `struct procinfo` added to user-space declarations.
- `processinfo()` declared in `user/user.h`.
- `ps()` declared in `user/user.h`.
- `user/pinfo.c` added.
- `user/ps.c` added.
- `argint()` and `argaddr()` changed from `void` to `int` and made to return 0.
- `extern struct proc proc[NPROC]` added to `kernel/proc.h`.
- `info.ctime` is set to 0 in `sys_processinfo()`.

## Not present in the supplied diff

The supplied diff does not show:

- `sys_setsched()` implementation.
- `sys_setsched` registration in the syscall table.
- User-space `setsched()` declaration/stub.
- A process priority field.
- CPU tick accounting.
- Scheduler selection logic based on priority.
- The exact Makefile addition for `_pinfo` / `_ps`.
- The exact syscall-stub generator changes (`user/usys.pl` or `user/usys.S`).

Some of these features are described in the project report, but they are not included in the supplied diff. They have therefore not been invented or silently added to this repository.

## Suspicious files omitted from the cleaned repository

The diff contains empty files named:

- `kernal.c`
- `sysoroc.c`

They appear to be accidental/mistyped files, so they are preserved only inside the original diff and are not promoted as project source files.
