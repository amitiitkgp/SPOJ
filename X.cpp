#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


bool compr(string str1 , string str2)
{
    int l,i;
    if(str1.length() > str2.length())
        l = str2.length();
    else
        l = str1.length();
        
    for(i=0 ; i<l ; i++)
    {
        if(str1[i] > str2[i] )
            return true;
        else if (str2[i] > str1[i])
            return false;
        else
            continue;
    }
    if(str1.length() < str2.length())
        return true;
    else
        return false;
}

int main()
{
    int T,N,i,j;
    string temp;
    string str[110];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(i=0 ; i<N ; i++)
            cin>>str[i];
       for(i=0;i<N;i++)
        {
         for(j=0;j<i;j++)
          {
             if((!compr(str[i],str[j]) > 0))
             {
                 temp=str[i]; //swap 
                 str[i]=str[j];
                 str[j]=temp;
             }
           }
        }
      for(i= N-1 ; i>=0 ; i--)
        cout<<str[i];
      cout<<endl;
    }
    return 0;
}


























// Input macros

#define s(n)                        scanf("%d",&n)

#define sc(n)                       scanf("%c",&n)

#define sl(n)                       scanf("%lld",&n)

#define sf(n)                       scanf("%lf",&n)

#define ss(n)                       scanf("%s",n)


// Useful constants

#define INF                         (int)1e9

#define EPS                         1e-9


// Useful hardware instructions

#define bitcount                    __builtin_popcount

#define gcd                         __gcd


// Useful container manipulation / traversal macros

#define forall(i,a,b)               for(int i=a;i<b;i++)

#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)

#define all(a)                      a.begin(), a.end()

#define in(a,b)                     ( (b).find(a) != (b).end())

#define pb                          push_back

#define fill(a,v)                    memset(a, v, sizeof a)

#define sz(a)                       ((int)(a.size()))

#define mp                          make_pair


// Some common useful functions

#define maX(a,b)                     ( (a) > (b) ? (a) : (b))

#define miN(a,b)                     ( (a) < (b) ? (a) : (b))

#define checkbit(n,b)                ( (n >> b) & 1)

#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())

#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())

