#include<stdio.h>
#include<omp.h>
#include <math.h>

int main()
{
        int n=2;
        double delta_x=0.0001;
        double x=delta_x;
        double f=0.0;
        double SumAll=0.0;

        printf("x at start: %f, delta at start %f  \n",x,delta_x);
        while(x<1)
        {
                f=(4.0/(1+pow(x,2)));
                SumAll=SumAll+(f*delta_x);
                x+=delta_x;
        }
	printf("Reimann sum is: %f \n",SumAll);
        return 0;
}


