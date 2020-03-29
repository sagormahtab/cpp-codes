#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int par[5]; int impar[5]; int input[15];
    int count1=0;int count2=0;
    int st=0; int en=0;
    for(int i=0;i<15;i++)
        {
            cin>>input[i];
        }
    for(int i=0;i<15;i++)
    {
        if(input[i]%2==0)
        {
          if(count1<5)
           {
                par[count1]=input[i];
                count1++;
           }
        else if(count1==5)
         {
             for(int j=0;j<5;j++)
              {
                 printf("par[%d] = %d\n",j,par[j]);
              }
              count1++;
              par[st]=input[i];
              st++;
         }
         else
         {
               par[st]=input[i];
               st++;
         }
        }
       else
        {

           if(count2<5)
           {
                impar[count2]=input[i];
                count2++;
           }
        else if(count2==5)
            {
                for(int j=0;j<5;j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                count2++;
                impar[en]=input[i];
                en++;
            }
            else
            {
                impar[en]=input[i];
                en++;
            }
        }
    }
   for(int i=0;i<en;i++)
   {
        printf("impar[%d] = %d\n",i,impar[i]);
   }

   for(int j=0;j<st;j++)
   {
        printf("par[%d] = %d\n",j,par[j]);
   }

    return 0;
}
