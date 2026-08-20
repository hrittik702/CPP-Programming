# Bubble Sort — Quick Revision

## 1. Core Idea

Bubble Sort repeatedly compares **adjacent elements** and swaps them if they are in the wrong order.

### Ascending
```cpp
if (nums[j] > nums[j + 1])
```

### Descending

```cpp
if (nums[j] < nums[j + 1])
```

**Key idea:** After every pass, the largest remaining element moves to its correct position at the right.

---

## 2. Why `size - 1 - i`?

```cpp
for (int j = 0; j < size - 1 - i; j++)
```

Because after every pass, one element at the end is already sorted.

```text
Pass 1 → n - 1 comparisons
Pass 2 → n - 2
Pass 3 → n - 3
...
```

Total:

[
(n-1)+(n-2)+...+1
]

[
= \frac{n(n-1)}{2}
]

Therefore:

[
\boxed{O(n^2)}
]

---

## 3. Optimized Bubble Sort

Use a `swapped` flag:

```cpp
for (int i = 0; i < size; i++) {

    bool swapped = false;

    for (int j = 0; j < size - 1 - i; j++) {

        if (nums[j] > nums[j + 1]) {

            // swap
            swapped = true;
        }
    }

    if (!swapped)
        break;
}
```

### Meaning

```cpp
if (!swapped)
    break;
```

`!` = NOT

So:

```text
swapped = false
↓
!swapped = true
↓
break
```

Meaning:

> No swap happened → array is already sorted → stop.

**Important:** `swapped` must be reset to `false` at the beginning of every pass.

---

## 4. Time Complexity

### Optimized Bubble Sort

| Case    | Complexity | Why?                                       |
| ------- | ---------- | ------------------------------------------ |
| Best    | **O(n)**   | Already sorted → 1 pass → no swaps → break |
| Average | **O(n²)**  | Multiple passes/comparisons                |
| Worst   | **O(n²)**  | Reverse sorted → maximum comparisons/swaps |

### Unoptimized Bubble Sort

```text
Best    → O(n²)
Average → O(n²)
Worst   → O(n²)
```

The `swapped` optimization changes the **best case** from `O(n²)` to `O(n)`.

---

## 5. Space Complexity

Bubble Sort is **in-place**.

Only a temporary variable is needed for swapping:

```cpp
int temp = nums[j];
```

Therefore:

[
\boxed{Space = O(1)}
]

---

## 6. Stability

Bubble Sort is **stable** when using:

```cpp
nums[j] > nums[j + 1]
```

Equal elements are not swapped, so their relative order is preserved.

[
\boxed{Stable = Yes}
]

---

## 7. Important Properties

```text
Type       → Comparison-based
In-place   → Yes
Stable     → Yes
Best       → O(n)     [optimized]
Average    → O(n²)
Worst      → O(n²)
Space      → O(1)
```

---

## 🧠 Remember This

```text
Compare adjacent
       ↓
Swap if wrong
       ↓
Largest moves right
       ↓
Reduce range
       ↓
Repeat
```

### Complexity Derivation

```text
(n-1) + (n-2) + ... + 1
          ↓
     n(n-1)/2
          ↓
        O(n²)
```

### Optimization

```text
No swap in a pass
        ↓
Array already sorted
        ↓
       break
        ↓
Best Case = O(n)
```

---

## Revision Q

1. Why is Bubble Sort `O(n²)`?
2. Why is optimized best case `O(n)`?
3. Why do we use `size - 1 - i`?
4. What does `!swapped` mean?
5. Why is Bubble Sort `O(1)` space?
6. Why is Bubble Sort stable?

```
```
