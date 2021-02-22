section		.text
global		_ft_strcpy

_ft_strcpy:
			; mov rbx, entier1
			; mov rcx, entier2
			; add rbx, rcx
			mov rax, entier1

segment .data
	entier1 db 2
	entier2 db 3
segment .bss