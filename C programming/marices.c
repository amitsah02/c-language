#include<stdio.h>
void main ()
{
    int matA[i][j],matB[i][j],matR[i][j];
    int i,j,k;
    printf("Enter elements of the first matrix of orde3r 2 X  \n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter elements of the second matrix of order 3 x 4 \n");
    for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{scanf("%d",&matB[i][j]);
}
}
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)   
     {
    matR[i][j]=0;
    for(k=0;k<3;k++)
    {
        matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
    }
}
     }
     printf("\nFirst Matrix is\n");
     for(i=0;i<;i++)
     {

     for(j=0;j<3;j++)
     {
        printf("\nsecond matrix is\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\n");
            }
            printf("\nMatrix multiplication is \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d\t",matR[i][j]);
                }
                printf("\n");
            }
