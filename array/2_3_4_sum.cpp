#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;


// two sum.....................................
// int main(){
    // int arr[]={2,3,4,5,6,6};
//     int target=12;
//     int count=0;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 count++;
//             }
//         }
//     }
//     if(count==1){
//         cout<<"target found";

//     }else{
//         cout<<"target not found";
//     }
// }

// 3 SUM ......................................
#include<vector>
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int n=nums.size();
    vector<vector<int>>ans;
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==3){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());


                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    for(auto &trip: ans){

        cout<<"[ ";
        for(int x: trip){
            cout<<x<<" ";
        }
        cout<<"] ";
    }
    cout<<" ]"; 
}
