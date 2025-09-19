# My C++ || Data Structures & Algorithms Learning Journey

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)

This repository documents my journey of learning C++ and fundamental Data Structures & Algorithms. It serves as a personal log of my progress, containing solutions to various problems and implementations of core concepts.

---

## 📚 Table of Contents
- [Core Concepts Covered](#-core-concepts-covered)
- [Detailed Module Breakdown](#-detailed-module-breakdown)
- [How to Compile and Run](#-how-to-compile-and-run)
- [Future Goals](#-future-goals)

---

## 🎯 Core Concepts Covered

### C++ Language Fundamentals
-   Basics of C++ (`cout,cin,return,main function etc`)
-   Conditionals (`if-else`)
-   Loops (`for`, `while`,`do-while`,`pattern printing`)
-   Functions (`creating functions`,`call function`,`call by reference`,`call by value`)
-   Pointers (`still learning`)
-   Object-Oriented Programming (OOPs) - (`stopped from Sept 19, 2025`)

### Data Structures & Algorithms

1. Arrays 
		a. Initlization
    - **a. Declare with a fixed size:**
    
        ```cpp
        int array_name[10]; // Declares an array for 10 integers. Values are not initialized (garbage).
        ```
    
	- **b. Declare and initialize with a list:**    
        ```cpp
        int array_name[] = {1, 2, 3, 4, 5}; // Size is automatically inferred as 5.
        ```
    
    - **c. Initialize all elements to zero:**
        ```cpp
        int array_name[10] = {0}; // A common way to initialize all elements of an integer array to 0.
        ```
        
1. **Accessing Elements & Getting Size**
    - Elements are accessed using the index operator `[]`, which starts from `0`.
        
        ```cpp
        array_name[0] = 99; // Assigns 99 to the first element.
        int value = array_name[2]; // Accesses the third element.
        ```
        
    - You can get the number of elements using the `sizeof` operator.
        ```cpp
        int size = sizeof(array_name) / sizeof(array_name[0]);
        ```
        
		b. **Array Input**
    - A `for` loop is typically used to take input for each element one by one.
        ```cpp
        int my_array[5];
        int n = 5;
        for(int i=0; i<n; i++) {
            cin >> my_array[i];
        }
        ```
        

```

2. Vectors
```markdown
1. Vector initilization
   a. vector <int> vector_name 
   b. vector <int> vector_name(size of vector); //it can be treated as array, each = 0
	  vector <int> vectot_name(size of vector, 7) // each element = 7
2. vector operations like - push_back(),pull_back(), at(), 
3. vector input - 
	   int x;
	   for(int i=0; i<5; i++) vector_name.push_back((cin>>x,x));
     
```

3. 

---

## 📁 Detailed Module Breakdown

This section mirrors the repository's structure. Each entry links to the relevant directory and highlights key programs.

### 1. C++ Language

<details>
<summary><strong>Conditionals</strong> (Click to expand)</summary>

-   `absolute_number.cpp`: Converts a negative number to its absolute value.
-   `odd_even.cpp`: Checks if a number is odd or even.
-   `profit_loss.cpp`: Calculates profit or loss based on cost and selling price.
</details>

<details>
<summary><strong>Loops</strong> (Click to expand)</summary>

-   `count_digits.cpp`: Counts the number of digits in an integer.
-   `hollow_number.cpp`: Prints a hollow number pattern.
-   `numerical_pattern.cpp`: Demonstrates various numerical pattern printing using nested loops.
-   `Assignments/`: Contains solutions to various loop-based practice problems.
</details>

<details>
<summary><strong>Functions</strong> (Click to expand)</summary>

-   `declaration_of_function.cpp`: Basic syntax for declaring and defining functions.
-   `pascal'sTriangle.cpp`: Implements Pascal's Triangle using functions.
-   `permutationAndCombination.cpp`: Calculates nCr and nPr.
</details>

<details>
<summary><strong>Pointers</strong> (Click to expand)</summary>

-   `pointerInitialize.cpp`: Covers the basics of pointer declaration and initialization.
-   `sumPointer.cpp`: Uses pointers to find the sum of two numbers.
</details>

---

### 2. Data Structures & Algorithm

<details>
<summary><strong>Arrays</strong> (Click to expand)</summary>

-   `linearSearch.cpp`: Implements a basic linear search algorithm.
-   `maxElement.cpp`: Finds the maximum element in an array.
-   `secondMaxElement.cpp`: Finds the second largest element in an array.
-   `passingArrayToFunctions.cpp`: Shows how to pass arrays as arguments to functions.
-   `pointerAndArray.cpp`: Explores the relationship between pointers and arrays.
-   `vector.cpp`: Introduction to using `std::vector` as a dynamic array.
</details>

---

## 🚀 How to Compile and Run

All programs are written in C++. You can compile them using a C++ compiler like g++.

```bash
# Navigate to the file's directory
cd "C++ Language/Loops"

# Compile the program
g++ count_digits.cpp -o count_digits.out

# Run the executable
./count_digits.out
