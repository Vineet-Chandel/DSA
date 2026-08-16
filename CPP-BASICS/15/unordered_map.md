# `std::unordered_map` in C++

`std::unordered_map` is an associative container in the C++ Standard Template Library (STL) that stores key-value pairs. It provides average $O(1)$ time complexity for lookup, insertion, and deletion operations by utilizing a hash table internally.

---

## 1. Title and Introduction

### What is `unordered_map`?
`std::unordered_map` is the C++ equivalent of Java's `HashMap` or Python's `dict`. It is used to associate a unique key with a value, allowing fast access to the value when the key is known.

### Why is it called "unordered"?
Unlike `std::map`, which keeps its elements sorted by key using a self-balancing binary search tree (typically a Red-Black Tree), `std::unordered_map` does not guarantee any specific order of elements during iteration. The order can change over time as elements are added or buckets are rehashed.

### Key-Value Pair Concept
In an `unordered_map`, each element consists of:
*   **Key**: Used to uniquely identify the element. No two elements can have the same key.
*   **Value**: The data associated with the key. Multiple keys can map to the exact same value.

Conceptual representation:
```text
Key (Unique)   →   Value (Can duplicate)
    1          →   100
    2          →   200
    3          →   300
```

### C++ STL Header
To use `std::unordered_map`, include the `<unordered_map>` header:
```cpp
#include <unordered_map>
using namespace std;
```

---

## 2. Basic Syntax

The template definition of `std::unordered_map` is:
```cpp
unordered_map<KeyType, ValueType> mapName;
```

### Template Parameters:
*   `KeyType`: The data type of the keys (e.g., `int`, `string`, `char`).
*   `ValueType`: The data type of the values associated with the keys.

### Examples:
```cpp
unordered_map<int, int> mp;         // Maps integers to integers (e.g., frequency map)
unordered_map<int, string> mp;      // Maps integer IDs to string names
unordered_map<string, int> mp;      // Maps string words to their frequencies
unordered_map<char, int> mp;        // Maps characters to frequencies (e.g., string analysis)
unordered_map<string, string> mp;   // Maps string keys to string values (e.g., dictionary)
```

---

## 3. Initialization

There are several ways to initialize an `unordered_map` depending on the use case.

### A. Empty Initialization
Creates an empty map with zero elements.
```cpp
unordered_map<int, int> mp;
```

### B. Initialization with Values (Initializer List)
Initializes the map with predefined key-value pairs (requires C++11 or later).
```cpp
unordered_map<int, string> mp = {
    {1, "Vineet"},
    {2, "Rahul"},
    {3, "Ankit"}
};
```

### C. Constructor with Bucket Count
Initializes an empty map with a specified minimum number of buckets. This helps prevent early rehashing if you know the approximate size beforehand.
```cpp
unordered_map<int, int> mp(16); // Starts with at least 16 buckets
```

### D. Constructor with Custom Hash and Equality
For advanced use cases (e.g., custom structures as keys), you can pass a custom hash function and key equality function.
```cpp
unordered_map<KeyType, ValueType, HashFunction, KeyEqual> mp;
```
*   **Bucket Count**: The number of slots in the hash table. More buckets mean fewer collisions.
*   **Hash Function**: Takes a key and returns a numeric hash value.
*   **Key Equality**: A function (functor) that returns `true` if two keys are equal, resolving collisions.

---

## 4. Key-Value Pair Concept

In C++, an `unordered_map` stores its elements as objects of `std::pair<const KeyType, ValueType>`.

You can set or update values using the subscript operator `[]`:
```cpp
mp[key] = value;
```

### Practical Example:
```cpp
unordered_map<int, int> mp;
mp[101] = 95; // Associates key 101 with value 95
```

This creates the mapping:
```text
Key (const int)   →   Value (int)
      101         →       95
```

### Crucial Rules:
*   **Keys are Unique**: If you assign a value to an existing key (e.g., `mp[101] = 80;`), the previous value is overwritten.
*   **Values Can Duplicate**: Multiple unique keys can have identical values (e.g., `mp[101] = 95; mp[102] = 95;`).

---

## 5. Adding Elements

There are three main ways to add elements to an `unordered_map`:

### A. Subscript Operator `operator[]`
```cpp
mp[1] = 100;
```
*   **Behavior**: If key `1` does not exist, it inserts `{1, 100}`. If key `1` exists, it updates its value to `100`.

### B. The `insert()` Method
```cpp
mp.insert({2, 200});
```
*   **Behavior**: Inserts `{2, 200}` ONLY if the key `2` does not already exist. If key `2` already exists, **no insertion or update occurs**.

### C. The `emplace()` Method
```cpp
mp.emplace(3, 300);
```
*   **Behavior**: Similar to `insert()`, it does not overwrite existing keys. However, it constructs the pair *in-place* within the map's memory, avoiding temporary object creation.

### Difference between Updating vs. Inserting:
```cpp
unordered_map<int, int> mp;
mp[1] = 100;

// Updates the value of key 1 to 500
mp[1] = 500; 

// Attempts to insert key 1 with value 800. Since key 1 exists, this does nothing!
mp.insert({1, 800}); 

cout << mp[1]; // Outputs 500
```

<h3>Inspecting the Result of <code>insert()</code></h3>
The `insert()` method returns a `std::pair` where:
1.  `first` is an iterator pointing to the element (either the newly inserted one or the existing one).
2.  `second` is a boolean (`true` if insertion succeeded, `false` if the key already existed).

```cpp
auto result = mp.insert({1, 500});
if (result.second == false) {
    cout << "Insertion failed! Key 1 already exists with value " << result.first->second << endl;
}
```

---

## 6. Accessing Elements

C++ provides two ways to access the value associated with a key:

### A. Subscript Operator `operator[]`
```cpp
cout << mp[1];
```

> [!WARNING]
> **The Side Effect of `operator[]`:** If the key does not exist in the map, `operator[]` will **automatically insert** the key with a default-constructed value (e.g., `0` for `int`, `""` for `string`) and return it.

#### Example Demonstration:
```cpp
unordered_map<int, int> mp;
// Key 10 is missing. This prints 0 (default value for int)
cout << mp[10] << endl; 

// Because of the access above, key 10 has been inserted!
cout << mp.size() << endl; // Prints 1
```
This side effect can lead to logical bugs and unnecessary memory consumption in DSA problems.

### B. The `.at()` Method
```cpp
cout << mp.at(10);
```
*   **Behavior**: Returns a reference to the value at the specified key.
*   **Safety**: If the key does not exist, it throws a `std::out_of_range` exception instead of modifying the map.

```cpp
try {
    cout << mp.at(99);
} catch (const out_of_range& e) {
    cout << "Key not found!" << endl;
}
```

---

## 7. Searching for Keys

To check if a key exists without mutating the map, use one of the following safe methods:

### A. The `find()` Method (Recommended for C++11/C++14/C++17)
`find()` returns an iterator to the key-value pair if found, or `mp.end()` if not found.
```cpp
auto it = mp.find(key);
if (it != mp.end()) {
    cout << "Found: " << it->first << " -> " << it->second << endl;
} else {
    cout << "Key not found" << endl;
}
```
Visualizing Iterators:
```text
find(key) ──> iterator ──> it->first  (Key)
                       ──> it->second (Value)
```

### B. The `count()` Method
Returns the number of times a key appears. Since keys are unique in `unordered_map`, it returns either `1` (exists) or `0` (does not exist).
```cpp
if (mp.count(key) == 1) {
    // Key exists
}
```

### C. The `contains()` Method (C++20 onwards)
A clean, readable boolean check.
```cpp
if (mp.contains(key)) {
    // Key exists
}
```
> [!IMPORTANT]
> `contains()` was introduced in **C++20**. If your platform or online judge uses an older compiler standard (e.g., C++17 or C++14), use `find()` or `count()`.

---

## 8. Removing Elements

Elements can be removed using `erase()`.

### A. Erasing by Key
```cpp
mp.erase(key);
```
*   **Returns**: The number of elements erased (`1` if found and removed, `0` if not found).

### B. Erasing by Iterator
If you already have an iterator pointing to the element (e.g., from `find()`), you can erase it directly.
```cpp
auto it = mp.find(key);
if (it != mp.end()) {
    mp.erase(it); // Erases the element at the iterator
}
```

### Difference:
*   **Erasing by Key**: Requires computing the hash of the key to find and delete it.
*   **Erasing by Iterator**: Fast deletion if the iterator's position is already resolved, avoiding rehashing and lookup costs.

---

## 9. Size and State Operations

*   `size()`: Returns the number of key-value pairs stored in the map.
*   `empty()`: Returns `true` if the map contains no elements, `false` otherwise.
*   `clear()`: Removes all elements from the map, leaving its size at `0`.

```cpp
unordered_map<int, string> mp = {{1, "A"}};
cout << mp.size();  // Prints 1
cout << mp.empty(); // Prints 0 (false)
mp.clear();
cout << mp.size();  // Prints 0
```

---

## 10. Iterating Through `unordered_map`

Since `unordered_map` contains `pair` objects, each element has a `.first` (key) and `.second` (value).

### A. Range-Based Loop (C++11+)
Iterates over copy or reference of the elements.
```cpp
for (auto& pair : mp) {
    cout << pair.first << " -> " << pair.second << endl;
}
```

### B. Read-Only Iteration with `const auto&` (Best Practice)
Prevents copying the elements and prevents accidental modification of the values.
```cpp
for (const auto& pair : mp) {
    cout << pair.first << " -> " << pair.second << endl;
}
```

### C. Traditional Iterator Loop
```cpp
for (auto it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " -> " << it->second << endl;
}
```

### D. Structured Bindings (C++17+)
Provides the most readable syntax by unpackaging key and value directly.
```cpp
for (const auto& [key, value] : mp) {
    cout << key << " -> " << value << endl;
}
```

---

## 11. Important Properties

| Property | `unordered_map` |
| :--- | :--- |
| **Data Structure** | Hash Table (using Chaining for collision resolution) |
| **Stores** | Key-Value pairs (`std::pair<const Key, Value>`) |
| **Keys** | Unique (duplicates not allowed) |
| **Values** | Can be duplicated |
| **Ordering** | No guaranteed order (elements are ordered by hash bucket) |
| **Average Lookup** | $O(1)$ |
| **Average Insertion**| $O(1)$ |
| **Average Deletion** | $O(1)$ |
| **Worst-case Lookup**| $O(n)$ (when all keys collide into a single bucket) |
| **Header** | `<unordered_map>` |
| **Thread Safety** | Not inherently thread-safe (requires external synchronization) |

---

## 12. Time Complexity

The time complexity of common operations depends heavily on the quality of the hash function and the distribution of keys.

| Operation | Average Case | Worst Case |
| :--- | :--- | :--- |
| **Search (`find` / `count`)** | $O(1)$ | $O(n)$ |
| **Insertion (`insert` / `emplace` / `[]`)** | $O(1)$ | $O(n)$ |
| **Deletion (`erase`)** | $O(1)$ | $O(n)$ |

### Why is the Average O(1)?
The map computes a hash value for the key, which maps directly to a specific bucket index. In a well-distributed hash table with a low load factor, there is either zero or a very small number of elements in each bucket, allowing constant-time access.

### Why can it degrade to O(n)?
If multiple keys map to the same bucket index (collisions) or if the hash function is poor (e.g., causing all elements to hash to the same value), the map must search through a linked list or similar structure containing all $n$ colliding elements inside that bucket. This degrades performance to $O(n)$.

---

## 13. How Hashing Works

A hash table uses a hash function to map keys to integers, which are then mapped to indices of an array of buckets.

### The Pipeline:
```text
Key (e.g., "Apple")
  ↓
[ Hash Function ] (computes std::hash)
  ↓
Hash Value (e.g., 48291048201)
  ↓
[ Bucket Index Mapping ] (Hash Value % Bucket Count)
  ↓
Bucket Index (e.g., Index 4)
  ↓
[ Store / Search in Bucket 4 ]
```

*   **Conceptual Behavior**: The hash function takes a key of any type and digests it into a uniform size integer. This integer modulo the bucket count yields the index.
*   **Implementation Details**: The C++ standard defines `std::hash<Key>` templates for basic types (`int`, `string`, etc.). The exact hash algorithm is library-dependent (GCC uses different hash formulas than MSVC).

---

## 14. Buckets

An `unordered_map` is organized into buckets. A bucket is a slot in the internal hash table's array. Elements with the same hash value (after modulo) are grouped in the same bucket.

*   `bucket_count()`: Returns the total number of buckets currently allocated.
*   `bucket(key)`: Returns the bucket index where a specific key is stored.
*   `bucket_size(index)`: Returns the number of elements inside a specific bucket.

```cpp
unordered_map<string, int> mp = {{"Apple", 1}, {"Banana", 2}};

cout << "Total Buckets: " << mp.bucket_count() << endl;
cout << "Apple is in bucket: " << mp.bucket("Apple") << endl;
cout << "Size of that bucket: " << mp.bucket_size(mp.bucket("Apple")) << endl;
```

---

## 15. Hash Collisions

A hash collision occurs when two distinct keys produce the same bucket index.
```text
Key A ("Apple")  ──┐
                   ├──> Bucket Index 4 (Stores a linked list of elements: "Apple" -> "Grape")
Key B ("Grape")  ──┘
```

### Why they happen:
The set of possible keys is infinitely larger than the finite number of buckets in memory. By Pigeonhole Principle, collisions are guaranteed to occur eventually.

### Collision Resolution:
In standard C++ library implementations (like `libstdc++`), `unordered_map` resolves collisions using **Separate Chaining** (linked list or singly linked list for each bucket). When a collision occurs, the new element is appended to the list at that bucket.

---

## 16. Load Factor

The load factor is the ratio between the number of elements and the number of buckets:
$$\text{Load Factor} = \frac{\text{Number of Elements (size)}}{\text{Number of Buckets (bucket\_count)}}$$

*   `load_factor()`: Returns the current load factor.
*   `max_load_factor()`: Returns or sets the maximum load factor threshold (default is usually `1.0`).

```cpp
cout << "Current Load Factor: " << mp.load_factor() << endl;
cout << "Max Load Factor Limit: " << mp.max_load_factor() << endl;
```

When `load_factor()` exceeds `max_load_factor()`, the container automatically increases the bucket count and reorganizes the elements.

---

## 17. Rehashing

Rehashing is the process of allocating a larger bucket array and moving all existing elements to their new buckets based on their newly calculated bucket indices.

*   **Why it happens**: To keep the load factor low, ensuring operations remain close to $O(1)$.
*   **Cost**: Rehashing is an $O(n)$ operation because every single element's bucket index must be recomputed and moved.

### Optimizing with `reserve()` and `rehash()`
If you know you will store $N$ elements, you can prevent expensive on-the-fly rehashing:

*   `rehash(n)`: Sets the bucket count to at least `n`, causing an immediate rehash.
*   `reserve(n)`: Sets the bucket count to the most appropriate size to contain `n` elements without needing a rehash.

```cpp
unordered_map<int, int> mp;
mp.reserve(1000); // Pre-allocates buckets for 1000 elements. Highly recommended for DSA!
```

*   `reserve(n)` is conceptually equivalent to `rehash(ceil(n / max_load_factor()))`.

---

## 18. Duplicate Keys

An `unordered_map` cannot store duplicate keys.

### Subscript Operator:
```cpp
unordered_map<int, string> mp;
mp[1] = "Apple";
mp[1] = "Mango"; // Overwrites "Apple"
// Map now contains: {1, "Mango"}
```

### Insert Method:
```cpp
mp.insert({1, "Apple"});
mp.insert({1, "Mango"}); // Fails silently! Key 1 already exists.
// Map remains: {1, "Apple"}
```

---

## 19. `insert()` Return Value

`insert()` returns a `std::pair` containing an iterator and a boolean.
```cpp
unordered_map<int, string> mp;
auto result = mp.insert({1, "Apple"});

// result.first  -> iterator pointing to {1, "Apple"}
// result.second -> true (since insertion succeeded)

auto result2 = mp.insert({1, "Mango"});
// result2.first  -> iterator pointing to the existing {1, "Apple"}
// result2.second -> false (insertion failed!)
```

---

## 20. `emplace()` vs `insert()`

*   `insert()` takes a `value_type` (which is `std::pair<const Key, Value>`). If you pass a temporary object like `{1, "Apple"}`, it calls the pair's constructor and then copies or moves it into the container.
*   `emplace()` takes arguments to construct the `pair` directly inside the hash table's memory (`mp.emplace(1, "Apple")`).

```cpp
mp.insert(make_pair(1, "Apple")); // Creates temporary pair, copies it
mp.emplace(1, "Apple");           // Constructs pair directly in place
```

> [!NOTE]
> Modern compilers optimize `insert()` heavily, so the speed difference is often negligible. However, `emplace()` is cleaner and avoids explicit pair creations.

---

## 21. `operator[]` vs `at()` vs `find()`

| Method | Missing Key Behavior | Primary Use Case | Modifies Map? |
| :--- | :--- | :--- | :--- |
| `[]` | Inserts key with default value | Quick inserting, updating, or reading when missing values are safe to initialize | Yes (on missing key) |
| `at()` | Throws `std::out_of_range` exception | Safe access when you are absolutely certain the key must exist | No |
| `find()`| Returns iterator `end()` | Safely checking if a key exists and retrieving its value | No |

---

## 22. Frequency Counting

This is one of the most common applications of `unordered_map` in DSA.

```cpp
vector<int> arr = {1, 2, 2, 3, 1, 2};
unordered_map<int, int> freq;

for (int num : arr) {
    freq[num]++;
}
```

### How it works step-by-step:
1.  **`freq[1]++`**: Key `1` is missing. `operator[]` inserts `{1, 0}` (default value of `int` is `0`). Then `++` increments the value to `1`.
2.  **`freq[2]++`**: Key `2` is missing. Inserts `{2, 0}`, increments to `1`.
3.  **`freq[2]++`**: Key `2` exists. Directly increments value from `1` to `2`.
4.  And so on...

Resulting map state:
```text
Key  →  Value
 1   →    2
 2   →    3
 3   →    1
```

---

## 23. `getOrDefault` Equivalent in C++

In Java, you can write `map.getOrDefault(key, defaultValue)`. In C++, you can achieve this behavior in a few ways:

### Option A: Ternary Operator with `count()`
```cpp
int value = mp.count(key) ? mp[key] : defaultValue;
```
*   *Downside*: Performs two lookups (`count` and then `[]`).

### Option B: Using `find()` (Single Lookup - Best Practice)
```cpp
auto it = mp.find(key);
int value = (it != mp.end()) ? it->second : defaultValue;
```
*   *Advantage*: Performs only one lookup, making it twice as fast for large maps.

---

## 24. Common DSA Patterns

### Pattern 1 — Frequency Map
Used to count occurrences of numbers.
```cpp
unordered_map<int, int> freq;
for (int x : nums) freq[x]++;
```

### Pattern 2 — Character Frequency
Used to count characters in a string.
```cpp
unordered_map<char, int> charFreq;
for (char c : str) charFreq[c]++;
```

### Pattern 3 — Seen/Visited Tracking
Used to keep track of elements we have processed.
```cpp
unordered_map<int, bool> visited;
// Note: If you only need to track existence, std::unordered_set<int> is memory-optimized and preferred!
```

### Pattern 4 — Two Sum
Given an array of integers and a target, return indices of the two numbers that add up to target.
```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Stores value -> index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}
```

### Pattern 5 — First Duplicate
Find the first repeating element in an array.
```cpp
int firstDuplicate(vector<int>& nums) {
    unordered_map<int, int> seen;
    for (int x : nums) {
        if (seen.count(x)) return x;
        seen[x] = 1;
    }
    return -1;
}
```

### Pattern 6 — Grouping (Anagrams example)
Group items sharing the same property.
```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    for (string s : strs) {
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        groups[sorted_s].push_back(s); // Group anagrams together
    }
    vector<vector<string>> result;
    for (auto& pair : groups) {
        result.push_back(pair.second);
    }
    return result;
}
```

---

## 25. `unordered_map` vs `map`

| Feature | `std::unordered_map` | `std::map` |
| :--- | :--- | :--- |
| **Internal Structure** | Hash Table | Balanced BST (Red-Black Tree) |
| **Ordering** | Unordered | Sorted by Key |
| **Average Lookup** | $O(1)$ | $O(\log n)$ |
| **Worst-case Lookup** | $O(n)$ | $O(\log n)$ |
| **Header** | `<unordered_map>` | `<map>` |
| **Key Requirements** | Hash function & Equality operator (`==`) | Less-than operator (`<`) |

### When to choose which?
*   Use **`unordered_map`** when lookup speed is critical and the order of elements does not matter (default choice for DSA frequency counting).
*   Use **`map`** when you need sorted traversal, ranges queries (like finding all keys between $X$ and $Y$), or when worst-case $O(n)$ lookup is unacceptable.

---

## 26. `unordered_map` vs `unordered_set`

*   `std::unordered_map<K, V>` stores Key-Value pairs. You search for a **Key** to retrieve a **Value**.
*   `std::unordered_set<K>` stores only individual unique elements (acting like keys with no values).

```cpp
unordered_map<int, string> idToName; // {101 -> "Vineet"}
unordered_set<int> uniqueIds;        // {101, 102, 103}
```
*   Use `unordered_set` when you only need to check if an element is present (e.g., visited set in BFS/DFS). Use `unordered_map` when you need to associate data with that element.

---

## 27. Custom Hash Functions

For basic types, STL provides `std::hash`. For custom types or competitive programming, you might want a custom hash.

```cpp
struct CustomHash {
    size_t operator()(int x) const {
        // A simple hash function (though standard std::hash<int> is fine, 
        // competitive programmers sometimes use custom hashes to avoid anti-hash tests)
        return x ^ 0x9e3779b9;
    }
};

// Declaring map with custom hash:
unordered_map<int, string, CustomHash> mp;
```

---

## 28. Hashing Custom Objects

To use a custom `struct` or `class` as a key, you must provide:
1.  A hash function specialization.
2.  An equality operator (`==`).

```cpp
struct Point {
    int x, y;
    
    // Equality operator
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// Custom Hash Struct
struct PointHash {
    size_t operator()(const Point& p) const {
        return hash<int>{}(p.x) ^ (hash<int>{}(p.y) << 1);
    }
};

// Usage
unordered_map<Point, string, PointHash> pointMap;
```

---

## 29. Common Mistakes

### 1. Assuming Insertion Order is Maintained
*   *Mistake*: Thinking elements will be printed in the order they were inserted.
*   *Truth*: `unordered_map` reorganizes keys based on their hashes. Order is unpredictable.

### 2. Using `mp[key]` to Check for Key Existence
*   *Mistake*: Writing `if (mp[key] != 0)` to check if a key exists.
*   *Truth*: This will insert the key if it was missing, bloating map memory and modifying its size. Use `find()`, `count()`, or `contains()`.

### 3. Assuming Lookup is Always O(1)
*   *Mistake*: Designing algorithms assuming $O(1)$ lookup holds true under malicious inputs.
*   *Truth*: On platforms like Codeforces, users can construct anti-hash tests that force collisions, slowing your code to $O(n)$ and causing Time Limit Exceeded (TLE). Use `std::map` or a custom random-seeded hash if this is a concern.

### 4. Using `unordered_map` when Sorted Keys are Needed
*   *Mistake*: Trying to find the smallest key or sorting the map keys directly.
*   *Truth*: `unordered_map` cannot be sorted. Use `std::map` instead.

### 5. Forgetting that Keys are Unique
*   *Mistake*: Expecting multiple identical keys to coexist. Use `std::unordered_multimap` if duplicate keys are needed.

### 6. Confusing `map` and `unordered_map`
*   *Mistake*: Choosing `map` for every hashing problem out of habit.
*   *Truth*: `map` has $O(\log n)$ overhead which can make it significantly slower in loops.

---

## 30. Practical Complete Example

Here is a complete, compilation-ready C++ program showing basic operations.

```cpp
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1. Declare and initialize
    unordered_map<string, int> marks;

    // 2. Insert values
    marks["Vineet"] = 95;
    marks["Rahul"] = 87;
    marks["Ankit"] = 91;

    // 3. Update a value
    marks["Rahul"] = 90;

    // 4. Safe access check
    string searchKey = "Ankit";
    if (marks.count(searchKey)) {
        cout << searchKey << "'s marks: " << marks[searchKey] << endl;
    }

    // 5. Iterate using C++17 Structured Bindings
    cout << "\n--- Student Records ---" << endl;
    for (const auto& [name, score] : marks) {
        cout << name << " -> " << score << endl;
    }

    return 0;
}
```

### Line-by-Line Explanation:
*   `#include <unordered_map>`: Imports the necessary STL container.
*   `unordered_map<string, int> marks;`: Declares a map mapping student names (`string`) to scores (`int`).
*   `marks["Vineet"] = 95;`: Inserts the key "Vineet" with value 95.
*   `marks["Rahul"] = 90;`: Since "Rahul" exists, updates his score from 87 to 90.
*   `marks.count(searchKey)`: Checks if "Ankit" exists in the map (returns `1` if present, `0` otherwise).
*   `for (const auto& [name, score] : marks)`: Iterates over the map unpacking key and value into `name` and `score` respectively without copying them.

---

## 31. DSA-Oriented Example

This program counts frequencies of elements in an array.

```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 2};

    // Initialize frequency map
    unordered_map<int, int> freq;

    // Perform frequency counting
    for (int num : arr) {
        freq[num]++;
    }

    // Print frequencies
    cout << "Number frequencies:" << endl;
    for (const auto& [num, count] : freq) {
        cout << num << " occurs " << count << " times" << endl;
    }

    return 0;
}
```

### Code Execution:
*   The array contains: `1, 2, 2, 3, 1, 2`.
*   During the loop, `freq[num]++` increments the frequency counter.
*   At the end, structured bindings unpack each number and its count for printing. Output shows values (e.g. `2 occurs 3 times`) in arbitrary order.

---

## 32. Performance Considerations

To ensure high-performance in real-world systems and competitive coding:
*   **Prevent Rehashing**: If the database or array size is known, use `mp.reserve(N)` to avoid allocating buckets multiple times.
*   **Address Collision Degradation**: Avoid complex objects with simple hash functions. Use custom hashes with random seeds to avoid worst-case $O(n)$ lookup on platforms like Codeforces.
*   **Memory Footprint**: `unordered_map` consumes more memory than `std::map` due to bucket arrays and node pointer overhead. Choose `std::map` if memory is strictly constrained and the dataset is large.

---

## 33. Quick Reference Cheat Sheet

```cpp
unordered_map<int, int> mp; // Declaration

mp[key] = value;          // Insert/Update
mp.insert({key, value});  // Insert only (does not update)
mp.emplace(key, value);   // Insert in-place

mp.find(key);             // Returns iterator, mp.end() if missing
mp.count(key);            // Returns 1 if key exists, 0 otherwise
mp.contains(key);         // Returns true/false (C++20+)

mp.erase(key);            // Erase key
mp.size();                // Number of elements
mp.empty();               // Check if empty
mp.clear();               // Remove all elements

mp.bucket_count();        // Get current number of buckets
mp.load_factor();         // Current load factor (size / bucket_count)
mp.max_load_factor();     // Get max load factor limit
mp.reserve(n);            // Pre-allocate for n elements
mp.rehash(n);             // Force at least n buckets
```

### Decision Guide
```text
Need Key → Value association?
        ↓ Yes
  Do keys need to be sorted?
        ├─> Yes: std::map
        └─> No:  std::unordered_map

Need only unique element presence (existence check)?
        ↓ Yes
  Do elements need to be sorted?
        ├─> Yes: std::set
        └─> No:  std::unordered_set
```

---

## 34. Interview Questions & Answers

### 1. What is `unordered_map`?
It is a C++ STL associative container storing key-value pairs with unique keys. It is built on a hash table.

### 2. Why is lookup O(1) on average?
Because it computes a hash of the key, maps it directly to a bucket index in constant time, and accesses the element instantly.

### 3. Why can lookup become O(n)?
If all keys hash to the same bucket index (collision storm), the map behaves like a linked list, forcing sequential traversal of $n$ elements.

### 4. What is a hash collision?
When two different keys produce the same bucket index after hashing and modulo arithmetic.

### 5. What is a bucket?
An internal slot (typically a pointer to a linked list of elements) in the hash table array.

### 6. What is load factor?
The ratio of elements to total buckets (`size / bucket_count`). It indicates how full the hash table is.

### 7. What causes rehashing?
When the load factor exceeds the maximum threshold, the map allocates a larger bucket array and transfers elements.

### 8. Difference between `map` and `unordered_map`?
`map` is ordered, backed by a Red-Black tree, with $O(\log n)$ operations. `unordered_map` is unordered, backed by a hash table, with $O(1)$ average operations.

### 9. Difference between `unordered_map` and `unordered_set`?
`unordered_map` stores key-value pairs. `unordered_set` stores only keys (values themselves are the keys).

### 10. Difference between `[]` and `.at()`?
`[]` inserts a key with a default value if missing. `.at()` throws an exception if the key is missing.

### 11. What happens when `operator[]` accesses a missing key?
It creates a new element with that key and a default-constructed value.

### 12. Why are duplicate keys not allowed?
Because keys must map uniquely to a single value to serve as distinct identifiers.

### 13. Can `unordered_map` store duplicate values?
Yes, multiple unique keys can map to identical values.

### 14. What does `find()` return?
It returns an iterator pointing to the key-value pair if found, or `end()` iterator if not found.

### 15. When should you use `reserve()`?
When you know the approximate number of elements beforehand, avoiding multiple rehashing cycles.

---

## Final Mental Model

```text
unordered_map
     ↓
Hash Function
     ↓
Bucket Array
     ↓
Key → Value
     ↓
Average O(1) Lookup
```

---

## What to Remember for DSA

1. `unordered_map` stores unique key-value pairs.
2. Keys are unique, but values can be duplicated.
3. Average lookup/insertion/deletion is $O(1)$. Worst case is $O(n)$.
4. It does not maintain sorted order of keys.
5. `operator[]` has the side effect of inserting missing keys.
6. `find()` is preferred for checking existence safely.
7. Extremely useful for frequency counting (`freq[num]++`).
8. Use `map` when sorted keys or range queries are required.
9. Use `unordered_set` when you only need to track existence.
10. Understand hashing, buckets, collisions, load factor, and rehashing.
