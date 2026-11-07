// linear search

// #include<iostream>
// using namespace std;
// int main(){
//     int n,ele;
//     int count=0;
//     int arr[1010];
//     cout<<"search element";
//     cin>>ele;
//     cout<<"enter a size of array : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<" your elemnt "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         }
//     cout<<"linear search"<<endl;
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//             count++;
//         }
//         // else{
//         //     cout<<"not found ";
//         // }
//     }
//     if(count==1){
//         cout<<"element found : "<<ele;
//     }else{
//         cout<<"not found";
//     }


// }



//reverse  number
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int i=0;
//     int j=4;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// second max
// int main(){
//     float arr[]={1.0,5,8,33.98,55.999,707.98};
//     int max=INT8_MIN;
//     int smax=INT8_MIN;
//     for(int i=0;i<6;i++){
//         if(arr[i]>max);
//         smax=max;
//         max=arr[i];
//     }
//     cout<<"second max"<<" ";
//     cout<<smax<<endl;
//     cout<<"first max"<<" ";

//     cout<<max<<endl;
// }

// first min and second min
// int main(){
//     int arr[5]={96,88,-99,9,33};
//     int min=INT8_MAX;
//     int smin=INT8_MAX;
//     for(int i=0;i<5;i++){
//         if(arr[i]<min){
//             smin=min;
//             min=arr[i];  
//         }else if(arr[i]<smin && arr[i] != min){
//             smin=arr[i];
//         } 
//     }
//     cout<<smin;
// }

// missing number

// int main(){
//     int sum=0;
//     int n=9;
//     int arr[]={1,2,3,4,5,7,8,9};
//     for(int i=0;i<n-1;i++){
//         sum+=arr[i];
//     }
//     int sum1=n*(n+1)/2;
//     cout<<sum1-sum;

// }


//fibonacci series
// int main(){
//     int n;
//     cout<<"enter the number for fibbonachi:";
//     cin>>n;
//     int arr[1000];
//     arr[0]=0;
//     arr[1]=1;
//     for(int i=2;i<=n-1;i++){
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n=39;
//     int f=0;
//     int s=1;
//     cout<<f<<" ";
//     cout<<s<<" ";
//     for(int i=0;i<39;i++){
//         int next=f+s;
//         f=s;
//         s=next;  
//         cout<<next<<" ";   
//     }
// }


// rotate array
// int main(){
//     int n=5;
//     int arr[n]={9,3,4,5,6};
//     int temp =arr[n-1];
//     // int arr1[200];
//     for(int i=n-2; i>=0; i--){
//         arr[i+1]=arr[i];

//     } 
//     arr[0]=temp;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// fun in array pointer
// void fun(int a[],int n){
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     fun(arr,5);

// }

// # include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,1,2,3,4,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// int i=0;
// for(int j=1;j<n;j++){
//     if(arr[i]!=arr[j]){
//         i++;
//         arr[i]=arr[j];
//     }

// }
// for(int k=0;k<=i;k++){
//     cout<<arr[k]<<" ";
// }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1000;
//     string s = to_string(n);
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='0'){
//             s[i]='5';
//         }
//     }
//     cout<<s<<" ";
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     // cout<<"hello";
//     int n=5;
//     int arr[n]={1,5,6,7,9};
//     int i=0;
//     int j=4;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
