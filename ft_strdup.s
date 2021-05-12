section	.text
	global	ft_strdup
	extern	__errno_location
	extern	ft_strlen
	extern	ft_strcpy
	extern	malloc

ft_strdup:
	push	rdi
	call	ft_strlen
	mov		rdi, rax
	inc		rdi
	call	malloc wrt ..plt
	cmp		rax, 0
	jl		error
	mov		rdi, rax
	pop		rsi
	call	ft_strcpy
	ret

error:
	neg		rax
	mov		rdx, rax
	call	__errno_location wrt ..plt
	mov		[rax], rdx
	mov		rax, -1
	ret
