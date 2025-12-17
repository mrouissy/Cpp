#!/bin/bash

# Create test_ex00.yaml
cat > cpp00/ex00/test_ex00.yaml << 'YAML'
---
test_cases:
  - name: "No arguments - should output default message"
    command: "./megaphone"
    expected_output: "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
    exit_code: 0

  - name: "Single lowercase string"
    command: "./megaphone hello"
    expected_output: "HELLO"
    exit_code: 0

  - name: "Single uppercase string"
    command: "./megaphone HELLO"
    expected_output: "HELLO"
    exit_code: 0

  - name: "Mixed case string"
    command: "./megaphone HeLLo WoRLd"
    expected_output: "HELLO WORLD"
    exit_code: 0

  - name: "Multiple arguments"
    command: "./megaphone hello world test"
    expected_output: "HELLO WORLD TEST"
    exit_code: 0

  - name: "String with special characters"
    command: "./megaphone hello123"
    expected_output: "HELLO123"
    exit_code: 0

  - name: "Empty string argument"
    command: "./megaphone ''"
    expected_output: ""
    exit_code: 0

  - name: "Spaces only"
    command: "./megaphone '   '"
    expected_output: "   "
    exit_code: 0

  - name: "Numbers and symbols"
    command: "./megaphone test@123 hello#world"
    expected_output: "TEST@123 HELLO#WORLD"
    exit_code: 0
YAML

# Create test_ex01.yaml
cat > cpp00/ex01/test_ex01.yaml << 'YAML'
---
test_scenarios:
  - name: "Invalid command"
    description: "Test that invalid commands produce error message"
    input_sequence:
      - "INVALID"
      - "EXIT"

  - name: "Exit program"
    description: "Test EXIT command terminates program"
    input_sequence:
      - "EXIT"

  - name: "Add a contact"
    description: "Test ADD command to add contact to phonebook"
    input_sequence:
      - "ADD"
      - "John"
      - "Doe"
      - "johnny"
      - "1990-01-01"
      - "0123456789"
      - "EXIT"

  - name: "Add multiple contacts"
    description: "Test adding multiple contacts (up to 8)"
    input_sequence:
      - "ADD"
      - "Alice"
      - "Smith"
      - "alice"
      - "1995-05-15"
      - "0111111111"
      - "ADD"
      - "Bob"
      - "Johnson"
      - "bob"
      - "1992-03-20"
      - "0222222222"
      - "EXIT"

  - name: "Search for contact"
    description: "Test SEARCH command to find a contact"
    input_sequence:
      - "ADD"
      - "Charlie"
      - "Brown"
      - "charlie"
      - "1998-07-10"
      - "0333333333"
      - "SEARCH"
      - "0"
      - "EXIT"

  - name: "Display menu"
    description: "Test that menu is displayed at startup"
    input_sequence:
      - "EXIT"
YAML

echo "✓ Test files created"
