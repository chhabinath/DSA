#include<stdio.h>
#include<stdlib.h>
void display(int sol[],int V)
{
    int i;
    for(i=0;i<V;i++)
    {
        printf("%dth the vertex colored with %d \n",i,sol[i]);
    }
    printf("\n");
}
int issafe(int *mat[],int sol[],int i,int p,int V)
{
    int j;
    int flag=0;
    for(j=0;j<V;j++)
    {
        if(mat[p][j]==1)
        {
            if(sol[j]==i)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    return 1;
    else
    return 0;
}

void solve(int *mat[],int sol[],int m,int V,int p)
{
    if(p==V)
    {
        display(sol,V);
    }
    else
    {
        int i;
        for(i=0;i<=m;i++)
        {
            if(issafe(mat,sol,i,p,V)==1)
            {
                sol[p]=i;
                solve(mat,sol,m,V,p+1);
                sol[p]=-1;
            }
        }
    }
}

int main()
{
    int V,E;
    scanf("%d %d",&V,&E);
    int *mat[V],sol[V];
    int i,a,b;
    for(i=0;i<V;i++)
    {
        mat[i]=(int *)calloc(sizeof(int),V);
        sol[i]=-1;
    }
    for(i=0;i<V;i++)
    {
        scanf("%d %d",&a,&b);
        mat[a][b]=1;
        mat[b][a]=1;
        
    }
    int m;
    scanf("%d",&m);
    solve(mat,sol,m,V,0);
}