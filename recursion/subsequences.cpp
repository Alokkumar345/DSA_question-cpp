// #include<iostream>
// #include<vector>
// using namespace std;
// void subsequence(int arr[], int index, int n, vector<vector<int>>&ans, vector<int>temp){
//     if(index==n){
//         ans.push_back(temp);
//         return ;
//     }
//     // not include
//     subsequence(arr, index+1, n, ans, temp);
//     // include
//     temp.push_back(arr[index]);
//     subsequence(arr, index+1, n, ans, temp);

// }
// int main(){
//     int arr[]={1,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<vector<int> >ans;
//     vector<int>temp;
//     subsequence(arr, 0, n, ans, temp);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }





// #include<iostream>
#include<vector>
// using namespace std;
// void subsequence(string str, int index, int n, vector<string>&ans, string temp){
//     if(index==n){
//         ans.push_back(temp);
//         return ;
//     }
//     // not include
//     subsequence(str, index+1, n, ans, temp);
//     // include
//     temp.push_back(str[index]);
//     subsequence(str, index+1, n, ans, temp);

// }
// int main(){
//     string str="abc";
//     int n=str.size();
//     vector<string>ans;
//     string temp;
//     subsequence(str, 0, n, ans, temp);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// } 


#include<iostream>
using namespace std;
void sequence(string str, int index, int n, vector<string> &ans, string temp){
    if(index==n){
        ans.push_back(temp);
        return ;
    }
    // exclude
    sequence(str, index+1, n, ans, temp);
    // include
    temp.push_back(str[index]);
    sequence(str, index+1, n, ans, temp);
    temp.pop_back();
}
int main(){
    // int count=0;
    string str="abc";
    vector<string> ans;
    string temp;
    sequence(str, 0, str.size(), ans, temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
        // count++;
    }
    // cout<<count;
    return 0;
}