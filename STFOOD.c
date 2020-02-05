#include<stdio.h>;

int main()
{
  int T,N,i,j,max=0;
  int S[100];
  int P[100];
  int V[100];
  int profit[100];
  //printf("Enter testcases");
  scanf("%d",&T);
  for(j=0; j<T;j++)
  {
   // printf("\nEnter valueof N");
    scanf("%d",&N);
    
    
    for(i=0;i<N;i++)
    {
     // printf("\nEnter S,P,V");
      scanf("%d %d %d",&S[i],&P[i],&V[i]);
      profit[i]=(P[i]/(S[i]+1))*V[i];
     // printf("\profit[%d]=%d",i,profit[i]);
    }
    
    max=profit[0];
    for(i=1;i<N;i++)
    {
      if(max<profit[i])
      {
        max=profit[i];
      }
        
    }
    printf("%d\n",max);
    
  }
  
  return 0;
}

