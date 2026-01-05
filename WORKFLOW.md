# C++ Modules - Learning Workflow

## Overview
This repository contains a progressive series of C++ exercises designed to build foundational knowledge in C++ programming, from basic syntax to advanced object-oriented concepts.

## Learning Path

### Module 00: Introduction to C++
**Focus**: Basic C++ syntax, I/O, and classes
- Start with simple programs (megaphone)
- Learn about classes, member functions, and encapsulation
- Practice with basic data structures (PhoneBook)

### Module 01: Memory Management
**Focus**: Memory allocation, pointers, and references
- Understand stack vs heap allocation
- Learn proper resource management
- Practice with pointers and references
- File I/O and string manipulation

### Module 02: Ad-hoc Polymorphism
**Focus**: Operator overloading and fixed-point numbers
- Implement operator overloading
- Understand orthodox canonical form
- Work with custom numeric types

### Module 03: Inheritance
**Focus**: Class inheritance and polymorphism
- Single inheritance (ScavTrap from ClapTrap)
- Multiple inheritance (FragTrap)
- Diamond inheritance problem and virtual inheritance (DiamondTrap)

## Compilation Workflow

Each module uses Makefiles with consistent structure:
```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Rebuild from scratch
```

## Key Concepts Progression

1. **cpp00**: Classes, encapsulation, member functions
2. **cpp01**: Memory management, references, pointers
3. **cpp02**: Operator overloading, canonical form
4. **cpp03**: Inheritance hierarchy, virtual inheritance

## Best Practices Applied

- Orthodox Canonical Form (constructor, destructor, copy constructor, assignment operator)
- Proper memory management (no leaks)
- Const correctness
- Access specifiers (public, private, protected)
- Virtual inheritance for diamond problem resolution

## Testing Strategy

Each exercise includes:
- Construction/destruction testing
- Copy semantics verification
- Member function validation
- Edge case handling
