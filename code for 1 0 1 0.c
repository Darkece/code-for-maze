#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t3=1;
    int x1,y1;
    
    int count,m;
    count=0;
    
    char a[100];
    for(int r1=0;r1<100;r1++)
    {
        cin>>a[r1];
    }
    for(int r3=0;r3<100;r3++)
    {count++;
        if(a[r3]=='d')
        {break;}
        
    }
    count=count -1;
    printf("%d hu",count);
    m=count;
    int abhi;
    abhi=2*(count);
    char b[abhi][abhi];
    for(int q1=0;q1<abhi;q1++)
    {
        for(int q2=0;q2<abhi;q2++)
        {
            b[q1][q2]='0';
        }
    }
    b[abhi/2][abhi/2]='N';
    
    x1=(abhi/2)-1;
    y1=abhi/2;
    b[x1][y1]='N';
     x1=(abhi/2)-1-1;
    y1=abhi/2;
    b[x1][y1]='N';
    
    
    for(int i=0;i<m;i++)
    {t3=1;
        
        if(b[x1][y1]=='N'&&t3==1)
         {t3=0;
             
             if(a[i]=='l')
             {y1=y1-1;
             x1=x1;
             b[x1][y1]='W';
             y1=y1-1;
             x1=x1;
             b[x1][y1]='W';
             }
             if(a[i]=='s')
             {
                 x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
              x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
            
                 
             }
             if(a[i]=='r')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
                  x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             
             
             
         }
          if(b[x1][y1]=='W'&&t3==1)
         {t3=0;
             
             if(a[i]=='l')
             {y1=y1;
             x1=x1+1;
             b[x1][y1]='S';
             y1=y1;
             x1=x1+1;
             b[x1][y1]='S';
            }
             if(a[i]=='s')
             {
                 x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
                   x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
             }
             if(a[i]=='r')
             {
                 x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
                 x1=x1-1;
                 y1=y1;
                 b[x1][y1]='N';
             }
             
             
             
         }
         
          if(b[x1][y1]=='E'&&t3==1)
         {
             t3=0;
             if(a[i]=='l')
             {
                 y1=y1;
             x1=x1-1;
             b[x1][y1]='N';
                     y1=y1;
             x1=x1-1;
             b[x1][y1]='N';
                 
             }
             if(a[i]=='s')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
                  x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             if(a[i]=='r')
             {
                 x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
                   x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
             }
             
             
             
         }
         if(b[x1][y1]=='S'&&t3==1)
         {t3=0;
             
             if(a[i]=='l')
             {
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
                 x1=x1;
                 y1=y1+1;
                 b[x1][y1]='E';
             }
             if(a[i]=='s')
             {
                 x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
                    x1=x1+1;
                 y1=y1;
                 b[x1][y1]='S';
             }
             if(a[i]=='r')
             {
                 x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
                  x1=x1;
                 y1=y1-1;
                 b[x1][y1]='W';
             }
             
         }
         
    }
    
    for(int t=0;t<abhi;t++)
    {
        for(int h=0;h<abhi;h++)
        {
            printf(" %c ",b[t][h]);
        }
        printf("\n");
    }
printf("\n   ending");
printf("\n ending");
printf("\n");
int piyush[abhi][abhi];
  for(int t=0;t<abhi;t++)
    {
        for(int h=0;h<abhi;h++)
        {
        
             piyush[t][h]=0;        
        }
    
    }

    for(int t=0;t<abhi;t++)
    {
        for(int h=0;h<abhi;h++)
        {
            if(b[t][h]!='0')
             piyush[t][h]=1;        
        }
    
    }

 for(int t=0;t<abhi;t++)
    {
        for(int h=0;h<abhi;h++)
        {
            
            printf(" %d ",piyush[t][h]);        
        }
    printf("\n");
    }


}

