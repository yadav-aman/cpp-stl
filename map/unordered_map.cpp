#include <bits/stdc++.h>
using namespace std;

int main(){
//====================== CODE =================================
    unordered_map<string, double> umap;

    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;

    // inserting value by insert function
    umap.insert(make_pair("e", 2.718));

    cout<<umap["PI"]<<endl; //3.14
    cout<<umap.at("PI")<<endl; //3.14

    cout<<endl;

    // if you try to access a value for a key that doesn't exist, 
    // a new value object that has been default constructed will be put into the map and it's reference returned.
    cout<<umap["NA"]<<endl; //0
    // now NA is present in umap with value 0

    cout<<endl;

    // find an element
    if(umap.find("na") == umap.end())
        cout<<"Key not found\n";
    else
        cout<<"Key Found\n";
    
    cout<<endl;

    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;

    cout<<endl;
    //    iterating over all value of umap
    unordered_map<string, double>:: iterator itr;

    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        // itr works as a pointer to pair<string, double>
        // type itr->first stores the key part  and
        // itr->second stroes the value part
        cout << itr->first << "  " << itr->second << endl;
     }
//=============================================================
	return 0;
}
