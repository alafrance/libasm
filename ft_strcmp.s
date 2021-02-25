global _ft_strcmp

segment .text
_ft_strcmp:
    xor rax, rax
    xor rcx, rcx
while:
    mov r8b, [rdi + rcx]
    mov r9b, [rsi + rcx]
    cmp r8b, 0
    je end
    cmp r9b, 0
    je end
    cmp r8b, r9b
    jne end
    inc rcx
    jmp while
end:
    add rax, r8
    sub rax, r9
    ret