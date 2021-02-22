section .text
      global _add
_add:
		mov rcx, 2
		mov rax, 40
		add rax, rcx
		ret