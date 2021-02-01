# Research Code based on NOVA File System

### Branch
BASE-NOVA: NOVA v5.1 forked from UCSD  
NUMA-NOVA: MASCOTS version. We add PMs device mapper functions and per-core log structure.

### TODO list
1. Make "local log" as persist.
2. Add range lock and parallelizing shared file I/O
3. Do testing for various workloads

### NOTE
1. In current implementation, we just copy&paste and minor modify the existing code to separate code flow. (We don't want the per core log functions to interfere with the existing execution behavior. For example, the dir operation should be performed with the per-inode log, not the per-core log.)
