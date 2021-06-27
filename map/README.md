# map

---

# unordered_map

<details>
<summary>output of unordered_map.cpp</summary>

```
3.14
3.14

0

Key not found

e 2.718
loge 1
log10 2.302
root3 1.732
NA 0
root2 1.414
PI 3.14

e  2.718
loge  1
log10  2.302
root3  1.732
NA  0
root2  1.414
PI  3.14
```
</details>

---

# multimap

---

# Differences

|  Container | map  | unordered_map   |
|-----------------|---------------------------------|--------------------------------------|
| Ordering        | increasing  order (by default)  | no ordering                          |
| Implementation  | Self balancing BST              | Hash Table                           |
| search time     | log(n)                          | O(1) -> Average , O(n) -> Worst Case |
| Insertion time  | log(n) + Rebalance              | Same as search                       |
| Deletion time   | log(n) + Rebalance              | Same as search                       |
