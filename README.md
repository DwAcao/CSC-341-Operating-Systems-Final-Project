CSC 341 CPU Scheduling Research Project

Author: Alex Cao
Date: December 18, 2025
School: California State University Dominguez Hills (CSUDH)
Course: CSC 341 - Operating Systems

Project Description
-------------------

This project demonstrates CPU scheduling concepts from CSC 341 lecture by running
controlled CPU-bound "cpuhog" workloads in MINIX 3 and Ubuntu Linux virtual machines.

Key Concepts Demonstrated:
- Preemptive scheduling and time quanta
- Waiting time and convoy effect
- MINIX 3 user-mode SCHED server (priorities + quanta)
- Linux Completely Fair Scheduler (CFS) virtual runtime

Experiments:
1. MINIX 3: Standalone cpuhog.c infinite loop
   - Observed via ps/top (growing TIME column, CPU fluctuations)
   - Proves scheduler preemption works
   
2. Ubuntu Linux: Custom Bash 5.2 with cpuhog loadable builtin
   - 4 successful cycles: "Starting CPU stress test... Sum: 4999999950000000"
   - Desktop remained responsive during execution

Environment:
- VMware Workstation 17
- MINIX 3.3.0 VM
- Ubuntu 24.04 Desktop VM

Files:
- cpuhog.c (MINIX 3 standalone)
- cpuhog.c + cpuhog.def (Linux Bash builtin)
- CSC-341-CPU-Scheduling-Research-Project.docx (full report)
- Supporting documentation and screenshots

Purpose: Links abstract scheduling theory (preemption, quanta tradeoffs)
to observable behavior in real operating systems.

Project Choice:
•	Download, build, and run MINIX. See: https://www.minix3.org/Links to an external site. 
o	Pick a part of the OS, say CPU scheduling, and make a change on the algorithm(s) used. Then compile the kernel and rerun.
o	You should do this in a virtual machine, such as VirtualBox (https://www.virtualbox.org/Links to an external site.)
•	Download and compile Linux. Make some small changes to the code base and then test your results.
o	See: https://github.com/torvalds/linuxLinks to an external site.
o	You can pick something as simple as the shell, and make an alteration of the code. It doesn’t need to be in the kernel.
