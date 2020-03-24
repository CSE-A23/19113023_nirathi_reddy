#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
main()
{
    int n;
    cin>>n;
    string arr[n];
    int posra[n],pos2[n],sizra=0,siz2=0;
    for(int i=0;i<n;i++)
     {
           
         cin>>arr[i];
         //cout<<"\n1\n";
         if(arr[i].substr(0,2)=="ra")
         {
             posra[sizra]=i;
             sizra++;
            // cout<<"\ndonera "<<i<<"\n"; 
             
         }   
         if(arr[i].length()==2)
         {
             pos2[siz2]=i;
             siz2++;
            // cout<<"\ndone2 "<<i<<"\n"; 
         }
        // cout<<"\n1\n";
     }
     //cout<<"\n"<<sizra<<"\t"<<siz2<<"\n";
    for(int i=0;i<siz2;i++)
     {
         cout<<arr[pos2[i]]<<"\n";
     }
     //cout<<"@@";
    for(int i=0;i<sizra;i++)
     {
         cout<<arr[posra[i]]<<"\n";
     }
    return 0; 
}
