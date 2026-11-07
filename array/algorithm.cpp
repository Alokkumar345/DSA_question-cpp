#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

// bool comparator(pair<int,int> p1 , pair<int, int>p2){
//     if(p1.second < p2.second) return true;
//     else return false;
// }

int main(){
    // int arr[5]={2,7,1,9,3};
    // sort(arr,arr+5);

    vector<int>arr={2,7,1,9,3};
    sort(arr.begin(),arr.end());

    // sort(arr.begin(),arr.end(),greater<int>());
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;



    // vector<pair<int,int>>vec={{1,2},{6,7},{3,4},{7,8}};
    // sort(vec.begin(),vec.end());
    // for(auto p:vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }



    // comparator.....................................
    // vector<pair<int,int>>vec={{1,2},{6,7},{3,4},{7,8}};
    // vector<int>vec={2,7,1,9,3};
    // reverse(vec.begin(), vec.end());
    // for(auto val:vec){
    //     cout<<val<<endl;
    // }
    // cout<<endl;













    // string s="alok";
    // prev_permutation(s.begin(),s.end());

    // cout<<s<<" ";

    // return 0;



    // cout<<max(8,9)<<" "<<min(8,9)<<endl;
    // int a=10,b=90;
    // swap(a,b);
    // cout<<"a= "<< a  <<"b= "<<b <<endl;



    // vector<int>vec={2,7,1,9,3};
    // int target=9;
    // // cout << *(min_element(vec.begin(),vec.end()))<<endl;
    // cout<<binary_search(vec.begin(),vec.end(),target);



    // int n= 15;
    // long int j= 15;
    // long long int k=67;

    // cout<<__builtin_popcount(n)<<endl;
    // cout<<__builtin_popcountl(j)<<endl;
    // cout<<__builtin_popcountll(k)<<endl;




}