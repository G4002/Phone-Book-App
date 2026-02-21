## PHONE BOOK APP – Mini Project (C Language)

Project Title:
Phone Book Application using Singly Linked List and File Handling in C

---

## PROJECT DESCRIPTION

This project implements a console-based Phone Book Application in C.
It allows users to create, edit, delete, search, and store contact details.

Each contact can store multiple phone numbers, email IDs, address, and other details under a single name.
The project uses a Singly Linked List for dynamic storage and file handling to persist data between runs.

Duplicate contacts are restricted based on contact name.

---

## FEATURES

• Create a new contact with multiple phone numbers
• Add email, address, and additional details
• Print all saved contacts
• Find contact by name
• Edit existing contact details
• Delete contact
• Save contacts to file
• Reload saved contacts when app restarts
• Menu-driven user interface
• Modular design with separate source files
• Makefile-based build system

---

## MENU OPTIONS

C / c : Create a new contact
P / p : Print all contacts
D / d : Delete contact
F / f : Find contact
E / e : Edit a contact
S / s : Save contacts to file
Q / q : Quit application

---

## DATA STRUCTURE USED

• Singly Linked List to store contacts dynamically
• Structure used to hold:

* Name
* Multiple phone numbers
* Email IDs
* Address
* Other optional fields

---

## PROJECT STRUCTURE 

.
├── main.c
├── create_contact.c
├── delete_contact.c
├── edit_contact.c
├── find_contact.c
├── print_contact.c
├── file_ops.c
├── phonebook.h
├── makefile
└── README.txt

---

## COMPILATION INSTRUCTIONS

Method 1 – Using Makefile (Recommended)

Open terminal in project folder and run:

```
make
```

This will generate the executable file (example: phonebook)


Method 2 – Manual Compilation

```
gcc *.c -o phonebook
```


## EXECUTION

Run the program using:

```
./phonebook
```

You will see the menu and can select options by typing the corresponding letter.

---

## FILE STORAGE

• Contacts are stored in a file (example: contacts.dat / contacts.txt)
• When the program starts, it loads existing contacts from file
• Use Save option before quitting to persist new data

---

## FUNCTIONAL DESIGN

Each operation is implemented as a separate user-defined function:

• create_contact()
• print_contacts()
• delete_contact()
• find_contact()
• edit_contact()
• save_to_file()
• load_from_file()

---

## VALIDATIONS

• Prevents duplicate contact names
• Allows multiple numbers per contact with user confirmation
• Input prompts for optional fields (email, address, etc.)

---

## TOOLS & CONCEPTS USED

• C Programming
• Structures and typedef
• Singly Linked List
• File Handling (fopen, fread, fwrite, fprintf, fscanf)
• Modular Programming
• Makefile

---


Mini Project – Phone Book App
Implemented as part of C programming mini project.

---
