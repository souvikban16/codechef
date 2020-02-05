#include<stdio.h>
void main()
 {
   //variables for Sequence
   int arr[128];
   arr[0]=0;arr[1]=0;
   int counter=1;
   int tempcounter;
   int flag=0;
   int l=128;int k;

   //variables for testcase

   int testcases=1;
   int searchindex[128];int freq[128];
   int i,j;

   //Sequence genaration
   while(counter!=l)
   {
     tempcounter=counter-1;
     while(tempcounter>=0)
     {
       if(arr[tempcounter]==arr[counter])
       {
         k=tempcounter;
         flag=1;
         break;
       }
       else
       {
         flag=0;
       }
       tempcounter--;
      }
     if(flag==1)
     {
       arr[counter+1]=counter-k;
     }
     else
       arr[counter+1]=0;
      k=0;flag=0;counter++;
    }

    for(int k=0;k<=128;k++)
    {
        printf("%d\n",arr[k]);
    }

    //Testcase evaluation
    scanf("%d",&testcases);

    for(i=0;i<testcases;i++)
    {
      scanf("%d",&searchindex[i]);
      searchindex[i]++;
      freq[i]=0;
      for(j=(searchindex[i]-1);j>=0;j--)
      {
        if(arr[searchindex[i]]==arr[j])
        {
          freq[i]++;
        }
      }
      printf("%d\n",freq[i]);

    }
}
