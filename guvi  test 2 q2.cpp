
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class MYTIME
{
    public:
      int hrs;
      int min;
      int sec;
      friend MYTIME operator +(MYTIME a,MYTIME b);
      void mtin()
       {
           cin>>hrs>>min>>sec;
       }
      void mtout()
       {
           cout<<"sum = "<<hrs<<" "<<min<<" "<<sec;
       }
      MYTIME()
      {
          hrs=0;
          sec=0;
          min=0;
      }
     void operator ++()
      {
          sec+=5;
          min+=5;
          hrs+=5;
      }
};
void check(MYTIME &tr)
{
    if(tr.sec>=60)
    {
        tr.min+=(tr.sec/60);
        tr.sec=tr.sec%60;
    }    
    if(tr.min>=60)
    {
        tr.hrs+=(tr.min/60);
        tr.min=tr.min%60;
    }
}
MYTIME operator +(MYTIME x,MYTIME y)
{
    MYTIME ans;
    ans.sec=x.sec + y.sec;
    ans.min+=(x.min + y.min);
    ans.hrs+=(x.hrs + y.hrs);
    return ans;
}
main()
 {
    MYTIME a,b,c;
    a.mtin();
    b.mtin();
    c=a+b;
    check(c);
    cout<<"sum = "<<c.hrs<<" "<<c.min<<" "<<c.sec;
    ++b;
    check(b);
    cout<<"\nIncrement of Time Object 2 = "<<b.hrs<<" "<<b.min<<" "<<b.sec;
    getch();
    return 0;
}
