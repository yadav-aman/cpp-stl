# Vectors

## Taking Input
```cpp
int n;
cin>>n;
vector<int> v(n); // v = {0,0,0,0,...}
for(int& e: v){
    cin>>e;
}
```

## Initialize

```cpp
vector<int> arr(5,3); // {3,3,3,3,3}

vector< vector<int> > arr2(2, vector<int> (4,10));
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 4; j++){
        cout << arr2[i][j] << " ";
    }
    cout<< endl;
}
// 10 10 10 10
// 10 10 10 10
```

## Size of a vector

```cpp
arr.size() // 5
arr2.size() // 2
```

## Sort a vector
```cpp
// in ascending order
sort(vect.begin(), vect.end());

// in descending order
sort(vect.begin(), vect.end(), greater<int>());
```

## Convert an Array to Vector
```cpp
int arr[] = {2,46,15,63,5,96};
int size = sizeof(arr) / sizeof(arr[0]);
std::vector<int> vect(arr,arr+n);
```

## Remove duplicates from a vector
```cpp
// sorting and removing duplicates
set<int> s;
for(int i: vect)
    s.insert(i);
vect.assign(s.begin(),s.end());

// remove duplicates without sorting
unordered_set<int> s;
for(int i: vect)
    s.insert(i);
vect.assign(s.begin(),s.end());
```
