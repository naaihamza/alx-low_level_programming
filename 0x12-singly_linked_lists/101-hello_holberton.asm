section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8    ; align the stack to 16 bytes

    ; Print "Hello, Holberton"
    mov rdi, format
    mov rsi, hello
    xor rax, rax    ; rax = 0 (for printf's return value)
    call printf

    ; Print a new line
    mov rdi, format
    mov rsi, newline
    xor rax, rax    ; rax = 0 (for printf's return value)
    call printf

    add rsp, 8    ; restore the stack pointer
    xor eax, eax    ; return 0
    ret

