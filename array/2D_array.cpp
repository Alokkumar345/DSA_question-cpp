#include<iostream>
using namespace std;
// int main(){  // matrix output..................................
//     int matrix[4][3]={{1,2,3},{2,3,4},{4,5,6},{6,7,8}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cout<<3*matrix[i][j]<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }



// int main(){   //matrix input.....................................
//     int matrix[4][3];
//     cout<<"enter element:"<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cin>> matrix[i][j];
//         }
//         cout<<endl;
//     }

//     cout<<"print elements:"<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;

//     }

// }



// linear search.....................................................Question

// bool linearsearch(int mat[][3],int rows,int cols, int key){
// pair<int,int> linearsearch(int mat[][3],int rows,int cols, int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(mat[i][j]==key){
//                 // return true;
//                 return {i,j};
//             }
//         }
//     }
//     // return false;
//     return {-1,-1};


// }
// int main(){
//     int matrix[4][3]={{1,2,3},{2,3,4},{4,5,6},{6,7,8}};
//     int rows=4;
//     int cols=3;
//     // cout<<linearsearch(matrix,rows,cols,56)<<endl;
//     pair<int,int> ans=linearsearch(matrix,rows,cols,5);
//     cout<<"row "<<ans.first<<endl;
//     cout<<"cols "<<ans.second<<endl;
// }


// maximum row sum.........................................................
// int maxsum(int mat[][3],int rows,int cols){
//     int maxrowsum=INT16_MIN;
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum+=mat[i][j];
//         }
//         maxrowsum=max(maxrowsum,sum);
//     }
//     return maxrowsum;
// }
// int main(){
//     int rows=4;
//     int cols=3;
//     int matrix[4][3]={{1,2,3},{2,3,4},{4,5,6},{80,7,10}};
//     cout<<maxsum(matrix,rows,cols)<<endl;
//     return 0;
// }


// maximum column sum.........................................................Questions

// int maxsum(int mat[][3],int rows,int cols){
//     int maxrowsum=INT16_MIN;
//     for(int j=0;j<cols;j++){
//         int sum=0;
//         for(int i=0;i<rows;i++){
//             sum+=mat[i][j];
//         }
//         maxrowsum=max(maxrowsum,sum);
//     }
//     return maxrowsum;
// }
// int main(){
//     int rows=4;
//     int cols=3;
//     int matrix[4][3]={{1,2,3},{2,3,4},{4,5,6},{6,7,10}};
//     cout<<maxsum(matrix,rows,cols)<<endl;
//     return 0;
// }



// //  DIAGONAL SUM...........................................................
// int diagonalsum(int mat[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=mat[i][i];
//         if(i!=n-i-1){
//             sum+=mat[i][n-i-1];
//         }

//         // for(int j=0;j<n;j++){
//         //     if(i==j){
//         //         sum+=mat[i][j];
//         //     }else if(j==n-i-1){
//         //         sum+=mat[i][j];
//         //     }
//         // }

//     }
//     return sum;
// }
// int main(){
//     int matrix[4][4]={{1,2,3,5},{2,3,4,6},{4,5,6,8},{6,7,10,9}};
//     int n=4;
//     cout<<diagonalsum(matrix,n);
// }


// spiral matrix......................................... leetcode (51)
