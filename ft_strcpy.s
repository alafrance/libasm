global		_ft_strcpy
section		.text

_ft_strcpy:
	xor	rcx, rcx
while:
    mov  r8b, [rsi + rcx]       
    mov  r9b, [rdi + rcx]       
	mov  [rdi + rcx], r8b
	or	r9b, r9b
    je end
	inc	rcx
    jmp while
end:
    mov rax, rdi
    ret