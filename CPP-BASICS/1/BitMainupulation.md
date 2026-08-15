
## Bit Manipulation 
- Bit manipulation looks intimidating at first. Shifting bits, flipping 1s and 0s, and reading expressions like n & (n - 1) takes practice to parse.

- Bit manipulation is a common topic in coding interviews. A handful of techniques can solve a wide range of problems, often in O(1) space and with very fast performance.

- Computers store and process data as bits. Operating on bits directly often leads to shorter, faster solutions than working at the decimal level.


Every integer in a computer is stored as a sequence of bits. 

For example, 
5 in binary is 101. 
In an actual int (typically 32 bits in Java/C#), it's stored as 00000000 00000000 00000000 00000101 with leading zeros. We'll often show just the relevant low bits for clarity.

## What are the sets of integers can be stored in the x no. of bits?

if x is the no. of bits, so integers can be saved are [0, 2^x - 1] of the decimal number system.

for ex. for the 4 bits the maximum no. can save is 15 (decimal) or 1111 (binary) 

## Bitwise Operations Truth Table

Here is the truth table for the bitwise AND (`&`), OR (`|`), XOR (`^`), and NOT (`~`) operations on binary inputs (0 and 1):

| A | B | AND (`A & B`) | OR (`A \| B`) | XOR (`A ^ B`) | NOT A (`~A`)* | NOT B (`~B`)* |
| 0 | 0 | 0             | 0             | 0             | 1             | 1             |
| 0 | 1 | 0             | 1             | 1             | 1             | 0             |
| 1 | 0 | 0             | 1             | 1             | 0             | 1             |
| 1 | 1 | 1             | 1             | 0             | 0             | 0             |


*\*Note: In C++, the bitwise NOT (`~`) operator flips all bits in the data type. The values above assume 1-bit logic inversion. In actual C++ programs with multi-bit integers (e.g. 32-bit `int`), `~0` results in `-1` (all bits set to 1 in 2's complement).*

## Bitwise Shift Operators

Shift operators move the bits of a number to the left or right, which is equivalent to fast multiplication or division by powers of 2.

### 1. Left Shift Operator (`<<`)

The left shift operator moves the bit pattern of the left operand to the left by the number of positions specified by the right operand.

*   **Syntax:** `a << b`
*   **Behavior:** The bits of `a` are shifted left by `b` positions. The vacant positions on the right side are filled with `0`s.
*   **Mathematical Equivalence:** Shifting left by `b` is equivalent to multiplying `a` by $2^b$ (i.e., $a \times 2^b$), provided no bits are lost due to overflow.

#### Example: `5 << 1`
*   `5` in binary (8-bit representation): `00000101`
*   Shift left by `1` position:
    ```text
    00000101  << 1
    └───┼┼┼┼
      00001010  (Vacated rightmost position filled with 0)
    ```
*   Result: `00001010` in binary, which is `10` in decimal ($5 \times 2^1 = 10$).

---

### 2. Right Shift Operator (`>>`)

The right shift operator moves the bit pattern of the left operand to the right by the number of positions specified by the right operand.

*   **Syntax:** `a >> b`
*   **Behavior:** The bits of `a` are shifted right by `b` positions. The bits shifted off the right end are discarded.
*   **Mathematical Equivalence:** Shifting right by `b` is equivalent to integer division of `a` by $2^b$ (i.e., $\lfloor a / 2^b \rfloor$).

#### Logical vs. Arithmetic Right Shift
*   **Logical Right Shift:** Vacated positions on the left are always filled with `0`s. This is used for `unsigned` types in C++.
*   **Arithmetic Right Shift:** Vacated positions on the left are filled with the sign bit (the MSB - Most Significant Bit) to preserve the sign of negative numbers. This is used for signed types in C++.

#### Example: `5 >> 1` (Positive Signed/Unsigned)
*   `5` in binary: `00000101`
*   Shift right by `1` position:
    ```text
    00000101  >> 1
      └───┼┼┼
    00000010  (Discarded '1' at the right end; vacated left position filled with 0)
    ```
*   Result: `00000010` in binary, which is `2` in decimal ($\lfloor 5 / 2^1 \rfloor = 2$).

#### Example: `-4 >> 1` (Negative Signed)
*   `-4` in 8-bit two's complement binary: `11111100`
*   Shift right by `1` position (Arithmetic Shift):
    ```text
    11111100  >> 1
      └───┼┼┼
    11111110  (Leftmost position filled with sign bit '1')
    ```
*   Result: `11111110` in binary, which is `-2` in decimal.
