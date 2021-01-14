#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a="XY",b="12",res="12XY";
    int x=a.length();
    int y=b.length();
    int z=res.length();
    if((x+y)!=z)
    cout<<"False";
    else
    {
        int i=0,j=0,k=0;
        while(k<z)
        {
            if(i<x && a[i]==res[k])
            i++;
            else if(j<y && b[j] ==res[k])
            j++;
            else
            {
                break;
            }
            k++;
        }
        if(i<x || j<y)
        cout<<"False";
        else
        cout<<"Yes";
        
    }
    
}