section .data
    format db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    sub rsp, 16

    lea rdi, [format]
    xor eax, eax
    call printf

    add rsp, 16

    mov rsp, rbp
    pop rbp
    ret
