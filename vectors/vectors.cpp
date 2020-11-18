#include<vector>
#include<iostream>
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

    return 0;
}
