section .data
    msg db 'Hello, World', 10  ; "Hello, World" string with newline (10)

section .text
    global _start

_start:
    ; write system call (syscall number 1)
    mov rax, 1            ; syscall number for write
    mov rdi, 1            ; file descriptor 1 (stdout)
    mov rsi, msg          ; pointer to the message
    mov rdx, 14           ; length of the message (13 characters + newline)
    syscall               ; make the system call

    ; exit system call (syscall number 60)
    mov rax, 60           ; syscall number for exit
    xor rdi, rdi          ; exit code 0
    syscall               ; make the system call
