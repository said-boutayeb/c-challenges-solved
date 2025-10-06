# Level 1 - Core Concepts 🚀

Welcome to Level 1! This collection builds upon the fundamentals from Level 0 and introduces more complex string operations, basic algorithms, and standard library function implementations. These exercises are designed to strengthen your understanding of C programming and problem-solving skills.

## 📋 Overview

**Difficulty:** Intermediate  
**Total Exercises:** 17  
**Completion:** 17 🔄  
**Focus Areas:** String functions, algorithms, cipher implementations

## 📚 Exercise List

| # | Exercise | Description | Concepts | Status |
|---|----------|-------------|----------|--------|
| 1 | `first_word.c` | Extract and display first word from string | String parsing, whitespace handling | 🔄 |
| 2 | `fizzbuzz.c` | Classic FizzBuzz algorithm | Conditionals, modulo, loops | 🔄 |
| 3 | `ft_putstr.c` | Implement string output function | String iteration, write() | 🔄 |
| 4 | `ft_strcpy.c` | Implement string copy function | Pointers, string manipulation | 🔄 |
| 5 | `ft_strlen.c` | Implement string length function | Pointer arithmetic, iteration | 🔄 |
| 6 | `ft_swap.c` | Swap two integer values | Pointers, pass by reference | 🔄 |
| 7 | `md_1_repeat_alpha.c` | Repeat alphabet characters (Method 1) | Character repetition, ASCII | 🔄 |
| 8 | `md_2_repeat_alpha.c` | Repeat alphabet characters (Method 2) | Alternative approach, optimization | 🔄 |
| 9 | `md_3_repeat_alpha.c` | Repeat alphabet characters (Method 3) | Third implementation method | 🔄 |
| 10 | `md_1_rev_print.c` | Reverse print string (Method 1) | String reversal, iteration | 🔄 |
| 11 | `md_2_rev_print.c` | Reverse print string (Method 2) | Alternative reversal approach | 🔄 |
| 12 | `md_3_rev_print.c` | Reverse print string (Method 3) | Third reversal method | 🔄 |
| 13 | `md_1_rot_13.c` | ROT13 cipher implementation (Method 1) | Character rotation, cipher | 🔄 |
| 14 | `md_2_rot_13.c` | ROT13 cipher implementation (Method 2) | Alternative ROT13 approach | 🔄 |
| 15 | `md_1_rotone.c` | ROT1 cipher - rotate by 1 (Method 1) | Character shifting | 🔄 |
| 16 | `md_2_rotone.c` | ROT1 cipher - rotate by 1 (Method 2) | Alternative ROT1 method | 🔄 |
| 17 | `md_3_rotone.c` | ROT1 cipher - rotate by 1 (Method 3) | Third ROT1 implementation | 🔄 |

## 🎯 Learning Objectives

By completing Level 1, you will master:

### Core Concepts
- **String Manipulation**: Advanced string parsing and processing
- **Function Implementation**: Recreating standard library functions
- **Pointers**: Understanding and using pointers effectively
- **Cipher Algorithms**: ROT13 and ROT1 encryption techniques
- **Memory Operations**: Working with pointers and memory addresses
- **Multiple Solutions**: Different approaches to solve the same problem

### Programming Skills
- Implementing custom string functions
- Working with pointer-based parameters
- Parsing and tokenizing strings
- Writing multiple solutions to the same problem
- Understanding Caesar cipher variations
- Optimizing code for efficiency
- Understanding pass-by-reference vs pass-by-value

## 🛠️ Compilation & Testing

### Standard Compilation
```bash
gcc -Wall -Wextra -Werror exercise_name.c -o exercise_name
```

### Compilation Examples

#### Basic Function Exercises
```bash
# Compile any exercise
gcc -Wall -Wextra -Werror exercise_name.c -o exercise_name

# For exercises requiring a main function (ft_strlen, ft_swap, etc.)
# Create a test main.c file and compile together:
gcc -Wall -Wextra -Werror exercise_name.c test_main.c -o test
```

#### Command-Line Argument Exercises
```bash
# Exercises that take arguments (first_word, rot_13, rotone, etc.)
gcc -Wall -Wextra -Werror first_word.c -o first_word
./first_word "your test string here"
```

#### Standalone Program Exercises
```bash
# Exercises with their own main (fizzbuzz, rev_print, etc.)
gcc -Wall -Wextra -Werror fizzbuzz.c -o fizzbuzz
./fizzbuzz
```

### Testing Tips

**For function implementations** (ft_strlen, ft_strcpy, ft_putstr, ft_swap):
- Create your own `main.c` to test the function
- Test with different inputs: empty strings, long strings, NULL cases
- Compare results with standard library functions

**For command-line programs** (first_word, rot_13, rotone, repeat_alpha):
- Test with various argument combinations
- Try edge cases: empty arguments, special characters, numbers
- Test with no arguments to see error handling

**For algorithmic programs** (fizzbuzz, rev_print):
- Run and verify output matches expected behavior
- Check edge cases and boundary conditions

## 🔍 General Concepts

These exercises explore various programming concepts. Each implementation may vary based on the approach taken.

## 📊 Complexity Analysis

| Exercise | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| first_word | O(n) | O(1) |
| fizzbuzz | O(1) | O(1) |
| ft_putstr | O(n) | O(1) |
| ft_strcpy | O(n) | O(1) |
| ft_strlen | O(n) | O(1) |
| ft_swap | O(1) | O(1) |
| repeat_alpha | O(n*m) | O(1) |
| rev_print | O(n) | O(1) |
| rot_13 | O(n) | O(1) |
| rotone | O(n) | O(1) |

*where n = length of string, m = average repetition count*

## ✅ Best Practices Applied

- ✅ Efficient pointer usage
- ✅ No memory leaks
- ✅ Proper null-termination handling
- ✅ Edge case consideration (empty strings, NULL pointers)
- ✅ Clean, readable implementations
- ✅ Multiple solution approaches demonstrated (md_1, md_2, md_3)
- ✅ Compilation with strict flags
- ✅ Cipher boundary handling (z→a, Z→A)

## 🎓 Key Learnings

### Understanding Pointers
- Difference between `int a` and `int *a`
- Dereferencing with `*` operator
- Address-of operator `&`
- Pass-by-reference vs pass-by-value

### String Operations
- Strings are null-terminated character arrays
- Iterating through strings safely
- Handling whitespace and special characters
- Copying vs modifying strings
- Reversing strings efficiently

### Cipher Algorithms
- **ROT13**: Rotate alphabet by 13 positions (encryption/decryption)
- **ROT1**: Rotate alphabet by 1 position (simple Caesar cipher)
- Handling uppercase and lowercase separately
- Preserving non-alphabetic characters
- Wrapping around alphabet boundaries

### Algorithm Implementation
- Breaking problems into smaller steps
- FizzBuzz logic and modulo operations
- Character-based algorithms
- Multiple approaches to same problem
- Comparing different implementation methods

## 🚀 Next Steps

After mastering Level 1, you're ready for:
- **Level 2**: More complex string algorithms and data manipulation
- **Level 3**: Advanced algorithms, recursion, and optimization
- **Beyond**: Data structures and advanced C concepts

## 📝 Notes

- All exercises compile without warnings using `-Wall -Wextra -Werror`
- Multiple implementations (md_1, md_2, md_3) show different problem-solving approaches
- Focus on understanding pointers - they are fundamental to C programming
- Practice writing functions from scratch to understand how libraries work
- Test your functions with various inputs including edge cases
- **Cipher exercises** teach you about character manipulation and Caesar cipher variants
- **Multiple methods** for same exercise help you understand optimization trade-offs

## 🤝 Tips for Success

1. **Master Pointers**: They're essential for C programming
2. **Test Edge Cases**: NULL pointers, empty strings, boundary values (z→a)
3. **Understand Memory**: Know what happens at each memory address
4. **Read Man Pages**: `man strcpy`, `man strlen` for reference
5. **Write Tests**: Create main functions to test your implementations
6. **Compare Approaches**: Study the three methods (md_1, md_2, md_3) to see different solutions
7. **Practice Ciphers**: Understand ROT13 and ROT1 - they're classic examples
8. **Practice Daily**: Consistency is key to mastering these concepts
9. **Draw Diagrams**: Visualize pointer operations and string transformations
10. **Debug Step-by-Step**: Use printf or gdb to trace execution

## 🔗 Related Resources

- [Pointers in C](https://en.cppreference.com/w/c/language/pointer)
- [String Functions Reference](https://en.cppreference.com/w/c/string/byte)
- [FizzBuzz Explained](https://en.wikipedia.org/wiki/Fizz_buzz)
- [Caesar Cipher](https://en.wikipedia.org/wiki/Caesar_cipher)
- [ROT13 Algorithm](https://en.wikipedia.org/wiki/ROT13)

---

**Keep pushing forward! 💪**  
Level 1 strengthens your foundation and prepares you for more advanced challenges.

[⬅️ Back to Level 0](../level_0/README.md) | [⬆️ Back to 42 Piscine Practice](../README.md) | [➡️ Next: Level 3](../level_3/README.md)
