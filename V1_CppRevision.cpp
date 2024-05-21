/*
// Basic Syntax
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str); // take value from cin and put it inside str;
    cout<<str;
    return 0;
}

// Datatypes 
char            : 1b : -127 to 127
int             : 4b : 10^-9 to 10^9
long int        : 4b : 10^-12 to 10^12
long long int   : 4b : 10^-18 to 10^18

// else-if
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age < 18)
        cout << "Eligible for job";
    // >=18
    else if (age <=57){
        cout << "Eligible for job";
        if(age>=55) cout<< ", but retirement soon" << endl;
    }
    else cout << "Retirement time" << endl;

    return 0;
}

// Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    // int s=sizeof(arr); // as we have 4 elements and each is of 4byte so in total 16bytes, so to find actual length we multiply it by size of int
    // 4*4=16bytes
    // 16/4=elements
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// String
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Nikhil";
    int len=s.size();
    cout<<s<<endl; // Nikhil
    cout<<s[len-1]<<endl; // l

    // s[len-1]="t"; // will give u err, it is const char* type 
    s[len-1]='t';
    cout<<s<<endl; // Nikhit
    return 0;
}
// Functions
#include<bits/stdc++.h>
using namespace std;
void printName(string name){
    cout<<"Name is : "<<name;
}
int main(){
    string name;
    cin>>name;
    printName(name);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int returnSum(int a,int b){
    return a+b;
}
int main(){
    cout<<returnSum(13,10);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int returnMaxNo(int n1,int n2){
    if(n1>n2) return n1;
    else return n2;
}
int main(){
    cout<<returnMaxNo(13,10);

    return 0;
}

// Pass By Value
#include<bits/stdc++.h>
using namespace std;
void addSomething(int n){
    cout<<"Before Addition Value : "<<n<<endl;
    n++;
    cout<<"After Addition Value : "<<n<<endl;
}
int main(){
    int n=10;
    addSomething(n);
    cout<<"Main Value : "<<n<<endl;    

    return 0;
}
// Before Addition Value : 10
// After Addition Value : 11
// Main Value : 10

// Pass By Reference
#include<bits/stdc++.h>
using namespace std;
void addSomething(int &n){
    cout<<"Before Addition Value : "<<n<<endl;
    n++;
    cout<<"After Addition Value : "<<n<<endl;
}
int main(){
    int n=10;
    addSomething(n);
    cout<<"Main Value : "<<n<<endl;    

    return 0;
}
// Before Addition Value : 10
// After Addition Value : 11
// Main Value : 11

#include<bits/stdc++.h>
using namespace std;
void doSomething(int *arr,int n){
// void doSomething(int arr[],int n){
    for(int i =0;i<n;i++){
        arr[i]+=10;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    doSomething(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; // 11 12 13 14 
    }

    return 0;
}
*/