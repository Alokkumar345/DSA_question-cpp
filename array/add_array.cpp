#include <iostream>
using namespace std;

// int main() {
//     int rows, cols;

//     cout << "Enter rows and columns: ";
//     cin >> rows >> cols;

//     int arr1[10][10], arr2[10][10], sum[10][10];

//     cout << "Enter first array elements:\n";
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cin >> arr1[i][j];
//         }
//     }

//     cout << "Enter second array elements:\n";
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cin >> arr2[i][j];
//         }
//     }

//     // Addition of two arrays
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             sum[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }

//     cout << "Sum of two arrays:\n";
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }





// WAVE FORM
#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter size of row and column: ";
    cin >> row >> col;

    int arr[row][col];

    cout << "Enter elements: ";

    // input array
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Wave print: ";

    // wave traversal
    for(int j = 0; j < col; j++) {

        if(j % 2 == 0) {
            // top to bottom
            for(int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            // bottom to top
            for(int i = row-1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}

