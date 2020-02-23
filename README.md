# Programming-Models-for-Parallel-Computing
Some notes and code about Programming Models for Parallel Computing

### Download MPI

1. MPI can be downloaded from [here](http://www.mpich.org/downloads/)

    Or you can use:

```sh
wget http://www.mpich.org/static/downloads/3.3.2/mpich-3.3.2.tar.gz
```
    In this note, I use [mpich-3.3.2](http://www.mpich.org/static/downloads/3.3.2/mpich-3.3.2.tar.gz)

2. Decompress.

```
tar -zxvf mpich-3.3.2.tar.gz
```

3. Configure.

```
cd mpich-3.3.2;
./configure  --prefix=/yourDir/mpich-3.3.2;
make;
sudo make install;
```
4. Check.

    You can check the result by `mpiexec --version`.

    You will see something similar like this if you built successfully.

```
HYDRA build details:
    Version:                                 3.3.2
    Release Date:                            Tue Nov 12 21:23:16 CST 2019
    CC:                              gcc    
    CXX:                             g++    
    F77:                             gfortran   
    F90:                             gfortran   
    Configure options:                       '--disable-option-checking' '--prefix=/home/wxr/mpich' '--cache-file=/dev/null' '--srcdir=.' 'CC=gcc' 'CFLAGS= -O2' 'LDFLAGS=' 'LIBS=' 'CPPFLAGS= -I/home/wxr/hw1/MPI/mpich-3.3.2/src/mpl/include -I/home/wxr/hw1/MPI/mpich-3.3.2/src/mpl/include -I/home/wxr/hw1/MPI/mpich-3.3.2/src/openpa/src -I/home/wxr/hw1/MPI/mpich-3.3.2/src/openpa/src -D_REENTRANT -I/home/wxr/hw1/MPI/mpich-3.3.2/src/mpi/romio/include' 'MPLLIBNAME=mpl'
    Process Manager:                         pmi
    Launchers available:                     ssh rsh fork slurm ll lsf sge manual persist
    Topology libraries available:            hwloc
    Resource management kernels available:   user slurm ll lsf sge pbs cobalt
    Checkpointing libraries available:       
    Demux engines available:                 poll select
```
