#include<vector>
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

void printV(vector<int> v){
    for(int x: v){
        cout<<x<<' ';
    }
    cout<<endl;
}
int main(){
    // create an empty vector
    vector<int> vect1;
    vect1.push_back(20);
    vect1.push_back(4);
    printV(vect1);

    // create vector of size 5 with all elements as 7
    vector<int> vect2(5,7);
    printV(vect2);

    // using initializer list
    vector<int> vect3{5,2,8,12};
    printV(vect3);

    // sort in descending order
    sort(vect3.rbegin(), vect3.rend());
    printV(vect3);

    // sum of vector
    int sum = accumulate(vect3.begin(), vect3.end(), 0);
    cout<<sum<<endl;

    // Partial sum array
    vector<int> ps(vect3.size()); // not working without size() 
    partial_sum(vect3.begin(), vect3.end(), ps.begin());
    partial_sum(vect3.begin(), vect3.end(), vect3.begin());
    printV(ps);
    
    return 0;
}
