# Assembly Language Subroutine in C++ Test Project

This project demonstrates the usage of an assembly language subroutine within a C++ program. The assembly subroutine is a simple bubble sort implementation. The C++ program calls the assembly subroutine to perform the sorting operation on a predefined array.

## Project Overview

The project consists of a C++ program that includes an external assembly subroutine for bubble sort. The main objective is to showcase the integration of assembly language code within a C++ project.

## Contents

- `main.cpp`: The main C++ program that calls the assembly subroutine for bubble sort.
- `assembly_sort.asm`: Assembly language file containing the bubble sort subroutine.
- `README.md`: This readme file providing an overview of the project.

## Requirements

- A C++ compiler capable of compiling programs that include assembly code.
- Windows operating system.

## Usage

1. Clone the repository to your local machine.
2. Open the project in a compatible C++ development environment.
3. Build and run the program.

## Program Execution

The C++ program initializes an array and then calls the assembly subroutine for bubble sort. The sorted array is not displayed in this simple example but can be extended as needed.

```cpp
#include <iostream>
#include<Windows.h>
using namespace std;

extern "C" int bubbleSort();

int main()
{
    int size = 10;
    cout << "ASM ....: \n" << bubbleSort();
    system("pause");
    return 0;
}
```

## Assembly Subroutine

The assembly subroutine (`assembly_sort.asm`) contains a basic implementation of the bubble sort algorithm. The current implementation returns a fixed value (`1256`) for demonstration purposes.

```assembly
.data
swap db 0

.code 
bubbleSort proc
    mov eax, 1256
ret

bubbleSort endp
```

## Notes

- Ensure that your C++ compiler supports the integration of assembly language code.
- Modify the project as needed, including extending the sorting algorithm in assembly or displaying the sorted array in C++.
