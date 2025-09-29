# Level 0 - Fundamentals 🌱

Welcome to Level 0! This collection focuses on the absolute fundamentals of C programming. These exercises are designed to build a solid foundation in basic I/O operations, character manipulation, and understanding how programs interact with the command line.

## 📋 Overview

**Difficulty:** Beginner  
**Total Exercises:** 11  
**Completion:** 11/11 ✅  
**Focus Areas:** Basic output, character operations, command-line arguments

## 📚 Exercise List

| # | Exercise | Description | Concepts | Status |
|---|----------|-------------|----------|--------|
| 1 | `aff_a.c` | Display the character 'a' | Basic output with `write()` | ✅ |
| 2 | `aff_first_param.c` | Display first command-line argument | argc/argv, parameter handling | ✅ |
| 3 | `aff_last_param.c` | Display last command-line argument | Array indexing, argc | ✅ |
| 4 | `aff_z.c` | Display the character 'z' | Basic output | ✅ |
| 5 | `ft_countdown.c` | Print countdown from 9 to 0 | Loops, digit output | ✅ |
| 6 | `ft_print_numbers.c` | Print digits 0 to 9 | Loops, character conversion | ✅ |
| 7 | `hello.c` | Display "Hello World!" | String output | ✅ |
| 8 | `maff_alpha.c` | Print alphabet (alternating case) | ASCII manipulation, loops | ✅ |
| 9 | `maff_revalpha.c` | Print reverse alphabet (alternating) | Reverse iteration, case control | ✅ |
| 10 | `only_a.c` | Display only 'a' from input | Character filtering | ✅ |
| 11 | `only_z.c` | Display only 'z' from input | Character filtering | ✅ |

## 🎯 Learning Objectives

By completing Level 0, you will master:

### Core Concepts
- **`write()` System Call**: Understanding low-level output operations
- **Command-Line Arguments**: Using `argc` and `argv` effectively
- **Character Operations**: ASCII values and character manipulation
- **Loop Control**: For and while loops for iteration
- **String Handling**: Basic string output and manipulation

### Programming Skills
- Writing programs without using `printf()`
- Converting numbers to characters
- Handling edge cases (empty input, no arguments)
- Following strict compilation standards
- Writing clean, readable code

## 🛠️ Compilation & Testing

### Standard Compilation
```bash
gcc -Wall -Wextra -Werror exercise_name.c -o exercise_name
```

### Individual Exercise Examples

#### Example 1: hello.c
```bash
gcc -Wall -Wextra -Werror hello.c -o hello
./hello
# Output: Hello World!
```

#### Example 2: aff_first_param.c
```bash
gcc -Wall -Wextra -Werror aff_first_param.c -o aff_first_param
./aff_first_param test
# Output: test
./aff_first_param
# Output: (newline only)
```

#### Example 3: ft_countdown.c
```bash
gcc -Wall -Wextra -Werror ft_countdown.c -o ft_countdown
./ft_countdown
# Output: 9876543210
```

#### Example 4: maff_alpha.c
```bash
gcc -Wall -Wextra -Werror maff_alpha.c -o maff_alpha
./maff_alpha
# Output: aBcDeFgHiJkLmNoPqRsTuVwXyZ
```

## 💡 Key Techniques Used

### 1. Using `write()` Instead of `printf()`
```c
#include <unistd.h>

write(1, "Hello", 5);  // fd=1 (stdout), buffer, length
```

### 2. Converting Numbers to Characters
```c
char c = digit + '0';  // Convert 5 to '5' (ASCII 53)
```

### 3. Accessing Command-Line Arguments
```c
int main(int argc, char **argv)
{
    if (argc > 1)
        // argv[1] is first argument
}
```

### 4. Character Case Manipulation
```c
char lower = 'A' + 32;  // Convert uppercase to lowercase
char upper = 'a' - 32;  // Convert lowercase to uppercase
```

## 🔍 Common Patterns

### Pattern 1: Single Character Output
```c
#include <unistd.h>

int main(void)
{
    write(1, "a\n", 2);
    return (0);
}
```

### Pattern 2: Loop-Based Output
```c
#include <unistd.h>

int main(void)
{
    char c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
    return (0);
}
```

### Pattern 3: Argument Handling
```c
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    
    if (argc > 1)
    {
        while (argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
```

## 📊 Complexity Analysis

| Exercise | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| aff_a | O(1) | O(1) |
| aff_first_param | O(n) | O(1) |
| ft_countdown | O(1) | O(1) |
| ft_print_numbers | O(1) | O(1) |
| maff_alpha | O(1) | O(1) |

*where n = length of input string*

## ✅ Best Practices Applied

- ✅ No memory leaks
- ✅ Proper error handling
- ✅ Edge cases considered
- ✅ Clean, readable code
- ✅ Efficient algorithms
- ✅ Proper use of `write()`
- ✅ Compilation with strict flags

## 🚀 Next Steps

After mastering Level 0, you're ready for:
- **Level 1**: More complex string operations and basic algorithms
- **Level 2**: Advanced string manipulation and data structures
- **Level 3**: Algorithm implementation and optimization

## 📝 Notes

- All exercises compile without warnings using `-Wall -Wextra -Werror`
- Solutions prioritize clarity and correctness
- Each solution is optimized for the specific problem requirements
- Code follows consistent styling and formatting

## 🤝 Tips for Success

1. **Understand `write()`**: Master the low-level I/O function
2. **Practice ASCII**: Know how to convert between characters and numbers
3. **Test Edge Cases**: Empty strings, no arguments, special characters
4. **Read Man Pages**: `man write`, `man ascii` for reference
5. **Start Simple**: Understand basics before moving to complex solutions

---

**Congratulations on completing Level 0! 🎉**  
You've built a strong foundation in C fundamentals. Keep going!

[⬅️ Back to 42 Piscine Practice](../README.md) | [➡️ Next: Level 1](../level_1/README.md)
