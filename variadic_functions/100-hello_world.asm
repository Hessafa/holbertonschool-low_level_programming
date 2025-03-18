section .data
    ; Define the string to be printed
    hello db 'Hello, World', 0xA  ; 'Hello, World' followed by a newline (0xA)
    hello_len equ $ - hello        ; Calculate the length of the string

section .text
    global _start                  ; Entry point for the program

_start:
    ; System call: write(1, hello, hello_len)
    mov rax, 1                     ; syscall number for write (1)
    mov rdi, 1                     ; file descriptor (1 = stdout)
    mov rsi, hello                 ; pointer to the string to print
    mov rdx, hello_len             ; length of the string
    syscall                        ; invoke the system call

    ; System call: exit(0)
    mov rax, 60                    ; syscall number for exit (60)
    xor rdi, rdi                   ; exit code (0)
    syscall                        ; invoke the system call
