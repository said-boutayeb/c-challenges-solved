<div align="center">

# 🚀 Level 1 - Core Concepts

### *Mastering String Operations & Algorithm Foundations*

[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate-orange?style=for-the-badge)]()
[![Status](https://img.shields.io/badge/Status-Complete-success?style=for-the-badge)]()
[![Exercises](https://img.shields.io/badge/Exercises-23/23-blue?style=for-the-badge)]()

![Progress](https://progress-bar.dev/100/?title=Level%201%20Progress&width=500&color=4CAF50)

</div>

---

## 📋 Overview

Level 1 builds upon Level 0 fundamentals and introduces **string manipulation**, **algorithm implementation**, and **cipher techniques**. This level emphasizes understanding pointers, recreating standard library functions, and exploring multiple solution approaches.

<div align="center">

### 🎯 Key Focus Areas

| Category | Topics |
|:---------|:-------|
| **String Functions** | ft_strlen, ft_strcpy, ft_putstr |
| **Algorithms** | FizzBuzz, first_word, search_and_replace |
| **Ciphers** | ROT13, ROT1 (rotone) |
| **String Processing** | repeat_alpha, rev_print, ulstr |
| **Pointers** | ft_swap, memory manipulation |

</div>

---

## 📚 Exercise Catalog

<details open>
<summary><h3>📖 Complete Exercise List (23 Total)</h3></summary>

<br/>

<div align="center">

| # | Exercise | Type | Concepts |
|:-:|:---------|:----:|:---------|
| 1 | `first_word.c` | 🔤 | String parsing, whitespace |
| 2 | `fizzbuzz.c` | 🎲 | Conditionals, modulo |
| 3 | `ft_putstr.c` | ⚙️ | String output, write() |
| 4 | `ft_strcpy.c` | ⚙️ | String copy, pointers |
| 5 | `ft_strlen.c` | ⚙️ | String length, iteration |
| 6 | `ft_swap.c` | ⚙️ | Swap, pass-by-reference |
| 7-9 | `md_[1-3]_repeat_alpha.c` | 🔤 | Character repetition (3 methods) |
| 10-12 | `md_[1-3]_rev_print.c` | 🔤 | String reversal (3 methods) |
| 13-14 | `md_[1-2]_rot_13.c` | 🔐 | ROT13 cipher (2 methods) |
| 15-17 | `md_[1-3]_rotone.c` | 🔐 | ROT1 cipher (3 methods) |
| 18-20 | `md_[1-3]_ulstr.c` | 🔤 | Case toggle (3 methods) |
| 21-22 | `md_[1-2]_search_and_replace.c` | 🔍 | Character replacement (2 methods) |

**Legend:** ⚙️ Function | 🔤 String | 🔐 Cipher | 🎲 Algorithm | 🔍 Search

</div>

</details>

---

## 🎓 Learning Objectives

<div align="center">

<table>
<tr>
<td width="50%">

### 🧠 Technical Skills

- ✅ String manipulation mastery
- ✅ Pointer operations & memory
- ✅ Standard library recreation
- ✅ Cipher algorithm implementation
- ✅ Multiple solution approaches

</td>
<td width="50%">

### 🎯 Problem-Solving

- ✅ Algorithm design patterns
- ✅ Edge case handling
- ✅ Code optimization techniques
- ✅ Debugging strategies
- ✅ Testing methodologies

</td>
</tr>
</table>

</div>

---

## 🛠️ Compilation Guide

<div align="center">

### Standard Compilation

```bash
gcc -Wall -Wextra -Werror exercise.c -o exercise
```

</div>

### Exercise Types & Compilation

<details>
<summary><b>⚙️ Function Implementations</b> (ft_strlen, ft_strcpy, ft_putstr, ft_swap)</summary>

<br/>

These exercises implement functions without a main. You need to create your own test file.

```bash
# Create test_main.c with your tests
gcc -Wall -Wextra -Werror ft_strlen.c test_main.c -o test
./test
```

**Testing Tips:**
- Test empty strings: `""`
- Test normal strings: `"Hello"`
- Test long strings
- Compare with standard library behavior

</details>

<details>
<summary><b>🔤 Command-Line Programs</b> (first_word, rot_13, rotone, etc.)</summary>

<br/>

These exercises take command-line arguments.

```bash
# Compile
gcc -Wall -Wextra -Werror first_word.c -o first_word

# Test with arguments
./first_word "Hello World"
./first_word "   spaces   test"
./first_word ""
```

**Testing Tips:**
- Test with no arguments
- Test with empty string
- Test with special characters
- Test edge cases

</details>

<details>
<summary><b>🎲 Standalone Programs</b> (fizzbuzz)</summary>

<br/>

These exercises have their own main and run without arguments.

```bash
gcc -Wall -Wextra -Werror fizzbuzz.c -o fizzbuzz
./fizzbuzz
```

</details>

---

## 💡 Key Concepts

<div align="center">

### 🔤 String Operations

</div>

**Fundamental Understanding:**
- Strings are null-terminated arrays: `"Hello"` → `['H','e','l','l','o','\0']`
- Always iterate until `\0`
- Watch for buffer boundaries

**Common Patterns:**
```c
// Iteration pattern
while (str[i])
    i++;

// Safe copying
while (src[i])
{
    dest[i] = src[i];
    i++;
}
dest[i] = '\0';
```

<div align="center">

### 🎯 Pointers

</div>

**Key Concepts:**
- `int *ptr` → pointer to integer
- `*ptr` → dereference (get value)
- `&var` → get address
- Pass-by-reference enables modification

**Example:**
```c
void ft_swap(int *a, int *b)
{
    int tmp = *a;  // Get value at address a
    *a = *b;       // Set value at address a
    *b = tmp;      // Set value at address b
}
```

<div align="center">

### 🔐 Cipher Algorithms

</div>

**ROT13 (Rotate by 13):**
- Encryption = Decryption (13 + 13 = 26)
- `A → N`, `N → A`
- Only affects letters

**ROT1 (Rotate by 1):**
- Simple Caesar cipher
- `a → b`, `z → a`
- Wraps around alphabet

---

## 📊 Complexity Analysis

<div align="center">

| Exercise | Time | Space | Notes |
|:---------|:----:|:-----:|:------|
| **ft_strlen** | O(n) | O(1) | Linear scan |
| **ft_strcpy** | O(n) | O(1) | Linear copy |
| **ft_swap** | O(1) | O(1) | Constant time |
| **fizzbuzz** | O(1) | O(1) | Fixed iterations (100) |
| **repeat_alpha** | O(n·m) | O(1) | m = repetition count |
| **rot_13** | O(n) | O(1) | Single pass |
| **search_replace** | O(n) | O(1) | Single pass |

*n = string length*

</div>

---

## ✅ Quality Standards

<div align="center">

| Standard | Requirement | Status |
|:---------|:------------|:------:|
| **Compilation** | No warnings with strict flags | ✅ |
| **Norminette** | 42 coding standards | ✅ |
| **Memory** | No leaks, safe operations | ✅ |
| **Edge Cases** | NULL, empty strings, boundaries | ✅ |
| **Testing** | Multiple test scenarios | ✅ |

</div>

---

## 🎯 Multiple Solution Approaches

**Why 3 methods (md_1, md_2, md_3)?**

Each method demonstrates different approaches:
- **Method 1:** Often most straightforward
- **Method 2:** Alternative logic or optimization
- **Method 3:** Different perspective or technique

**Benefits:**
- 🧠 Understand there's no single "right" way
- ⚡ Compare efficiency and readability
- 🎓 Learn different problem-solving strategies
- 🔄 Practice refactoring and optimization

---

## 🚀 Next Steps

<div align="center">

### After Level 1, you're ready for:

```
Level 2  →  More complex algorithms & data manipulation
Level 3  →  Advanced concepts, recursion, linked lists
Beyond   →  Data structures, algorithms, system programming
```

</div>

---

## 💡 Pro Tips

<div align="center">

<table>
<tr>
<td width="50%">

### 🎯 Study Strategies

1. **Understand Before Coding**
   - Read requirements carefully
   - Plan your approach
   - Consider edge cases

2. **Test Thoroughly**
   - Create comprehensive tests
   - Try boundary values
   - Check error conditions

</td>
<td width="50%">

### ⚡ Optimization Tips

1. **Compare Your Methods**
   - Look at md_1, md_2, md_3
   - Which is more efficient?
   - Which is more readable?

2. **Learn from Mistakes**
   - Debug systematically
   - Use printf/gdb
   - Understand each error

</td>
</tr>
</table>

</div>

---

## 📚 Additional Resources

<div align="center">

| Resource | Link |
|:---------|:----:|
| 🔗 **Pointers in C** | [cppreference.com](https://en.cppreference.com/w/c/language/pointer) |
| 🔗 **String Functions** | [cppreference.com](https://en.cppreference.com/w/c/string/byte) |
| 🔗 **Caesar Cipher** | [Wikipedia](https://en.wikipedia.org/wiki/Caesar_cipher) |
| 🔗 **ROT13** | [Wikipedia](https://en.wikipedia.org/wiki/ROT13) |
| 🔗 **FizzBuzz** | [Wikipedia](https://en.wikipedia.org/wiki/Fizz_buzz) |

</div>

---

<div align="center">

## 🎉 Congratulations!

**You've completed Level 1!**

You now have a solid foundation in string manipulation, pointers, and basic algorithms.  
Keep this momentum going into Level 2! 💪

---

### Navigation

[![Level 0](https://img.shields.io/badge/←-Level%200-blue?style=for-the-badge)](../level_0/README.md)
[![42 Piscine](https://img.shields.io/badge/↑-42%20Piscine-purple?style=for-the-badge)](../README.md)
[![Level 2](https://img.shields.io/badge/Level%202-→-orange?style=for-the-badge)](#)

---

*Last Updated: October 2025*

</div>
