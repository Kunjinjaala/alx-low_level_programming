section .data
    message db "Hello, Holberton", 10 ; 10 is the ASCII code for newline
    len equ $ - message

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [message]
    mov rsi, 0
    call printf

    mov rsp, rbp
    pop rbp
    ret
