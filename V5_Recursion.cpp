#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void f1(){
    if(cnt==3) return;
    cout<<cnt<<" ";  // 1 2 3 
    cnt++;
    f1();
}
void f2(int n,int i){
    if(i>n) return;
    cout<<i<< " ";
    f2(n,i+1);
}
void f3(int n,int i){
    if(i>n) return;
    f3(n,i+1);
    cout<<i<<" "; // 5 4 3 2 1
}
void f4(int n,int i){
    if(i<1) return;
    f4(n,i-1);
    cout<<i<<" "; // 1 2 3 4 5 
}
void f5(int n,int i){
    if(i<1) return;
    cout<<i<<" "; // 5 4 3 2 1
    f5(n,i-1);
}
// Parameterised way
void f6(int n,int sum){
    if(n<1){
        cout<<sum; // 15
        return;
    }
    f6(n-1,sum+n);
}
// Functional way
int f6_2(int n){
    if(n<0) return 0;
    return n+f6_2(n-1);
}
int f7(int n){
    if(n<1) return 1;
    return n*f7(n-1);
}
// void f8(int arr[],int n,int i,int j){
void f8(int arr[],int n,int i){
    // if(i>=j) return;
    // swap(arr[i],arr[j]); // 5 4 3 2 1
    // f8(arr,n,i+1,j-1);
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f8(arr,n,i+1);
}
bool f9(string str,int n,int i){
    if(i>=n/2) return true;
    else if(str[i]!=str[n-i-1]) return false;
    return f9(str,n,i+1);
}
int f10(int n){
    if(n<=1) return n;
    return f10(n-1) +f10(n-2);
}
int main(){
    // f1();
    int n=5;
    // 1 --> N
    f2(n,1); 
    cout<<endl;
    // N --> 1
    f3(n,1);
    cout<<endl;
    // 1 --> N via Backtracking
    f4(n,5);
    cout<<endl;
    // N --> 1 via Backtracking
    f5(n,5);
    cout<<endl;
    // Sum of first N Natural Numbers
    // Parameterised way
    f6(n,0);
    cout<<endl;
    // Functional way 
    cout<<f6_2(n);
    cout<<endl;
    // Factorial
    cout<<f7(n);
    cout<<endl;
    // Reversing an Array
    int arr[n]={1,2,3,4,5};
    // f8(arr,n,0,4);
    f8(arr,n,0);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    // Check string for palindrom
    string str="MADAM";
    int len=str.length();
    cout<<f9(str,len,0); 
    cout<<endl;
    cout<<f10(6); // 8
    return 0;
} 