# include <mpi.h>
# include <stdio.h>

int main(int argc, char *argv[]){
    int wrank, srank, wsize;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &wrank);
    MPI_Comm_size(MPI_COMM_WORLD, &wsize);
    printf("World rank %d, world size %d\n",wrank, wsize);
    MPI_Finalize();
    return 0;
}
