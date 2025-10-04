# Level 1 - Core Concepts 🚀

Welcome to Level 1! This collection builds upon the fundamentals from Level 0 and introduces more complex string operations, basic algorithms, and standard library function implementations. These exercises are designed to strengthen your understanding of C programming and problem-solving skills.

## 📋 Overview

**Difficulty:** Intermediate  
**Total Exercises:** 9  
**Completion:** 9 🔄  
**Focus Areas:** String functions, algorithms, function implementation

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

## 🎯 Learning Objectives

By completing Level 1, you will master:

### Core Concepts
- **String Manipulation**: Advanced string parsing and processing
- **Function Implementation**: Recreating standard library functions
- **Pointers**: Understanding and using pointers effectively
- **Algorithm Design**: Implementing classic algorithms like FizzBuzz
- **Memory Operations**: Working with pointers and memory addresses

### Programming Skills
- Implementing custom string functions
- Working with pointer-based parameters
- Parsing and tokenizing strings
- Writing multiple solutions to the same problem
- Optimizing code for efficiency
- Understanding pass-by-reference vs pass-by-value

## 🛠️ Compilation & Testing

### Standard Compilation
```bash
gcc -Wall -Wextra -Werror exercise_name.c -o exercise_name
```

### Individual Exercise Examples

#### Example 1: first_word.c
```bash
gcc -Wall -Wextra -Werror first_word.c -o first_word
./first_word "Hello World"
# Output: Hello
./first_word "   Multiple   spaces"
# Output: Multiple
```

#### Example 2: fizzbuzz.c
```bash
gcc -Wall -Wextra -Werror fizzbuzz.c -o fizzbuzz
./fizzbuzz
# Output: 1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz 16...
```

#### Example 3: ft_putstr.c
```bash
gcc -Wall -Wextra -Werror ft_putstr.c -o ft_putstr
./ft_putstr
# (Write test in main to call ft_putstr("Hello World"))
# Output: Hello World
```

#### Example 4: ft_strlen.c
```bash
gcc -Wall -Wextra -Werror ft_strlen.c -o ft_strlen
./ft_strlen
# (Write test in main to call ft_strlen("test") and print result)
# Output: 4
```

#### Example 5: ft_swap.c
```bash
gcc -Wall -Wextra -Werror ft_swap.c -o ft_swap
./ft_swap
# (Write test in main: int a=5, b=10; ft_swap(&a, &b); print a and b)
# Output: a=10, b=5
```

## 💡 Key Techniques Used

### 1. String Length Implementation
```c
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
```

### 2. String Copy Implementation
```c
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
```

### 3. String Output Implementation
```c
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
```

### 4. Swap Using Pointers
```c
void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### 5. FizzBuzz Pattern
```c
int i = 1;
while (i <= 100)
{
    if (i % 15 == 0)
        write(1, "fizzbuzz", 8);
    else if (i % 3 == 0)
        write(1, "fizz", 4);
    else if (i % 5 == 0)
        write(1, "buzz", 4);
    else
        ft_putnbr(i);
    write(1, "\n", 1);
    i++;
}
```

### 6. First Word Extraction
```c
// Skip leading spaces
while (*str == ' ' || *str == '\t')
    str++;
    
// Print until next space or end
while (*str && *str != ' ' && *str != '\t')
{
    write(1, str, 1);
    str++;
}
```

## 🔍 Common Patterns

### Pattern 1: String Function Template
```c
#include <unistd.h>

// Return type depends on function
type function_name(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        // Process str[i]
        i++;
    }
    
    return (result);
}
```

### Pattern 2: Pointer-Based Swap
```c
void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
```

### Pattern 3: Character Repetition
```c
// Repeat character based on position in alphabet
int repeat_count;

if (c >= 'a' && c <= 'z')
    repeat_count = c - 'a' + 1;
else if (c >= 'A' && c <= 'Z')
    repeat_count = c - 'A' + 1;
else
    repeat_count = 1;

while (repeat_count--)
    write(1, &c, 1);
```

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

*where n = length of string, m = average repetition count*

## ✅ Best Practices Applied

- ✅ Efficient pointer usage
- ✅ No memory leaks
- ✅ Proper null-termination handling
- ✅ Edge case consideration (empty strings, NULL pointers)
- ✅ Clean, readable implementations
- ✅ Multiple solution approaches demonstrated
- ✅ Compilation with strict flags

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

### Algorithm Implementation
- Breaking problems into smaller steps
- FizzBuzz logic and modulo operations
- Character-based algorithms
- Multiple approaches to same problem

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

## 🤝 Tips for Success

1. **Master Pointers**: They're essential for C programming
2. **Test Edge Cases**: NULL pointers, empty strings, boundary values
3. **Understand Memory**: Know what happens at each memory address
4. **Read Man Pages**: `man strcpy`, `man strlen` for reference
5. **Write Tests**: Create main functions to test your implementations
6. **Compare Approaches**: Study the three repeat_alpha methods to see different solutions
7. **Practice Daily**: Consistency is key to mastering these concepts

## 🔗 Related Resources

- [Pointers in C](https://en.cppreference.com/w/c/language/pointer)
- [String Functions Reference](https://en.cppreference.com/w/c/string/byte)
- [FizzBuzz Explained](https://en.wikipedia.org/wiki/Fizz_buzz)

---

**Keep pushing forward! 💪**  
Level 1 strengthens your foundation and prepares you for more advanced challenges.

[⬅️ Back to Level 0](../level_0/README.md) | [⬆️ Back to 42 Piscine Practice](../README.md) | [➡️ Next: Level 3](../level_3/README.md)
