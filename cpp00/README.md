# CPP Module 00 - Introduction to C++

## Overview
Introduction to C++ basics: namespaces, classes, member functions, stdio streams, initialization lists, static, const, and other fundamental concepts.

## Exercises

### ex00: Megaphone
**Concept**: Basic C++ program structure, string manipulation, command-line arguments

**Key Learning Points**:
- Using `std::cout` for output
- String manipulation with C++ strings
- Command-line argument handling
- Character transformation functions

**Files**: `megaphone.cpp`

---

### ex01: PhoneBook
**Concept**: Classes, objects, encapsulation, private/public members

**Key Learning Points**:
- Class design and implementation
- Private member variables
- Public member functions (getters/setters)
- Data encapsulation
- Multiple class interaction (`PhoneBook` manages multiple `Contact` objects)
- Interactive program flow

**Classes**:
- `Contact`: Stores individual contact information
- `PhoneBook`: Manages a collection of contacts (max 8)

**Features**:
- ADD: Add a new contact
- SEARCH: Display and search contacts
- EXIT: Quit the program

**Files**: 
- `Contact.hpp`, `Contact.cpp`
- `PhoneBook.hpp`, `PhoneBook.cpp`
- `main.cpp`

---

## Key Concepts

### Classes and Objects
```cpp
class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
    public:
        Contact();
        void setFirstName(std::string name);
        std::string getFirstName() const;
};
```

### Encapsulation
- Private members for data hiding
- Public getters/setters for controlled access

### Orthodox Canonical Form (Introduction)
While not strictly required in this module, it's good practice:
- Default constructor
- Destructor
- Copy constructor
- Copy assignment operator

## Compilation
```bash
cd ex00 && make
cd ex01 && make
```

## Usage Examples

### ex00:
```bash
./megaphone "hello world"
# Output: HELLO WORLD

./megaphone hello world
# Output: HELLO WORLD
```

### ex01:
```bash
./phonebook
> ADD
> SEARCH
> EXIT
```
