# File Opener and Character Reader (file_opener_C)

This C program, `file_opener.c`, serves as a simple utility for opening any text file in read mode and reading its contents character by character. It utilizes the C Standard Library to demonstrate the concepts of `fgetc` and `EOF`. Below is a detailed explanation of the code along with your provided lines added:

## Prerequisites

- You should have a C compiler installed on your system (e.g., GCC).
- Ensure that you have the desired text file you want to read in the same directory as this program, or provide the correct path to the file if it's located elsewhere.

## How to Use

1. Open a terminal or command prompt.

2. Compile the program using your C compiler. For example, using GCC:

   ```shell
   gcc file_opener.c -o f_opener
   ```

   This will generate an executable file named `f_opener`.

3. Run the program:

   ```shell
   ./f_opener
   ```

4. When prompted, enter the name of the text file you want to open (e.g., `books.txt`).

5. If the file exists and is successfully opened, you will see the content of the file displayed in the terminal.

## Code Explanation

```c
#include <stdio.h>
#include <stdlib.h>
#define sz 70

int main(void) {
    FILE* file_ptr;
    char buffer[sz];
    char* text[10];
    int i = 0;
    char ch;
    char filename[100]; // Added for user-defined file input

    // Prompt the user to enter the file name
    printf("Enter the name of the file you want to open: ");
    scanf("%s", filename);

    // Opening the user-defined file in read mode
    file_ptr = fopen(filename, "r");

    // Checking if the file was successfully opened
    if (file_ptr == NULL) {
        printf("ERROR 23001! File does not exist or could not be opened\n");
    } else {
        printf("########################\n");
        printf("FILE SUCCESSFULLY OPENED!\n");
        printf("########################\n");
    }

    // Reading file character by character using fgetc and EOF
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(file_ptr);
    return 0;
}
```

## Additional Information

- The program now prompts the user to enter the name of the file they want to open. This allows you to open any text file by providing its name when running the program.

- The provided lines, "# file_opener_C," "Opening any file in read mode, using C;", "Reading the file character by character;", and "Using fgetc and EOF concepts," are added to the code as comments at the beginning of the file for clarity and documentation purposes.
