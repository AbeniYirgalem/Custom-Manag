# Custom-Manag

Custom-Manag is a small C++ console application that provides simple management utilities for a small business context. The project appears to include management modules for customers, hotels, cabs (transportation), and billing. It offers a text-based menu interface to perform basic CRUD-like operations and utility functions.

This README documents the repository layout, what each source file is responsible for, how to build and run the project on Windows PowerShell, and recommended next steps.

## Project Purpose

The project is designed as a compact management system for handling entities commonly needed in small service businesses (for example: hotels and cab services). It centralizes operations such as:

- Managing customer records
- Managing hotel records
- Managing cab/transportation records
- Creating/processing billing or receipts
- Providing a menu-driven console interface for interacting with the system

This is a learning/demo application suitable for expanding into a full system (database integration, persistent storage, improved UI, and input validation).

## Repository Structure

Top-level files:

- `main.cpp` - Application entry point. Likely initializes the system and enters the main menu loop.
- `menu.cpp`, `menu.h` - Implements the console menu and user interaction flow.
- `utils.cpp`, `utils.h` - Common utility functions used across modules (e.g., input helpers, formatting, validation helpers).
- `customer_management.cpp`, `customer_management.h` - Functions to add, remove, edit, and list customers.
- `hotel_management.cpp`, `hotel_management.h` - Functions to manage hotels (rooms, availability, hotel records).
- `cab_management.cpp`, `cab_management.h` - Functions to manage cabs / transportation records and assignments.
- `billing.cpp`, `billing.h` - Billing and invoicing logic (calculating charges, printing receipts).

Note: File names are based on the workspace snapshot. Open the headers and sources to see exact function names and available operations.

## How to Build

Prerequisites:

- A C++ compiler such as MSVC (Visual Studio) or MinGW-w64 installed and available in your PowerShell `PATH`.
- Optional: `make` or `ninja` if you add a build system. This project is small enough to compile directly with a single command.

Build with Visual C++ (Developer PowerShell) example:

```powershell
cl /EHsc *.cpp
```

Build with MinGW (PowerShell):

```powershell
g++ -std=c++17 -O2 -Wall -Wextra -o custom_manag.exe *.cpp
```

If you prefer to use an IDE, open the folder in Visual Studio and create a console project that includes all `.cpp` files, or create a simple CMakeLists.txt and configure the project.

## How to Run

From PowerShell in the project directory after building:

```powershell
./custom_manag.exe
```

If you built with `cl` and the executable is `main.exe` or `a.exe`, run that filename instead.

Expected behavior:

- A console menu should appear allowing selection between customer, hotel, cab, and billing operations.
- Each module provides a set of text-based operations for creating, listing, editing, or deleting records.

## File-by-file Summary (brief)

- `main.cpp`: Starts the program and enters the main application loop.
- `menu.h` / `menu.cpp`: Menu definitions and the top-level user interface.
- `utils.h` / `utils.cpp`: Helper functions like reading input safely, formatting output, and small shared utilities.
- `customer_management.h` / `customer_management.cpp`: Customer management operations (add, view, update, remove, search).
- `hotel_management.h` / `hotel_management.cpp`: Hotel management operations (add hotels/rooms, view availability, book/cancel rooms).
- `cab_management.h` / `cab_management.cpp`: Cab/transportation management (register cab, assign driver, schedule rides).
- `billing.h` / `billing.cpp`: Generate bills, calculate totals, possibly apply taxes/discounts, and print receipts.

If you need a more detailed description of any individual function, open that file and the associated header — comments and function names will explain the exact behavior.

