# CPP Module 01 - Memory Allocation, Pointers, References

## Overview
This module focuses on memory allocation, pointers to members, references, and the switch statement. Understanding the difference between stack and heap allocation is crucial.

## Exercises

### ex00: BraiiiiiiinnnzzzZ
**Concept**: Stack vs Heap allocation, pointers

**Key Learning Points**:
- Creating objects on the stack vs heap
- Using `new` and `delete`
- Pointer management
- Function returning pointers vs void functions with pointers

**Classes**: `Zombie`

**Functions**:
- `newZombie()`: Creates zombie on heap, returns pointer
- `randomChump()`: Creates zombie on stack, announces immediately

**Files**: `Zombie.hpp`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`, `main.cpp`

---

### ex01: Moar brainz!
**Concept**: Dynamic array allocation

**Key Learning Points**:
- Allocating arrays with `new[]`
- Deleting arrays with `delete[]`
- Iterating through dynamically allocated arrays

**Function**: `zombieHorde()`: Creates N zombies on the heap

**Files**: `Zombie.hpp`, `Zombie.cpp`, `zombieHorde.cpp`, `main.cpp`

---

### ex02: HI THIS IS BRAIN
**Concept**: Pointers vs References

**Key Learning Points**:
- Understanding memory addresses
- Pointer syntax (`*`)
- Reference syntax (`&`)
- Differences between pointers and references

**Demonstrates**:
```cpp
std::string str = "HI THIS IS BRAIN";
std::string* stringPTR = &str;
std::string& stringREF = str;
```

**Files**: `main.cpp`

---

### ex03: Unnecessary violence
**Concept**: References in class design

**Key Learning Points**:
- Using references as class members
- Using pointers as class members
- When to use references vs pointers
- References must be initialized and cannot be null

**Classes**:
- `Weapon`: Has a type that can change
- `HumanA`: Has a reference to a `Weapon` (always has a weapon)
- `HumanB`: Has a pointer to a `Weapon` (may not have a weapon)

**Files**: `Weapon.hpp/cpp`, `HumanA.hpp/cpp`, `HumanB.hpp/cpp`, `main.cpp`

---

### ex04: Sed is for losers
**Concept**: File I/O, string manipulation

**Key Learning Points**:
- Reading from files (`std::ifstream`)
- Writing to files (`std::ofstream`)
- String searching and replacing
- File handling best practices

**Functionality**: Replace all occurrences of s1 with s2 in a file

**Files**: `main.cpp`, `replace.hpp`, `replace.cpp`

---

### ex05: Harl 2.0
**Concept**: Pointers to member functions

**Key Learning Points**:
- Function pointers in C++
- Pointers to member functions
- Cleaner alternative to if/else chains

**Class**: `Harl`
- Different complaint levels: DEBUG, INFO, WARNING, ERROR

**Files**: `Harl.hpp`, `Harl.cpp`, `main.cpp`

---

### ex06: Harl filter
**Concept**: Switch statements, filtering

**Key Learning Points**:
- Using switch with fall-through
- Filtering log levels
- Command-line argument handling

**Enhancement**: Filter Harl's complaints by minimum level

**Files**: `Harl.hpp`, `Harl.cpp`, `main.cpp`

---

## Key Concepts

### Stack vs Heap
```cpp
// Stack allocation - automatic cleanup
Zombie stackZombie("Stack");

// Heap allocation - manual cleanup required
Zombie* heapZombie = new Zombie("Heap");
delete heapZombie;
```

### Pointers vs References
```cpp
// Pointer - can be null, can be reassigned
Weapon* weaponPtr = &weapon;
weaponPtr = &otherWeapon;

// Reference - cannot be null, cannot be reassigned
Weapon& weaponRef = weapon;
// weaponRef = otherWeapon; // This changes weapon's content, not the reference
```

### File I/O
```cpp
std::ifstream infile("input.txt");
std::ofstream outfile("output.txt");
```

### Pointers to Member Functions
```cpp
typedef void (Harl::*HarlMemFn)(void);
HarlMemFn functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
```

## Compilation
```bash
cd exXX && make
```

## Memory Management Rules
1. Every `new` must have a corresponding `delete`
2. Every `new[]` must have a corresponding `delete[]`
3. Never mix `new`/`delete` with `new[]`/`delete[]`
4. References must be initialized and cannot be null
5. Always check if pointers are null before dereferencing
