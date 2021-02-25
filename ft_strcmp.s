global _ft_strcmp

segment .text
_ft_strcmp:
    xor rax, rax
    xor rcx, rcx
while:
    mov r8b, [rdi + rcx]
    mov r9b, [rsi + rcx]
    or r8b, r8b
    je end
    or r9b, r9b
    je end
    cmp r8b, r9b
    jne end
    inc rcx
    jmp while
end:
    add rax, r8
    sub rax, r9
    ret