## Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm.
It builds the final sorted array one element at a time by taking each new element and inserting it into its correct position among the already sorted elements.

---

## How It Works (Logic)

1. Assume the first element is already sorted.
2. Move to the next element (called the **key**).
3. Compare the key with elements to its left.
4. Shift all larger elements one position to the right.
5. Insert the key into the empty spot created.
6. Repeat this process for every element until the array is fully sorted.

---

## Example Idea

If the list is:

`[7, 3, 5, 2]`

- Start with `7` as sorted.
- Take `3`, insert before `7` → `[3, 7, 5, 2]`
- Take `5`, insert between `3` and `7` → `[3, 5, 7, 2]`
- Take `2`, insert at start → `[2, 3, 5, 7]`

So each pass inserts one element into its correct position.

---

## Time Complexity

- **Best Case:** `O(n)` (already sorted)
- **Average Case:** `O(n^2)`
- **Worst Case:** `O(n^2)` (reverse sorted)

---

## Space Complexity

- `O(1)` extra space (in-place sorting)

---

## Characteristics

- Stable sort (keeps equal elements in original order)
- In-place algorithm
- Easy to understand and implement
- Efficient for small or nearly sorted datasets

---

## When to Use Insertion Sort

- When the dataset is small
- When the data is already partially sorted
- When simplicity matters more than high performance on large data

