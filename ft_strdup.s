extern _malloc
extern _ft_strlen
extern _ft_strcpy
global  _ft_strdup

segment .text

_ft_strdup:
    call _ft_strlen
    mov rdi, rax
    ret

while:

end:
    ret


