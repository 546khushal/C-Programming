/*
    =========================
    File Handling in C
    =========================

    What is a File in C?
    -> A file is used to store data persistently on a disk.
    -> It enables us to perform operations like creating, reading, writing, and appending data to files.
    -> File handling in C provides a way to manipulate and manage data using functions.

    -------------------------------------------------------
    Types of Files in C:
    1. **Text Files**:
       - Stores data as plain text (ASCII characters).
       - Extension: `.txt`
       - Can be created or modified by any text editor.
       - Suitable for character or line-based data operations.

    2. **Binary Files**:
       - Stores data in binary format (0's and 1's).
       - Typically used to store numeric or non-textual data.
       - Faster to read and write compared to text files.
       - More space-efficient than text files.

    -------------------------------------------------------
    Methods of Reading and Writing Files:
       -------------------------------------------
        Operation           Text File       Binary File
       -------------------------------------------
        Read Char           fgetc           fread
        Write Char          fputc           fwrite
        Read Line           fgets           fread
        Write Line          fputs           fwrite
        Format Data         fscanf          fread
        Write Format        fprintf         fwrite
       -------------------------------------------

    -------------------------------------------------------
    File Opening Modes:
    -------------------
    A file must be opened before performing any operations on it.
    Use `fopen("filename", "mode")` to open a file in the specified mode.

    1. Modes for Text Files:
       - "r" : Open for reading (file must exist).
       - "w" : Open for writing (creates file if it doesn't exist, overwrites otherwise).
       - "a" : Open for appending (creates file if it doesn't exist, appends data to the end otherwise).

    2. Modes for Binary Files:
       - "rb" : Open for reading in binary mode.
       - "wb" : Open for writing in binary mode.
       - "ab" : Open for appending in binary mode.

    3. Combined Modes for Text and Binary Files:
       - "r+" : Open for both reading and writing (text mode).
       - "w+" : Open for both reading and writing, overwrites the file.
       - "a+" : Open for both reading and appending.

       - "rb+" : Open for both reading and writing (binary mode).
       - "wb+" : Open for both reading and writing, overwrites the binary file.
       - "ab+" : Open for both reading and appending in binary mode.

    -------------------------------------------------------
    Basic Operations on Files:
    --------------------------
    1. Open a file:
       Use `FILE *f = fopen("filename", "mode");`.

    2. Read/Write data:
       - Use functions like `fgetc`, `fputc`, `fgets`, `fputs`, `fscanf`, `fprintf`, `fread`, and `fwrite`.

    3. Close the file:
       Use `fclose(f)` to release the file resource.

    -------------------------------------------------------
    Example Operations:
    -------------------
    Text File Example:
    - Writing to a file:
        FILE *f = fopen("example.txt", "w");
        fprintf(f, "Hello, World!");
        fclose(f);

    - Reading from a file:
        FILE *f = fopen("example.txt", "r");
        char buffer[100];
        fgets(buffer, 100, f);
        printf("Content: %s", buffer);
        fclose(f);

    Binary File Example:
    - Writing to a file:
        FILE *f = fopen("data.bin", "wb");
        int num = 42;
        fwrite(&num, sizeof(int), 1, f);
        fclose(f);

    - Reading from a file:
        FILE *f = fopen("data.bin", "rb");
        int num;
        fread(&num, sizeof(int), 1, f);
        printf("Number: %d", num);
        fclose(f);

    -------------------------------------------------------
    Notes:
    - Always check if the file pointer is `NULL` before performing operations.
    - Use proper error handling to manage file-related errors (e.g., file not found).
    - Remember to close the file after all operations to prevent resource leakage.

*/
