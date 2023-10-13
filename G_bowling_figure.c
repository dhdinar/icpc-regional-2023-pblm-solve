#include <stdio.h>
#include <string.h>
int main()
{
    int T,i,j;
    char W;
    char S[61];
    scanf("%d",&T);
float over(int a)
{
    int o=a/6;
    int ball=a%6;
    float b=o+ball/10.0;

    return b;
}
    for(i=0;i<T+1;i++)
    {
        gets(S);
        int run=0;
        int wkt=0;
        int tb=strlen(S);
        for(j=0;S[j]!='\0';j++)
        {

            if(S[j]!=87)
            {
                int k=S[j]-48;
                run=run+k;
            }

            if(S[j]==87)
            wkt=wkt+1;



        }
        if(i!=0)
        {
            float Over=over(j);

            if(wkt>1&&run>1&&Over>1)
                printf("%.1f Overs %d runs %d Wickets.\n",Over,run,wkt);
            
            if(wkt>1&&run>1&&Over<=1)
                printf("%.1f Over %d runs %d Wicket.\n",Over,run,wkt);

            if(wkt>1&&run<=1&&Over<=1)
                printf("%.1f Over %d run %d Wickets.\n",Over,run,wkt);

            if(wkt<=1&&run<=1&&Over<=1)
                printf("%.1f Over %d run %d Wicket.\n",Over,run,wkt);

            if(wkt<=1&&run>1&&Over<=1)
                printf("%.1f Over %d runs %d Wicket.\n",Over,run,wkt);

            if(wkt<=1&&run<=1&&Over>1)
                printf("%.1f Overs %d run %d Wickets.\n",Over,run,wkt);


            if(wkt<=1&&run>1&&Over>1)
                printf("%.1f Overs %d runs %d Wicket.\n",Over,run,wkt);



        }

    }
    return 0;

}
