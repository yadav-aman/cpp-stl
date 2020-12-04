# Vectors

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