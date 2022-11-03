#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //numRows = 2;
        vector<vector<int>> a(numRows);
        if(numRows == 1)
            a[0].push_back(1);
        else if( numRows == 2) {
            a[0].push_back(1);
            a[1].push_back(1);
            a[1].push_back(1);
        }
        else{
            a[0].push_back(1);
            a[1].push_back(1);
            a[1].push_back(1);
            for (int i=2; i < numRows; i++){
                a[i].push_back(1);
                for (int j=0; j< a[i-1].size()-1; j++){
                    a[i].push_back(a[i-1][j] + a[i-1][j+1]);
                }
                a[i].push_back(1);
            }
            
        }
       return a; 
    }
};

int main() {
    Solution test;
    vector<vector<int>> f = test.generate(5);
    for (int i = 0; i < f[4].size(); i++){
        cout<< f[4][i] << ' ';
    }
    return 0;
}

