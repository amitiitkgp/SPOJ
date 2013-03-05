#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x = 33102,j;
  char *str,*str1;
  str = (char *) malloc(1000050 *(sizeof(char)));
  str1 = (char *) malloc(1000050 *(sizeof(char)));
  str[0] = '1';
  str[1] = '0';
  str[2] = '3';
  str[3] = '9';
  str[4] = '9';
  str[5] = '3';
  int i;
  for(i=6 ; i<1000045 ; i++)
     str[i] = '0';

  int rem = 1;
  j=0;
  for(i=1 ; i<1000045 ; i++ )
  {
     rem = 10*rem + (str[i] -'0') ;
     if(rem>x)
     {
       str1[j] =rem/x + '0';
       rem = rem - x*(str1[j] - '0');
       j++;
      }
      else
      {
        str1[j] = '0';
        j++;
       }
   }
  //for(i=0 ; i<50 ; i++)
    //   cout<<str1[i];

    int T,K;
   cin>>T;
   while(T--)
   {
     cin>>K;
     if(K==0)
     {
       cout<<3<<endl;
       continue;
     }
     else
     {
       cout<<"3.";
       for(i=0 ; i<K ;i++)
         cout<<str1[i+5];
       cout<<endl;
      }
    }
   return 0;
}


  
  
