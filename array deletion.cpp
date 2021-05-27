#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, elem, j, found=0;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}
