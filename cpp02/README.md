# CPP Module 02 - Ad-hoc Polymorphism, Operator Overloading

## Overview
This module introduces ad-hoc polymorphism through operator overloading and the implementation of a fixed-point number class. You'll learn about the Orthodox Canonical Form and how to create custom types that behave like built-in types.

## Exercises

### ex00: My First Class in Orthodox Canonical Form
**Concept**: Orthodox Canonical Form, basic fixed-point numbers

**Key Learning Points**:
- Orthodox Canonical Form (OCF) components:
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
- Fixed-point number representation
- Integer to fixed-point conversion
- Fixed-point to integer conversion
- Fixed-point to float conversion

**Class**: `Fixed`
- Private members: `_value` (raw fixed-point value), `_fractionalBits` (static)
- Public members: getters, setters, converters

**Files**: `Fixed.hpp`, `Fixed.cpp`, `main.cpp`

---

### ex01: Towards a more useful fixed-point number class
**Concept**: Constructors with parameters, conversion functions

**Key Learning Points**:
- Constructor overloading
- Converting between int/float and fixed-point
- `toInt()` and `toFloat()` member functions
- Overloading `<<` operator for output

**Enhancements**:
```cpp
Fixed(const int n);           // Int to fixed-point
Fixed(const float f);         // Float to fixed-point
float toFloat(void) const;    // Fixed-point to float
int toInt(void) const;        // Fixed-point to int
```

**Operator Overloading**:
- `operator<<` for stream insertion

**Files**: `Fixed.hpp`, `Fixed.cpp`, `main.cpp`

---

### ex02: Now we're talking
**Concept**: Complete operator overloading

**Key Learning Points**:
- Comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`
- Arithmetic operators: `+`, `-`, `*`, `/`
- Increment/decrement: `++`, `--` (prefix and postfix)
- Static member functions
- `min()` and `max()` functions

**Operator Categories**:

1. **Comparison Operators**:
```cpp
bool operator>(const Fixed& rhs) const;
bool operator<(const Fixed& rhs) const;
bool operator>=(const Fixed& rhs) const;
bool operator<=(const Fixed& rhs) const;
bool operator==(const Fixed& rhs) const;
bool operator!=(const Fixed& rhs) const;
```

2. **Arithmetic Operators**:
```cpp
Fixed operator+(const Fixed& rhs) const;
Fixed operator-(const Fixed& rhs) const;
Fixed operator*(const Fixed& rhs) const;
Fixed operator/(const Fixed& rhs) const;
```

3. **Increment/Decrement**:
```cpp
Fixed& operator++();      // Pre-increment: ++a
Fixed operator++(int);    // Post-increment: a++
Fixed& operator--();      // Pre-decrement: --a
Fixed operator--(int);    // Post-decrement: a--
```

4. **Static Functions**:
```cpp
static Fixed& min(Fixed& a, Fixed& b);
static const Fixed& min(const Fixed& a, const Fixed& b);
static Fixed& max(Fixed& a, Fixed& b);
static const Fixed& max(const Fixed& a, const Fixed& b);
```

**Files**: `Fixed.hpp`, `Fixed.cpp`, `main.cpp`

---

## Key Concepts

### Orthodox Canonical Form (OCF)
The four essential member functions every class should have:

```cpp
class Fixed {
public:
    Fixed();                           // Default constructor
    Fixed(const Fixed& other);         // Copy constructor
    Fixed& operator=(const Fixed& rhs); // Copy assignment operator
    ~Fixed();                          // Destructor
};
```

### Fixed-Point Numbers
- Represent fractional numbers using integers
- Format: `[integer bits][fractional bits]`
- Example: 8 fractional bits means multiply by 2^8 (256)
- Integer 42 → Fixed-point: 42 * 256 = 10752
- Float 42.42 → Fixed-point: 42.42 * 256 ≈ 10860

### Operator Overloading Rules
1. **Return types matter**:
   - Comparison: return `bool`
   - Arithmetic: return new object (by value)
   - Assignment: return reference to `*this`
   
2. **Const correctness**:
   - Comparison and arithmetic should be `const` member functions
   - Don't modify the original object

3. **Prefix vs Postfix**:
   ```cpp
   Fixed& operator++() {      // Prefix: return reference after increment
       _value++;
       return *this;
   }
   
   Fixed operator++(int) {    // Postfix: return copy before increment
       Fixed temp(*this);
       _value++;
       return temp;
   }
   ```

### Stream Insertion Operator
```cpp
// Must be a non-member function (friend or with public getters)
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
```

## Compilation
```bash
cd exXX && make
```

## Usage Example
```cpp
Fixed a;
Fixed const b(10);
Fixed const c(42.42f);
Fixed const d(b);

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;

// Arithmetic
Fixed e = b + c;
Fixed f = c - b;
Fixed g = b * c;
Fixed h = c / b;

// Comparison
if (b < c)
    std::cout << "b is less than c" << std::endl;

// Increment/Decrement
++a;
a++;

// Min/Max
Fixed& minimum = Fixed::min(a, b);
```

## Common Pitfalls
1. Forgetting to return `*this` in assignment operator
2. Not marking const methods as `const`
3. Confusing prefix and postfix increment/decrement
4. Memory leaks in copy operations (if using dynamic memory)
5. Not handling self-assignment in `operator=`
