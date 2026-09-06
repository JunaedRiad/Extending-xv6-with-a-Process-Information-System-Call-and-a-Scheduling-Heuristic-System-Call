# Extending xv6 with Process Information and Scheduling Heuristic System Calls

Course project for **CSE 323 – Operating Systems**.

## Team

- Shouvik Ghosh — 2121986642
- Junaed Hasan Riad — 2212428042
- Arnab Das — 2132099642

## Project Goal

The project was designed to extend MIT xv6-riscv with process-information and scheduling-related system calls.

The supplied source diff contains working changes for a `processinfo()` system call and a small `ps()` test system call. It also reserves syscall number `24` for `setsched()`.

## Source Changes Present in the Supplied Diff

### `processinfo(pid, &info)`

The supplied diff implements a kernel-side `sys_processinfo()` and a user program named `pinfo`.

The returned structure contains:

- PID
- Parent PID
- Process state
- Memory size
- CPU-time field
- Process name

The kernel uses `copyout()` to copy the `procinfo` structure to user space.

### `ps()`

The supplied diff also contains a simple `ps()` syscall and a `user/ps.c` program. In this snapshot, the kernel implementation prints:

```text
ps syscall called!
```

### `setsched()`

`SYS_setsched` is defined as syscall number `24` in the supplied diff. However, the supplied diff does **not** contain the kernel implementation, syscall-table registration, user wrapper, or scheduler changes for `setsched()`.

### CPU-time field

The supplied `processinfo()` implementation currently assigns:

```c
info.ctime = 0;
```

so the CPU-time value in this diff is a placeholder.

## Repository Contents

```text
.
├── README.md
├── SOURCE_STATUS.md
├── GITHUB_UPLOAD.md
├── .gitignore
├── diff_report.txt
├── project.patch
├── source_from_diff/
│   └── user/
│       ├── pinfo.c
│       └── ps.c
├── docs/
│   ├── Final_Project_Report.docx
│   ├── Project_Proposal.docx
│   └── First_Update_Commands.docx
└── screenshots/
    ├── build-terminal.jpeg
    ├── pinfo-output.jpeg
    └── xv6-boot.jpeg
```

## Important Source Note

This repository is built from the **actual diff report supplied for the project**. The diff is preserved unchanged as both `diff_report.txt` and `project.patch`.

Because the full completed `xv6-riscv` working directory was not supplied, this repository does not pretend to contain unchanged upstream xv6 files or source changes that are absent from the diff.

For a fully buildable GitHub repository, the exact working `xv6-riscv` folder that produced the successful QEMU run should be added to the repository.

## Evidence

The included screenshots show successful xv6 build/boot activity and the `pinfo` user program retrieving process information.

## Upstream

This project is based on MIT's xv6-riscv teaching operating system. Keep the original xv6 license/copyright notices when publishing a complete xv6 source tree.
