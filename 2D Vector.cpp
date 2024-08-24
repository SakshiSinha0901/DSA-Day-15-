// // How to create 2D array using vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> arr(5,vector<int>(4,0));
    int totalRows = arr.size();
    int totalcolumn = arr[0].size();
    // 2D array created 
    // with 5 rows
    // with 4 column 
    // with initial value of each cell as "0"

    vector<vector<int>>brr(4);

    brr[0]=vector<int>(4);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(5);
    brr[3]=vector<int>(3);

    //Replace totalcolumn with totalRowCount in the loop: Since you want to iterate over each row of brr to print the size of each row (number of columns), the loop should run based on the number of rows in brr, not the number of columns in arr.

    //counting rows
    int totalRowCount = brr.size();
    //counting columns
    
    for(int i=0; i<totalRowCount; i++){
        cout<<brr[i].size()<< endl;

    }


}