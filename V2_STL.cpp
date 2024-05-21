/*
STL is divided into : 
1. Algorithms
2. Containers
3. Functions
4. Iterators

//Pairs
#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair
    pair<int,int> p ={1,3};
    cout<<"p.first "<<p.first<<", p.second "<<p.first<<endl;  

    pair<int,pair<int,int>> p2={1,{3,4}};
    cout<<"p2.first "<<p2.first<<", p2.second.first "<<p2.second.first<<", p2.second.second "<<p2.second.second<<endl;

    pair<int,int> p3[]={{1,2},{3,4},{5,6}};
    cout<<"p3[0].first "<<p3[0].first<<", p3[0].second "<<p3[0].second<<endl;
    return 0;
}

// Vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster then push_back

    vector<pair<int,int>> v2;
    v2.push_back({1,2}); // {1,2} here
    v2.emplace_back(3,4); // (3,4) here

    vector<int> v3(5,100); // {100,100,100,100,100}, we can still push more elements and it will automatically increase the size
    vector<int> v4(5); // {0,0,0,0,0}
    vector<int> v5(v3);

    vector<int> ::iterator it=v.begin(); // v.begin() means the memory address of the first element
    // it++; goes to the next addresss, from left to right
    cout<<*it<<endl;

    vector<int>::iterator it=v.end(); // will point to the memory location right after the last element
    it--; // will move it from right ot left
    vector<int>::iterator it=v.rend(); // it--; will move from right to left
    vector<int>::iterator it=v.rbegin(); // it++ will move it from left to right as it points to the address just after the last element, It iterates from last to first

    vector<int> v6={1,2,3};
    v[0]; // 1
    v.at(0); // 1
    v.back(); // 3

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto it:v){
        cout<<it<<endl; // it here is the value
    }

    v.erase(v.begin()+1); // deletes the 1st element
    // Before = {1,2,3,4}, After = {1,3,4}
    v.erase(v.begin()+1,v.begin()+4); 
    // [......)
    // Before = {1,2,3,4,5}, After = {1,5}

    v.insert(v.begin()+1,3);
    // Before = {1,2}, After = {1,3,2}
    v.insert(v.begin()+1,2,5);
    // start index, how many elements, the element
    // Before = {1,2}, After = {1,5,5,2}

    vector<int> v7={1,2};
    vector<int> v8;
    v8.insert(v8.begin(),v7.begin(),v7.end());
    // start index of the new vector, start and end index pf the old vector(to be copied)

    v.size();
    v.pop_back();
    v7.swap(v8);
    v.clear();
    v.empty(); // gives boolean values

    return 0;
}
// list
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);

    // rest functions same as vector, begin, end, rbegin, swap, size, insert
    // Time Complexity wise list is comparitively cheaper then vector bcoz of push_front
    return 0;
}

// Stack - LIFO
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    cout<<st.top();
    st.pop();
    st.size();
    st.empty();
    stack<int>st1, st2;
    st1.swap(st2);

    // TC - Every Operation happens in O(1)
    return 0;
}

// Queue - FIFO
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    q.back()+=5; 
    cout<<q.back()<<endl; // 8
    cout<<q.front()<<endl; // 1
    q.pop(); // popped 1
    cout<<q.front(); // 2
    return 0;
}

// Priority Queue
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq; // Largest value on top
    pq.push(1);
    pq.push(10);
    pq.push(5);
    // {10,5,1}
    cout<<pq.top(); // 10
    pq.pop();
    cout<<pq.top();

    priority_queue<int,vector<int>, greater<int>>pq; // Min Heap, smallest value on top
    pq.push(1);
    pq.push(10);
    pq.push(5);
    // {1,5,10}
    cout<<pq.top(); // 1
    pq.pop();
    cout<<pq.top();
    // TC - push and pop in (log(n)), top in O(1)

    return 0;
}

// Set -  Sorted and Unique values
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(1);
    // {1,2}
    // begin(),end() etc same functionality

    auto it=st.find(3); // returns iterator pointing to the address of 3, if not present then will give address of end();
    st.erase(3); //  or st.erase(it);

    int cnt=st.count(3); // 1 if present, 0 if not

    auto it1 = st.find(2); // 1st index
    auto it2 = st.find(4); // 3rd index
    st.erase(it1,it2);
    // [.....)
    // Before = {1,2,3,4}, After = {1,4}
    return 0;
}

// Multiset - Sorted and Multiple values
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    // {1,1,2}
    int cnt=ms.count(1);
    ms.erase(ms.find(1)); // deletes first occurence
    ms.erase(ms.find(1),ms.find(1)+2);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);

    // {1, 1, 2}
    
    int cnt = ms.count(1);  // Count occurrences of 1

    // Use equal_range to get the range of elements equal to 1
    auto range = ms.equal_range(1);
    
    // Erase the range
    ms.erase(range.first, range.second);

    // Print remaining elements to verify
    for(int val : ms) {
        cout << val << " ";
    }
    // Output should be: 2

    return 0;
}

// unorderedset - unordered and unique value - TC - mostly is O(1) in worst case it goes O(n);

// map - key-->value pairs,  unique keys in sorted orders
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    map<int,pair<int,int>> mp1;
    map<pair<int,int>,int> mp2;
    mp[1]=2; // will be added at the 0th index, it holds key as 1 and corresponding value as 2
    // {1,2}
    mp.insert({3,4});
    mp2[{2,3}]=10;

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    } // {1,2},{3,4}d
    cout<<mp[1]; // 2
    auto it=mp.find(3); // finds key

    return 0;
} // log(n)

// multimap - sorted and multiple keys
// unordered map - unique and unsorted keys, O(1) for best and O(n) for worst

// Sorting
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true; // just focus on 2 ele, if p1.sec is < p2.sec then it is right
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;

}
int main(){
    // int n=3;
    // int arr[n]={1310,10,13};
    // sort(arr,arr+n);
    // // sort(arr,arr+n,greater<int>);
    // sort(arr+1,arr+2);
    // vector<int> v={13,1010,10};
    // sort(v.begin(),v.end());

// Comparator
    int n=3;
    pair<int,int> arr[n]={{1,2},{2,1},{4,1}};
    // sort acc to 2nd ele
    // sec ele same, then sort in des acc to first
    sort(arr,arr+n,comp);

    int num=7;
    int cnt=__builtin_popcount(num);
    // cout<<cnt; // 3 {1 1 1}

    string s="123"; // if it starts from 231 then only 3 permutations after it will be printed
    do{
        // cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;

    int a[]={1,2,3,4,58,6};
    int maxi=*max_element(a,a+n);
    cout<<maxi; 
}

// Binary Search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int a[n]={1,4,5,8,9};
    bool res=binary_search(a,a+n,3); 
    bool res2=binary_search(a,a+n,4); 
    cout<<res<<" "; // 0
    cout<<res2; // 1

    return 0;
}

// Lower_Bound -  that number or the next greater element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int a[n]={1,4,5,6,9,9};
    int ind=lower_bound(a,a+n,4)-a; // returns index of 4
    // int ind=lower_bound(v.begin(),v.end(),4)-v.begin(); // returns index of 4
    int ind=lower_bound(a,a+n,7)-a; // returns index of 9
    int ind=lower_bound(a,a+n,10)-a; // returns index of end();

    return 0;
}
*/

// Upper_Bound - next greater element - O(log(n))
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int a[n]={1,4,5,6,9,9};
    int ind=lower_bound(a,a+n,4)-a; // returns index of 5
    // int ind=lower_bound(v.begin(),v.end(),4)-v.begin(); // returns index of 5
    int ind=lower_bound(a,a+n,7)-a; // returns index of 9
    int ind=lower_bound(a,a+n,10)-a; // returns index of end();

    return 0;
}

