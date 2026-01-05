# CPP Module 03 - Inheritance

## Overview
This module introduces inheritance in C++, progressing from simple single inheritance to the complex diamond inheritance problem and its solution using virtual inheritance.

## Exercises

### ex00: Aaaaand... OPEN!
**Concept**: Basic class implementation, member functions

**Key Learning Points**:
- Class design and implementation
- Member variables and functions
- State management
- Resource points (HP, EP)

**Class**: `ClapTrap`
- **Attributes**: name, hit points (HP), energy points (EP), attack damage
- **Methods**: `attack()`, `takeDamage()`, `beRepaired()`
- **Mechanics**: 
  - Each action costs 1 EP
  - Can't act with 0 HP or 0 EP

**Files**: `ClapTrap.hpp`, `ClapTrap.cpp`, `main.cpp`

---

### ex01: Serena, my love!
**Concept**: Single inheritance, derived classes

**Key Learning Points**:
- Inheritance syntax: `class Derived : public Base`
- Constructor chaining
- Overriding member functions
- Protected vs private members
- Calling base class constructors

**Classes**:
- `ClapTrap` (base class)
- `ScavTrap` (derived class)
  - Different default values (HP: 100, EP: 50, DMG: 20)
  - Overridden `attack()` method
  - New method: `guardGate()`

**Inheritance**:
```cpp
class ScavTrap : public ClapTrap {
    // Inherits all ClapTrap members
    // Can override methods
    // Can add new methods
};
```

**Files**: `ClapTrap.hpp/cpp`, `ScavTrap.hpp/cpp`, `main.cpp`

---

### ex02: Repetitive work
**Concept**: Multiple derived classes, understanding inheritance hierarchy

**Key Learning Points**:
- Creating multiple classes from same base
- Different initialization strategies
- Specialized behavior in derived classes

**Classes**:
- `ClapTrap` (base)
- `ScavTrap` (derived from ClapTrap)
- `FragTrap` (derived from ClapTrap)
  - Different stats (HP: 100, EP: 100, DMG: 30)
  - New method: `highFivesGuys()`

**Hierarchy**:
```
       ClapTrap
       /      \
  ScavTrap  FragTrap
```

**Files**: `ClapTrap.hpp/cpp`, `ScavTrap.hpp/cpp`, `FragTrap.hpp/cpp`, `main.cpp`

---

### ex03: Now it's weird!
**Concept**: Multiple inheritance, diamond problem, virtual inheritance

**Key Learning Points**:
- Multiple inheritance syntax
- Diamond inheritance problem
- Virtual inheritance solution
- Shadowing member variables
- Using scope resolution operator
- Compiler flags: `-Wshadow`, `-Wno-shadow`

**The Diamond Problem**:
```
       ClapTrap
       /      \
  ScavTrap  FragTrap
       \      /
     DiamondTrap
```

Without virtual inheritance, `DiamondTrap` would have **two copies** of `ClapTrap`!

**Solution - Virtual Inheritance**:
```cpp
class ScavTrap : virtual public ClapTrap { };
class FragTrap : virtual public ClapTrap { };
class DiamondTrap : public ScavTrap, public FragTrap { };
```

**Classes**:
- `DiamondTrap` (multiply inherits from ScavTrap and FragTrap)
  - **Private attribute**: `_name` (shadows ClapTrap's `_name`)
  - **ClapTrap name**: DiamondTrap name + "_clap_name" suffix
  - **Stats**:
    - HP: from FragTrap (100)
    - EP: from ScavTrap (50)
    - DMG: from FragTrap (30)
  - **attack()**: uses ScavTrap's version
  - **New method**: `whoAmI()` - displays both names

**Key Implementation Details**:

1. **Name Shadowing**:
```cpp
class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;  // DiamondTrap's own name
    // ClapTrap::_name will be "name_clap_name"
};
```

2. **Constructor**:
```cpp
DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"),  // Initialize ClapTrap's name
      FragTrap(name),
      ScavTrap(name),
      _name(name)  // Initialize DiamondTrap's name
{
    // Set proper stats from both parents
}
```

3. **Using Specific Parent's Attack**:
```cpp
class DiamondTrap : public ScavTrap, public FragTrap {
public:
    using ScavTrap::attack;  // Use ScavTrap's attack method
};
```

4. **Accessing Both Names**:
```cpp
void DiamondTrap::whoAmI() {
    std::cout << "I am " << _name;                    // DiamondTrap's name
    std::cout << " and " << ClapTrap::_name;         // ClapTrap's name
    std::cout << std::endl;
}
```

**Files**: All previous files + `DiamondTrap.hpp/cpp`

---

## Key Concepts

### Inheritance Basics
```cpp
class Base {
protected:  // Accessible in derived classes
    int protectedVar;
private:    // Not accessible in derived classes
    int privateVar;
public:
    void baseMethod();
};

class Derived : public Base {
    // Has access to protectedVar
    // No access to privateVar
    // Inherits baseMethod()
};
```

### Constructor Chaining
```cpp
// Derived class constructor must call base constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // Base constructor called first
    // Then derived constructor body
}
```

### Virtual Inheritance
Solves the diamond problem by ensuring only **one instance** of the base class exists:

```cpp
// Without virtual inheritance:
//    DiamondTrap has 2 copies of ClapTrap (PROBLEM!)

// With virtual inheritance:
class ScavTrap : virtual public ClapTrap { };
class FragTrap : virtual public ClapTrap { };
//    DiamondTrap has 1 copy of ClapTrap (SOLUTION!)
```

### Method Resolution
When multiple inheritance provides the same method:

```cpp
DiamondTrap dt;
dt.attack("target");           // Ambiguous without specification
dt.ScavTrap::attack("target"); // Explicitly use ScavTrap's version

// Or use 'using' declaration:
class DiamondTrap : public ScavTrap, public FragTrap {
public:
    using ScavTrap::attack;  // Default to ScavTrap's attack
};
```

### Orthodox Canonical Form with Inheritance
```cpp
class Derived : public Base {
public:
    Derived();                              // Default constructor
    Derived(const Derived& other);          // Copy constructor
    Derived& operator=(const Derived& rhs); // Assignment operator
    ~Derived();                             // Destructor
};

// Copy constructor implementation:
Derived::Derived(const Derived& other) : Base(other) {
    // Base copy constructor called automatically
    // Copy derived class members here
}

// Assignment operator implementation:
Derived& Derived::operator=(const Derived& rhs) {
    if (this != &rhs) {
        Base::operator=(rhs);  // Call base assignment
        // Assign derived class members here
    }
    return *this;
}
```

## Compilation
```bash
cd exXX && make
```

## Testing Strategy

### ex00:
- Create ClapTrap, test all actions
- Test HP/EP depletion
- Verify state management

### ex01:
- Create both ClapTrap and ScavTrap
- Verify different stats
- Test overridden attack method
- Test guardGate()

### ex02:
- Create all three types
- Verify each has correct stats
- Test unique methods (guardGate, highFivesGuys)

### ex03:
- Test construction with name
- Verify proper name handling (DiamondTrap name vs ClapTrap name)
- Test whoAmI() method
- Verify attack uses ScavTrap's version
- Verify stats are correct (HP from FragTrap, EP from ScavTrap, etc.)
- Test inheritance of both guardGate() and highFivesGuys()
- Test copy constructor and assignment operator

## Common Pitfalls

1. **Forgetting virtual inheritance in ex03** → Two ClapTrap instances
2. **Not calling base constructor** → Uninitialized base members
3. **Wrong access specifier** → Use `public` inheritance
4. **Ambiguous method calls** → Use scope resolution or `using`
5. **Not handling -Wshadow warnings** → Variable name shadowing issues
6. **Incorrect stat initialization in DiamondTrap** → Must explicitly set HP from FragTrap, EP from ScavTrap
7. **Not initializing ClapTrap in DiamondTrap constructor** → With virtual inheritance, most derived class must initialize base

## The -Wshadow Flag
This compiler flag warns about variable shadowing:
```cpp
class ClapTrap {
private:
    std::string _name;
};

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;  // Shadows ClapTrap::_name (intended in this case)
};
```

Use `-Wno-shadow` to suppress these warnings if shadowing is intentional.
