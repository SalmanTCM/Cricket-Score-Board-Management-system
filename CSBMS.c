#include <stdio.h>
#include <string.h>
struct bangladesh
{
    char name [100];
    int run;
    int extra;
    int wicket
};
struct pakistan
{
    char name[100];
    int ball [120]
};
main()
{
    int w,e,wicket=0;
    struct bangladesh s[10];
    struct pakistan b[10];
    int i,total=0,extra,run,avg,sum,over=0,ex=0;

    //char s[100];printf ("enter the name of boller");
    printf("enter the name of batsman");
    for (i=1; i<3; i++)
    {

        scanf("%s",s[10].name);
        printf("%d>>>         %s",i,s[10].name);
    }
    for (i=1; i<=20; i++)
    {


        for(i=1; i<=6; i++)

        {
            printf("\n");
            printf("boller name:");
            scanf("%s",b[i].name);
            printf("\n");
            printf("%s",b[i].name);
            printf("\n");
            // scanf("%s",s[i].name);
            //printf ("batsman name:%s",s[i].name);
            printf("\n");
            printf("boll number%d:",i);
            scanf ("%d",&s[i].run);
            printf("Extra Run");
            scanf("%d",&s[i].extra);
            printf("wicket");
            scanf("%d",&s[i].wicket);
            if (s[i].wicket==1)
            {
                wicket++;
                printf("wicket=%d",wicket);
            }
            else
            {
                ex=ex+s[i].extra;
                printf("run:[%d]",s[i].run);
                total=total+s[i].run+ex;
                sum=total-ex;
            }


        }
        printf("\n");
        printf("=>     run in this over:[%d]",total);

        printf("\n");
        printf("\n");

        over++;
        printf("over:%d",over);
        printf("\n");



        printf("enter the name and run of player");
        for (i=1; i<3; i++)
        {
            scanf("%s",s[i].name);
            printf ("name:%s",s[i].name);
            printf("\n");
            if(i==2)
            {
                run=0;
                printf("run is:%d",run);
                printf ("\n");
                break;

            }
            printf ("run");
            printf("%d",sum);

            //scanf("%d",&s[i].run);
            //printf ("run is:%d",s[i].run);
        }
        printf ("\n");
        if(wicket==2)
        {
            printf ("all wicket");
            {

                printf ("\n");
                break;
        }

        }
    }
        printf ("\n");
        printf("total=%d",total);
        printf ("\n");
        avg=total/over;
        printf("current Run Rate=%d",avg);
        printf ("\n");
        printf("Extra Run=%d",ex);

}
