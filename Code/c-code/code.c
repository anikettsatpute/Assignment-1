/*
Name : Satpute Aniket Tukaram
Roll No : CS21BTECH11056
Assignment-1 : 2017-ICSE-10th-Math-8(a)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Mean;
    int j,sum_freq=0,sum_product=0;
    int i=10;      /* i is class size */
    int A=25;      /* assumed mean of given data */
    int *x;        /* array mid-value of each class-interval(marks) */
    int *f;        /* array frequency of each class-interval(marks) */
    int *t;        /* t=(x-A)/i , where i is class-size */
    int *product;  /* product of f and t */
    x = (int*) calloc(6,sizeof(int));
    f = (int*) calloc(6,sizeof(int));
    t = (int*) calloc(6,sizeof(int));
    product = (int*) calloc(6,sizeof(int));

    x[0]=5; x[1]=15; x[2]=25; x[3]=35; x[4]=45; x[5]=55;
    f[0]=10; f[1]=9; f[2]=25; f[3]=30; f[4]=16; f[5]=10;
    /* Given data */

    for(j=0 ; j<6 ; j++)
    {
        t[j]=(x[j] - A)/i;
    }

    for(j=0 ; j<6 ; j++)
    {
        product[j]=t[j]*f[j];
    }

    for(j=0 ; j<6 ; j++)
    {
        sum_freq=sum_freq+f[j];
    }

    for(j=0 ; j<6 ; j++)
    {
        sum_product=sum_product+product[j];
    }

    Mean = A + (sum_product*i*1.0)/sum_freq;/* Formula of Mean by Stap-Deviation-Method */

    printf("The value of mean of given data(Marks) is : %.1f\n" , Mean);

    free(x);
    free(t);
    free(f);
    free(product);

    return 0;
}