global			_ft_write
section			.text
_ft_write:
	mov			rax, 0x02000004
	mov			rdi, rdi
	mov			rsi, rsi
	mov			rdx, rdx
	syscall
	mov			rax, 0x02000001
	mov			rdi, 0
	syscall