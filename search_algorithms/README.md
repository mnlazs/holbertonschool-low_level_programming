<div align="center">
  <img src="icon.png" align="right"/>
</div>
<br> <!-- Línea vacía --><br> <!-- Línea vacía --><br> <!-- Línea vacía --><br>

# README [![Awesome](https://cdn.jsdelivr.net/gh/sindresorhus/awesome@d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)

## Resources:books:
Read or watch:
* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
---

# Search Algorithms Project

Welcome to the Search Algorithms project! In this project, you will gain a deeper understanding of various search algorithms and their space complexities. By the end of this project, you'll be able to explain the concepts of search algorithms to others and choose the appropriate search algorithm based on specific needs.

## Learning Objectives

By completing this project, you will:

- Understand what a search algorithm is and its importance in computer science.
- Learn about linear search and how it works.
- Explore binary search and its advantages over linear search.
- Recognize the best search algorithm to use depending on different scenarios.
- Gain insights into space complexity and how it affects algorithm efficiency.

## General Requirements 📌

- Allowed editors: vi, vim, emacs
- All code will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear`
- All files must end with a newline character.
- A README.md file at the root of the project folder is mandatory.
- Your code should adhere to the Betty coding style. It will be checked using betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- Each file should contain no more than 5 functions.
- The only allowed standard library function is printf.
- Your header file should be named "search_algos.h" and should include the prototypes of all your functions using include guards.
- Do not forget to push your header file.
- You will also create files containing big O notations in the format specified below.

## Format for Big O Notations

In this project, you'll be asked to provide big O notations for different algorithms. Use the following format:

- O(1)
- O(n)
- O(n!)
- n * m -> O(nm)
- n square -> O(n^2)
- sqrt n -> O(sqrt(n))
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- ...

Remember, big O notations describe the upper bound of an algorithm's time complexity as the input size grows. Use these notations to analyze the efficiency of your algorithms.
 Sure, I'd be happy to answer those questions:

**Search Algorithm:** 🔬
A search algorithm is a method or procedure used to find a specific item or piece of information within a collection of data. It's a fundamental concept in computer science and plays a crucial role in various applications, including databases, information retrieval, and sorting. Search algorithms are designed to efficiently locate a target value or item within a given data structure, such as an array or a list.

There are different types of search algorithms, and they can be broadly categorized into two main categories: sequential search algorithms and binary search algorithms.

- **Sequential Search Algorithms:** These algorithms involve sequentially checking each element in a data structure until the desired value is found or the entire collection has been searched. Linear search is a common example of a sequential search algorithm.

- **Binary Search Algorithms:** These algorithms are more efficient and are applicable only to sorted data structures. Binary search involves repeatedly dividing the search interval in half and narrowing down the possible locations of the desired value.
 
**Space Complexity (1):** 🔍
Space complexity refers to the amount of memory or storage space required by an algorithm as a function of the input size. It helps analyze how the memory usage of an algorithm grows as the input size increases. Space complexity is often expressed using big O notation, just like time complexity.

A space complexity of \(O(1)\) (pronounced "order one" or "constant space complexity") means that the amount of memory used by the algorithm remains constant regardless of the input size. In other words, the algorithm uses a fixed amount of memory, typically for a few variables or constants, irrespective of how large the input data is.

An algorithm with \(O(1)\) space complexity is considered highly efficient in terms of memory usage because the memory required does not increase as the input size grows. This is particularly useful when working with limited memory resources or in situations where memory optimization is crucial.

For example, algorithms that operate directly on input elements without requiring additional data structures or allocations often achieve \(O(1)\) space complexity. However, achieving \(O(1)\) space complexity might involve trade-offs, such as sacrificing computational time or code readability. 😉
