#include <iostream>
using namespace std;
int main() {
    int nums[5][5];
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin>>nums[i][j];
        }
    }
    int row = 0;
    int col = 0;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            if(nums[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    
    int rowDiff = abs(row-2);
    int colDiff = abs(col-2);
    
    cout<<rowDiff+colDiff;
}