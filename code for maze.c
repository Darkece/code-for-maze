#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t3=1;
    int x1,y1;
    
    int m;
    cin>>m;
    cin>>x1>>y1;
    char a[m];
    for(int r1=0;r1<m;r1++)
    {
        cin>>a[r1];
    }
    char b[8][8];
    for(int q1=0;q1<8;q1++)
    {
        for(int q2=0;q2<8;q2++)
        {
            b[q1][q2]='0';
        }
    }
    b[x1][y1]='N';
    
    for(int i=0;i<m;i++)
    {t3=1;
        
        if(b[x1][y1]=='N'&&t3==1)
         {t3=0;
             printf("  h  ");
             if(a[i]=='l')
             {y1=y1-1;
             x1=x1;
             b[x1][y1]='W';
             }
             if(a[i]=='s')
             {
                 x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
             }
             if(a[i]=='r')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             
             
             
         }
          if(b[x1][y1]=='W'&&t3==1)
         {t3=0;
             printf("  ss  ");
             if(a[i]=='l')
             {y1=y1;
             x1=x1+1;
             b[x1][y1]='S';
            printf("piyush"); }
             if(a[i]=='s')
             {
                 x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
             }
             if(a[i]=='r')
             {
                 x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
             }
             
             
             
         }
         
          if(b[x1][y1]=='E'&&t3==1)
         {
             t3=0;printf("  dd ");
             if(a[i]=='l')
             {y1=y1;
             x1=x1-1;
             b[x1][y1]='N';
                 
             }
             if(a[i]=='s')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             if(a[i]=='r')
             {
                 x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
             }
             
             
             
         }
         if(b[x1][y1]=='S'&&t3==1)
         {t3=0;
             printf(" aa ");
             if(a[i]=='l')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             if(a[i]=='s')
             {
                 x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
             }
             if(a[i]=='r')
             {
                 x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
             }
             
         }
         
    }
    for(int t=0;t<8;t++)
    {
        for(int h=0;h<8;h++)
        {
            printf(" %c ",b[t][h]);
        }
        printf("\n");
    }
}
