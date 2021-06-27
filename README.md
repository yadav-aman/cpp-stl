# C++ STL

## Complexities
| Container                     | Insertion                                                      | Access            | Delete                    | Search                          | Persistent Iterator |
|-------------------------------|----------------------------------------------------------------|-------------------|---------------------------|---------------------------------|---------------------|
| vector / string               | Back-> O(1) or O(n) <br> Other-> O(n)                          | O(1)              | Back-> O(1), Other-> O(n) | Sorted-> O(log n), Other-> O(n) | No                  |
| list / forward_list           | Back/Front-> O(1) <br> With Iterator-> O(1) <br> Index-> O(n)  | Same as Insertion | Same as Insertion         | O(n)                            | Yes                 |
| set / map                     | O(log n)                                                       | -                 | O(log n)                  | O(log n)                        | Yes                 |
| unordered_set / unordered_map | O(1) or O(n)                                                   | O(1) or O(n)      | O(1) or O(n)              | O(1) or O(n)                    | Pointers only       |
| priority_queue                | O(log n)                                                       | O(1)              | O(log n)                  | -                               | -                   |
| deque                         | Back/Front-> O(1) <br> Other-> O(n)                            | O(1)              | Same as Insertion         | Sorted-> O(log n), Other-> O(n) | Pointers only       |

