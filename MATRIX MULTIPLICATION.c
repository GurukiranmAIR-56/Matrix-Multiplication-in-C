#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter rowA and columnA size:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("\nEnter rowB and columnB size:\n");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("\nEnter elements for Matrix A :\n");
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B \n");
     for(int i=0;i<=p-1;i++)
    {
        for(int j=0;j<=q-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
     for(int i=0;i<=p-1;i++)
    {
        for(int j=0;j<=q-1;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(n==p){
        int c[m][q];
        printf("\nMatrix C:\n");
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=q-1;j++){
                 c[i][j]=0;
                for(int k=0;k<=n-1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                      
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
   
    }
    else
    printf("Multiplication of Matrix A and B is not possible\n");
    return 0;
}