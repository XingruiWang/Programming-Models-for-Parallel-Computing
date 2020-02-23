# Programming-Models-for-Parallel-Computing
Some notes and code about Programming Models for Parallel Computing

### Download MPI

1. MPI can be downloaded from [here](http://www.mpich.org/downloads/)

Or you can use:

```sh
wget http://www.mpich.org/static/downloads/3.3.2/mpich-3.3.2.tar.gz
```
In this note, I use [mpich-3.3.2](http://www.mpich.org/static/downloads/3.3.2/mpich-3.3.2.tar.gz)

2. Decompress and config

```
tar -zxvf mpich-3.3.2.tar.gz
```

3. Comfigure and wait
```
cd mpich-3.3.2
./configure  --prefix=/yourDir/mpich-3.2.1
```
