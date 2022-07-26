//generic bubble sort
#include<iostream>
using namespace std;

template<class X>
void bubblesort(X *items,int count)
{
    X t;
    for(int i=1;i<count;i++)
    {
        for(int j=count-1;j>=i;j--)
        {
            if(items[j-1]>items[j])
            {
                //swapping the elements 
                t = items[j-1];
                items[j-1] = items[j];
                items[j]=t;
            }
        }
    }
}
template<class X>
void print(X *items,int count)
{
    for(int i=0;i<count;i++)
    {
        cout<<items[i]<<" ";
    }
    cout<<endl;
}
int  main()
{
    int arr1[] = {3,2,1,4,5,5,8,11,6,12,4};
    double arr2[] = {1.2,5.6,2.3,7.9,3.6,7.6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"\nUnsorted Integer values : ";
    print(arr1,n1);
    cout<<"Unsorted Double values : ";
    print(arr2,n2);

    //sorting through generic sort 
    bubblesort(arr1,n1);
    bubblesort(arr2,n2);

    cout<<"\nSorted Integer values : ";
    print(arr1,n1);
    cout<<"Sorted Double values : ";
    print(arr2,n2);
    return 0;
}