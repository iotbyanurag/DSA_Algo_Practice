#include <bits/stdc++.h>
// #include <algorithm>
using namespace std;
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
    int i=0;
    if (n==1)
        return i;
    else if (n==2)
        if(arr[i]>arr[i+1])
            return i;
        else 
            return i+1;    

    else
        while (i < n)
        {
            // if the currenet element is greater than the previous as well as the next.
            if(arr[i]>=arr[i-1] && arr[i]>= arr[i+1])
                return i;
            i++;

        }

    }
};