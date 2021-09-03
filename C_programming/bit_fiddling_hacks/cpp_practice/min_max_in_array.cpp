#include <bits/stdc++.h>

struct{
    int min;
    int max;
}pair;

// struct pair getMinMax(long long int arr[], long long int n) {
    
// }

struct pair getMinMax(long long int arr[], long long int n){

    static struct pair ;
    // iterate and find the max and min
    int temp_min = arr[0];
    int temp_max = arr[1];

    for(int i=0; i<count; i++){
        if(arr[i] < temp_min ){
            temp_min = arr[i];
            pair_new.min = arr[i];
        }
        if(arr[i] > temp_max ){
            temp_max = arr[i];
            pair_new.max =  arr[i];
        }

    } 

    return pair_new;
}

pair<int, char> PAIR1;

pair<long long, long long> getMinMax(long long a[], int n)
{

    int i = 1, min = a[0], max = a[0];
    while (i < n)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
        i++;
    }
    return make_pair(min, max);
}
