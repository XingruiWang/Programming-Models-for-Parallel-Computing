# include <mpi.h>
# include <stdio.h>

int main(int argc, char *argv[])
{
    static int MAX_MSG_SIZE = 10;
    int msg[10]={1,2,3,4,5,6,7,8,9,10};
    int i, rank, size;
    int msgsize = sizeof(msg)/sizeof(int);
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (rank == 0){
        for (i=1; i < size; i ++){
            MPI_Send(msg, msgsize, MPI_INT, i, 0, MPI_COMM_WORLD);
        }
    }
    else{
        MPI_Recv(&msg, MAX_MSG_SIZE, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Rank %d recieve message from rank 0. ",rank);
        printf("Message: ");
        for(int j=0; j < 10; j ++){
            printf("%d",msg[j]);
        }
        printf("\n");
    }
    return 0;
}