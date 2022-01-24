#include <iostream>
#include "setcolor.h"
using namespace std;

int main()
{
    int s=1;int m,n;
    int i,j;
    cout<<"number of row:";
    cin>>i;
    cout<<"number of col:";
cin>>j;
   for(int y=0;y < i ;y++){
        s=s*-1;
    for(int x=0;x < j ;x++)
    {
        if(s==1)
        {
            changecolor(0xff);
            for(int y=0;y<2;y++){
            cout<<"-";
        }
        }
        if(s==-1)
        {
        changecolor(0x00);
        for(int k=0;k<2;k++)
        {
            cout<<"+";
        }
        }
     s=s*-1;
    }
    cout<<"\n";
}
changecolor(0x07);
cout<<"\n\n\n";
system("pause");
    return 0;
  }
