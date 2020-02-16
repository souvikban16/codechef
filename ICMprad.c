#include <stdio.h>
#include <math.h>
int main(void)
{

    float a,b,c,d,x,y;
    float t;
    int testcase=0;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++)
    {
      scanf("%f %f %f %f",&a,&b,&x, &y);
      if (x>y)
      {
        d=x;
        c=y;
      }
      else
      {
        d=y;
        c=x;
      }
      t=(a-b)/(c-d);
      if (ceil(t)==t)
      {
        printf("YES\n" );
      }
      else
      {
        printf("NO\n");
      }


    }


}
