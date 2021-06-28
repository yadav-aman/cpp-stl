# C++ STL

---

# Functions

- ## __gcd(a,b)
- ## memset() 
	> Used to initialize an array to either **0 or -1**. Works on any dimentional array.
    ```cpp
    int arr[5];
	memset(arr, 0, sizeof(arr)); // {0,0,0,0,0}
	memset(arr, -1, sizeof(arr)); // {-1,-1,-1,-1,-1}

    char str[] = "cpp";
    memset(str, 'd', sizeof(str)); // ddd

    int arr2[3][3];
    memset(arr2, -1, sizeof(arr2));
    // -1 -1 -1
    // -1 -1 -1
    // -1 -1 -1
    ```
---

## Complexities
| Container                     | Insertion                                                      | Access            | Delete                    | Search                          | Persistent Iterator |
|-------------------------------|----------------------------------------------------------------|-------------------|---------------------------|---------------------------------|---------------------|
| vector / string               | Back-> O(1) or O(n) <br> Other-> O(n)                          | O(1)              | Back-> O(1), Other-> O(n) | Sorted-> O(log n), Other-> O(n) | No                  |
| list / forward_list           | Back/Front-> O(1) <br> With Iterator-> O(1) <br> Index-> O(n)  | Same as Insertion | Same as Insertion         | O(n)                            | Yes                 |
| set / map                     | O(log n)                                                       | -                 | O(log n)                  | O(log n)                        | Yes                 |
| unordered_set / unordered_map | O(1) or O(n)                                                   | O(1) or O(n)      | O(1) or O(n)              | O(1) or O(n)                    | Pointers only       |
| priority_queue                | O(log n)                                                       | O(1)              | O(log n)                  | -                               | -                   |
| deque                         | Back/Front-> O(1) <br> Other-> O(n)                            | O(1)              | Same as Insertion         | Sorted-> O(log n), Other-> O(n) | Pointers only       |

