<div align="center">

# Level 2 - Advanced Manipulation

*Data Processing & String Algorithms*

[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate%2B-orange?style=flat-square)]()
[![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=flat-square)]()
[![Exercises](https://img.shields.io/badge/Exercises-5-blue?style=flat-square)]()

![Progress](https://progress-bar.dev/40/?title=Level%202%20Completion&width=500&color=FFC107)

</div>

---

## 📋 Overview

Level 2 introduces more advanced data manipulation, complex string algorithms, and mathematical operations. These exercises build upon string fundamentals and require deeper understanding of algorithm design and data processing.

**Focus Areas:** String Comparison | Number Conversion | Character Operations | Algorithm Design

---

## 📚 Exercise Catalog

### Complete List (5 Exercises)

<details open>
<summary><b>🔤 String Comparison (2 exercises)</b></summary>

| Exercise | Description | Methods | Concepts |
|:---------|:------------|:-------:|:---------|
| `ft_strcmp.c` | String comparison | 2 | Character-by-character comparison |
| `ft_strcspn.c` | String span | 2 | Character search algorithm |

</details>

<details open>
<summary><b>🔢 Number Conversion (2 exercises)</b></summary>

| Exercise | Description | Methods | Concepts |
|:---------|:------------|:-------:|:---------|
| `ft_atoi.c` | ASCII to integer | 2 | String to number conversion |
| `do_op.c` | Do operation | 2 | Operator handling |

</details>

<details open>
<summary><b>🪞 Character Manipulation (1 exercise)</b></summary>

| Exercise | Description | Methods | Concepts |
|:---------|:------------|:-------:|:---------|
| `alpha_mirror.c` | Mirror alphabet | 4 | Character transformation |

</details>

---

## 🎯 Learning Objectives

### Technical Skills
- ✅ Advanced string comparison algorithms
- ✅ Number parsing and conversion
- ✅ Character transformation techniques
- ✅ Operator handling and dispatch
- ✅ Complex algorithm design

### Problem-Solving
- ✅ Efficient string processing
- ✅ Numeric parsing logic
- ✅ Multiple algorithm approaches
- ✅ Edge case management
- ✅ Performance optimization

---

## 🛠️ Compilation & Testing

### Standard Compilation

```bash
gcc -Wall -Wextra -Werror exercise.c -o exercise
```

### Exercise Types

**1. String Comparison Functions** (ft_strcmp, ft_strcspn)

```bash
gcc -Wall -Wextra -Werror ft_strcmp.c test_main.c -o test_strcmp
./test_strcmp
```

**Testing Tips:**
- Test equal strings: `"hello"`, `"hello"` → 0
- Test different strings: `"abc"`, `"abd"` → negative
- Test empty strings: `""`, `""`
- Test NULL termination

**2. Number Conversion** (ft_atoi)

```bash
gcc -Wall -Wextra -Werror ft_atoi.c test_main.c -o test_atoi
./test_atoi
```

**Testing Tips:**
- Test positive numbers: `"123"` → 123
- Test negative numbers: `"-456"` → -456
- Test with spaces: `"  789"` → 789
- Test invalid input: `"abc"` → 0

**3. Operator Functions** (do_op)

```bash
gcc -Wall -Wextra -Werror do_op.c -o do_op
./do_op 10 + 5
# Output: 15

./do_op 20 - 3
# Output: 17
```

**Testing Tips:**
- Test all operators: +, -, *, /, %
- Test edge cases: division by zero
- Test with negative numbers
- Test operator precedence

**4. Character Transformation** (alpha_mirror)

```bash
gcc -Wall -Wextra -Werror alpha_mirror.c -o alpha_mirror
./alpha_mirror "abc"
# Output: zyx

./alpha_mirror "ABC"
# Output: ZYX
```

**Testing Tips:**
- Test lowercase: `"abc"` → `"zyx"`
- Test uppercase: `"ABC"` → `"ZYX"`
- Test mixed: `"aB1"` → `"zY1"`
- Test non-alphabetic: numbers, symbols

---

## 💡 Key Concepts

### String Comparison

**Core Understanding:**
- Compare strings character by character
- Return 0 if equal, negative if first < second, positive if first > second
- Stop at null terminator

**Example:**
```c
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
```

### Number Parsing (atoi)

**Essential Concepts:**
- Skip whitespace
- Handle optional sign
- Convert digits to number
- Stop at non-digit

**Example:**
```c
int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
        if (*str++ == '-')
            sign = -1;
    while (*str >= '0' && *str <= '9')
        num = num * 10 + (*str++ - '0');
    return (num * sign);
}
```

### Character Transformation

**Key Points:**
- Mirror: `a ↔ z`, `b ↔ y`, etc.
- Preserve case: lowercase stays lowercase
- Non-letters unchanged
- Formula: `'z' - (char - 'a')`

---

## 📊 Complexity Analysis

| Exercise | Time | Space | Notes |
|:---------|:----:|:-----:|:------|
| ft_strcmp | O(n) | O(1) | Linear comparison |
| ft_strcspn | O(n·m) | O(1) | n=str, m=charset |
| ft_atoi | O(n) | O(1) | Single pass |
| do_op | O(1) | O(1) | Constant operations |
| alpha_mirror | O(n) | O(1) | Single pass |

*n = string length*

---

## ✅ Quality Standards

| Standard | Status |
|:---------|:------:|
| No warnings with `-Wall -Wextra -Werror` | ✅ |
| 42 Norminette compliant | ✅ |
| Memory leak free | ✅ |
| Edge cases handled | ✅ |
| Multiple test scenarios | ✅ |

---

## 🎯 Multiple Solutions Philosophy

**Why Multiple Methods (md_1, md_2, md_3, md_4)?**

Each method demonstrates different approaches:
- **Method 1:** Usually most straightforward
- **Method 2:** Alternative logic or optimization
- **Method 3:** Different perspective or technique
- **Method 4:** Advanced or creative solution

**Benefits:**
- Compare efficiency
- Learn different strategies
- Practice refactoring
- Understand trade-offs

---

## 🚀 Next Steps

After Level 2:
- **Level 3** → Advanced algorithms & recursion
- **Level 4** → List operations & complex data
- **Level 5** → Advanced structures & final challenges

---

## 💡 Tips for Success

### Study Strategies
1. **Understand the Algorithm**
   - Read requirements carefully
   - Plan your approach
   - Consider edge cases

2. **Compare Implementations**
   - Study all methods (md_1, md_2, etc.)
   - Which is clearest?
   - Which is most efficient?

3. **Test Thoroughly**
   - Create comprehensive tests
   - Try boundary values
   - Check error conditions

### Best Practices
1. **Learn from Mistakes**
   - Debug systematically
   - Use printf/gdb
   - Understand each error

2. **Optimize Code**
   - Measure performance
   - Compare approaches
   - Document learnings

---

## 📚 Resources

| Resource | Link |
|:---------|:----:|
| String Functions | [cppreference.com](https://en.cppreference.com/w/c/string/byte) |
| Character Classes | [cppreference.com](https://en.cppreference.com/w/c/string/byte) |
| Algorithm Analysis | [wikipedia.org](https://en.wikipedia.org/wiki/Algorithm) |
| Number Parsing | [cppreference.com](https://en.cppreference.com/w/c/string/byte/atoi) |

---

## 📄 Exercise Subjects

All exercise requirements and specifications:

📥 **[Download Level 2 Subjects (PDF)](level_2.pdf)** *(Coming soon - will be added upon completion)*

---

## Level 2 In Progress

You're tackling more complex challenges.  
Keep practicing and refining your skills!

---

### Navigation

[⬅️ Level 1](../level_1/README.md) | [⬆️ 42 Piscine](../README.md) | [➡️ Level 3](../level_3/)

*Last Updated: October 2025*

</div>
