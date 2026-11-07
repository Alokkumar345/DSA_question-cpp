
#include<iostream>
#include<vector>
using namespace std;

// int winner(vector<bool>& person, int n, int index,
//            int person_left, int k) {

//     // Base case
//     if(person_left == 1) {
//         for(int i = 0; i < n; i++) {
//             if(person[i] == 0)
//                 return i;
//         }
//     }

//     // Find the person to eliminate
//     int kill = (k - 1) % person_left;
//     while(kill--) {
//         index = (index + 1) % n;
//         while(person[index] == 1) {
//             index = (index + 1) % n;
//         }
//     }
//     // Eliminate the person
//     person[index] = 1;
//     // Find the next alive person
//     while(person[index] == 1) {
//         index = (index + 1) % n;
//     }
//     return winner(person, n, index, person_left - 1, k);
// }

// int main() {
//     int n = 5, k = 2;
//     vector<bool> person(n, 0);
//     cout << "Winner: "
//          << winner(person, n, 0, n, k);

//     return 0;
// }





int winner(int n, int k){
    if(n==1){
        return 0;
    }
    return (winner(n-1, k)+k)%n;
}
int main(){
    cout<<winner(5, 3);
} 
