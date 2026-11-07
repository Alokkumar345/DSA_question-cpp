// #include<iostream>
// #include<vector>

// permutation it contaion unique elements....................................................
// using namespace std;
// void permuttation(int arr[], vector<vector<int> >&ans, vector<int> &temp, vector<bool> visit){
//     if(visit.size()==temp.size()){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i=0;i<visit.size();i++){
//         if(visit[i]==0){
//             visit[i]=1;
//             temp.push_back(arr[i]);

//             permuttation(arr, ans,temp, visit);
//             visit[i]=0;
//             temp.pop_back();
//         }
//     }
// }
// int main(){
//     int arr[]={1,1,3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool>visit(4, 0);
//     permuttation(arr, ans, temp, visit);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }





// solve another way to solve permutation.......................................................
// #include<iostream>
// #include<vector>
// using namespace std;
// void permuttation(vector<int>&arr, vector<vector<int> >&ans, int index){
//     if(index==arr.size()){
//         ans.push_back(arr);
//         return;
//     }
//     for(int i=index;i<arr.size();i++){
//         swap(arr[i], arr[index]);
//         permuttation(arr, ans, index+1);
//         swap(arr[i], arr[index]);
//     }
// }
// int main(){
//     vector<int>arr={1,2,3};
//     vector<vector<int>> ans;
//     permuttation(arr, ans, 0);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// permutations II that might contain duplicates......................................
// #include<iostream>
// #include<vector>
// using namespace std;

// void permut(vector<int> &arr, vector<vector<int>>&ans, int index){
//     if(index==arr.size()){
//         ans.push_back(arr);
//         return ;
//     }
//     vector<bool>use(21, 0);
//     for(int i=index;i<arr.size();i++){
//         if(use[arr[i]+10]==0){
//             swap(arr[index], arr[i]);
//             permut(arr, ans, index+1);
//             swap(arr[index], arr[i]);
//             use[arr[i]+10]=1;
//         }
//     }
// }

// int main(){
//     vector<int>arr={1,1,2,2};
//     vector<vector<int>> ans;
//     permut(arr, ans, 0);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// way to sum N..........................................
// #include<iostream>
// using namespace std;
// int way(int arr[], int m , int sum){
//     if(sum==0)
//     return 1;
//     if(sum<0)
//     return 0;
//     int ans=0;
//     for(int i=0;i<m;i++){
//         ans+=way(arr, m, sum-arr[i]);
//     }
//     return ans;
// }
// int main(){
//     int arr[]={1,5,6};
//     cout<<way(arr,3, 7);

// }



#include<iostream>
#include<algorithm>
using namespace std;
int maxele(int arr[], int index, int n){
    if(index==n-1){
        return arr[index];
    }
    return max(arr[index],maxele(arr, index+1, n) );
}
int main(){
    int arr[]={72, 85, 91, 67, 88};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxele(arr,0, n-1);

} 