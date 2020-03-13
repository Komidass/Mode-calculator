
#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int last = NULL;
    int biggest_val = 0;
    int biggest_key = 0;
    cin >> n;
    int arr[n];
    for(int t = 0;t<n;t++)
    {
        cin >> arr[t];
    }
    sort(arr,arr+n);
    map<int,int> map1;
    map<int, int>::iterator itr;
    for(int j=0;j<n;j++)
    {
        if(j==0)  map1.insert(pair<int, int>(arr[j],0));
        else last = arr[j-1];
        if(last != arr[j]) map1.insert(pair<int, int>(arr[j],0));

    }


    for(int i =0;i<n;i++)
    {
        last = NULL;
        if(i==0) continue;
        else last = arr[i-1];

        itr = map1.begin();
        if(last == arr[i])
        {
            map1[arr[i]]++;
        }
        else
        {
            itr++;
        }

    }

            for (itr = map1.begin(); itr != map1.end(); ++itr)
            {
                if(itr->second >= biggest_val)
                {
                    biggest_val = itr->second;
                    biggest_key = itr->first;
                }
            }
            cout << biggest_key;
}

