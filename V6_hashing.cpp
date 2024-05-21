/*
#include <bits/stdc++.h>
using namespace std;
// Globally we can declare a value upto 10^7
int main()
{
    int n;
    cin >> n; // size of the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // inputting values inside array
    }
    int hash[13] = {0}; // declared an array "hash" of size 13 and initialised every index with 0th value.
    // inside main we can declare a value upto 10^6(1000000), it gives TLE
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // hash array increases the value at the required index
    }
    int q;
    cin >> q; // Number of test conditions to be checked
    while (q--)
    {
        int num;
        cin >> num; // Test Conditions
        // fetching
        cout<<hash[num]<<" ";
    }

    return 0;
}

5
1 3 2 1 3
5
1 4 2 3 12
2 0 1 2 0

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<n;i++){
        hash[ch[i]-'a']++; // if it doesnt states that we only have lower case letters and we have characters just make a hash table of 256 and do ch[i]++, rest will be same
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<" "; // then here it will be hash[c]
    }

    return 0;
}

abcab
3
a b c
2 2 1

// As the most size is 10^7, if we want to go bigger we use a map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // size of the array
    int arr[n];

    map<int, int> mp;
    // <key,value>
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // inputting values inside array
        mp[arr[i]]++; // we are now putting the value inside the map, we could have used a separate for loop but it's okay here.
    }

    // Printing all the key --> value pairs
    for(auto it:mp) cout<it.first<<" --> "<<it.second<<endl;

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        cout << mp[n] << " ";
    }

    return 0;
}

5
1 3 2 1 3
5
1 4 2 3 12
2 0 1 2 0


#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    map<char,int> mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    int q; cin>>q;
    while(q--){
        char ch; cin>>ch;
        cout<<mp[ch]<<" ";
    }

    return 0;
}
abcab
3
a b c
2 2 1

// Map for all the case(Best to worst) and all the conditions(sorting, fetching) takes O(logn)
// We use Unordered_map as it's best and average case is O(1) and worst case sometimes become O(n)
// First use Unordered_map, but if it is giving TLE then go back to map 


#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int maxEl=0,minEl=n,
    maxFreq=0,minFreq=n;
    for(auto it:mp){
        if(it.second>maxFreq){
            maxEl=it.first;
            maxFreq=it.second;
        }
        if(it.second<minFreq){
            minEl=it.first;
            minFreq=it.second;
        }
    }
    cout<<maxEl<<" has the maximum Frequency : "<<maxFreq<<endl;
    cout<<minEl<<" has the minimum Frequency : "<<minFreq<<endl;
}
int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);

    return 0;
}

10 has the maximum Frequency : 3
15 has the minimum Frequency : 1

*/