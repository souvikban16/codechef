#include<stdio.h>
#include<math.h>

int main()
{
    double tt,tb,distancetoBolt,finish,tigerAccelaration,boltSpeed;
    int t=0;
    scanf("%d",&t);
    for( int i=1; i <=t;i++)
    {
        //main program starts

        scanf("%lf %lf %lf %lf",&finish,&distancetoBolt,&tigerAccelaration,&boltSpeed);
        tt=sqrt((2*(finish+distancetoBolt)/tigerAccelaration));
        tb=(finish/boltSpeed);

        if(tt<=tb)
            printf("Tiger\n");
        else if (tt>tb)
            printf("Bolt\n");
        
        

    }
    return 0;
}