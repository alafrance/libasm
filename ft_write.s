	global    _ft_write
	section   .text
_ft_write:
	mov			rax, 0x02000004
	mov			rdi, 1
	mov			rsi, message
	mov			rdx, 13
	syscall
	mov			rax, 0x02000001
	mov			rdi, 0
	syscall 
section   .data
message:  
	db        "Hello, World", 10