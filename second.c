#include<stdio.h>
#include<omp.h>

int main(int argc,char *argv[])
{
        #pragma omp parallel
        {
                int ID=omp_get_thread_num();
                int nprocs=omp_get_num_procs();
                printf("hello from thread (%d) of proc (%d) \n",ID,nprocs);
        }
	return 0;
}
