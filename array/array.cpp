// #include<iostream>
// using namespace std;
// int main(){
//     // int smallest = INT8_MAX;
//     int marks[]={33,55,66,77,88};
//     int size=5,i;

//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;
//      for(i=0;i<size;i++){
//         smallest = min(marks[i],smallest);
//         largest = max(marks[i],largest); 
//     }
//     cout<<"smallest =  " <<smallest<<endl;
//     cout<<"largest =  " <<largest<<endl;
//     return 0;
//     }


// PASS BY REFRENCE.............!!!!!!!!!!!!
// #include<iostream>
// using namespace std;
// // coll by refrence
// int changenum(int &n){
//     n = 88;
// }
// int main(){
//     int x=89;
//     changenum(x);
//     cout<<x;
// }
 
//PASS BY VALUE..................................!!!!!!!!!!!!!!
// #include<iostream>
// using namespace std;
// // pass by value
// int changenum(int n){
//     n = 88;
// }
// int main(){
//     int x=89;
//     changenum(x);
//     cout<<x;
//     return 0;
// }



// LINEAR SEARCH........!!!!
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[1000],target,n,count;
//     bool found;
//     cout<<"enter a size of array:";
//     cin>>n;

//     cout<<"enter a element:"<<endl;;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter target element:";
//     cin>>target;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             cout<<"found!";
//             found=true;
//             // count++;
//         }
//     }
//     if(found!=true){
//         cout<<"not found!";
//     }
//     return 0;
// }


// function linear search


// int linearsearch(int arr[],int sz,int target){
//     for(int i=0;i<sz;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={4,5,6,7,8,9,1,2};
//     int sz=7;
//     int target=5;
//     cout<< linearsearch(arr,sz,target) <<endl;
//     return 0;
// }


// reverse number print

// #include<iostream>
// using namespace std;
// int revnum(int arr[],int sz){
//     int start=0,end=sz-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     // for(int i=sz-1;i>=0;i--){
//     //     cout<<arr[i]<<" ";
//     // }
// }
// int main(){
//     int sz=7;
//     int arr[1000];
//     for(int i=0;i<sz;i++){
//         cout<<"enter a element:";
//         cin>>arr[i];
//     }
//     cout<<"reverse ordr:";
//     revnum(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//find minimun element of this array

// #include<iostream>
// using namespace std;
// int main(){
//     int ans=INT16_MAX;
//     int arr[5]={2,4,5,7,1};
//     for(int i=0;i<5;i++){
//         if(arr[i]<ans){
//             ans=arr[i];
//         }

//     }
//     cout<<"minimun element this array:" <<ans;

// }

// find min element of this array;

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,66,7,9,-1};
//     int ans=INT16_MIN;
//     for(int i=0;i<5;i++){
//         if(arr[i]>ans){
//             ans=arr[i];
//         }
//     }
//     cout<<"max element of thsi array :"<<ans;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={4,2,5,1,7,-1,7};
//     int target=29;
//     int sum;
//     int found=0;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]*arr[j]==target){  // check pair with given number
//             if(arr[i]+arr[j]==target){ // two sum of pairs with given number

//                 found++;
//             }

//         }
//     }
//     if(found){
//         cout<<"found";
//     }else{
//         cout<<"not found";
//     }
// }


//clogest number

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,lower,heigh;
//     cin>>n;
//     cin>>m;
//     lower=(n/m)*m;
//     heigh=lower+m;
//     if((abs(n-lower))<=(abs(n-heigh))){
//         cout<<lower;
//     }else{
//         cout<<heigh;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,5,6,7,8};
//     // int target=6;
//     // int found=0;
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }


// }

//bubble sort

// #include <iostream>
// using namespace std;

// int main() {
//     // code here
//     int n=-433;
//     int ans=n%10;
//     cout<<ans;


//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     // Take a as input
//     int a=-7;

//     // find it is positive, negative or zero
//     if(a>0){
//     cout<<"Positive";
//     }else if(a<0){
//         cout<<"Negative";
//     }else{
//         cout<<"Zero";
//     } 

//     return 0;
// }


// C++ DSA LEARN CODING(ARRAY)
//frequency of elements
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int element;
//     int arr[]={29,58,4,4,3,7,2,3,4,5,0,0,0,0,0};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"enter a find freq of element:";
//     cin>>element;
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             count++;
//         }
//     }
//     cout<<"frequency of "<<element<<" at " <<count<<" times";
//     return 0;
// }



// two pointer technicq

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int element;
//     int temp;
//     int arr[]={29,58,4,4,3,7,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int start=0;
//     int end=size-1;
    // while(start<=end){
    //     temp=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=temp;
    //     start++;
    //     end--;
    // }


//     for(int i=start;i<end;i++){
//         for(int j=end;j>start;j--){
//             temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;
//             end--;
//             start++;
//         }
//     } 
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





// duplicate of elements

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int element;
//     int arr[]={29,58,4,4,3,7,2,3,4,5,0,0,0,0,0};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"enter a find freq of element:";
//     cin>>element;
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             count++;
//         }
//     }
//     if(count>=2){
//         cout<<"the given element is duplicate";

//     }else{
//         cout<<"not duplicate";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=101101;
//     int ans=0;
//     int mul=1;

//     while(n>0){
//         int digit=n%10;
//         ans+=digit*mul;
//         n/=10;
//         mul*=2;
//     }
//     cout<<ans;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num=24;
//     int sum=0;
//     int mul=1;
//     while(num>0){
//         int digit=num%2;
//         num/=2;
//         sum+=digit*mul;
//         mul*=10;
//     }
//     cout<<sum;
// }


#include<iostream>
using namespace std;
// int main(){
//     int arr[]={1,0,8,0,4,0,3};  // o/p= 1 8 4 3 0 0 0 
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     while(j<n){
//         arr[j]=0;
//         j++;
//     }
//     cout<<"print elements"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// count vowel 

// int main(){
//     string str="Aspiring";
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
//             count++;
//         }
//     }
//     cout<<count;
// }