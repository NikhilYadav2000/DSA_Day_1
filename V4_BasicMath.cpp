/*
// Count Number of Digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  cnt=0;   
    while(n!=0){
        cnt++;
        n=n/10;
    }
    cout<<cnt;
    return 0;
}

// ALternate Solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=(int)(log10(n)+1);
    cout<<cnt; 
    return 0;
}

// Reverse a Number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,rev=0; cin>>n;
    while(n!=0){
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    cout<<rev;

    return 0;
}

// Check Palindrom
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,rev=0; cin>>n;
    int n2=n;
    while(n!=0){
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    cout<<n2<<endl;
    cout<<rev<<endl;
    if(n2==rev) cout<<"Palindrom"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

// Armstring Number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,rev=0; cin>>n;
    int n2=n;
    while(n!=0){
        l=n%10;
        rev+=pow(l,3);
        n=n/10;
    }
    if(n2==rev) cout<<"Armstrong";
    else cout<<"No";

    return 0;
}

// Print all Factors
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vec;
    for(int i =1;i<=sqrt(n);i++){ // O(sqrt(n))
    // for(int i =1;i*i<=n;i++){ // as sqrt takes time use this, 1*1....6*6, it will stop at 7*7 as it is greater then 36 then number we took as n
        if(n%i==0) {
            vec.push_back(i);
            if((n/i)!=i){
                vec.push_back(n/i);  
            } 
        }
    }
    sort(vec.begin(),vec.end()); // O(n log n) : n is the number of factors
    for(auto v:vec) cout<<v<<" "; // O(Number of factors) 

    return 0;
}

// Prime Nos
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=0;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(n%i!=i) cnt++;
        }
    }
    if(cnt==2) cout<<"true";
    else cout<<"false";

    return 0;
}

// GCD/HCF
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;

    return 0;
}
*/



