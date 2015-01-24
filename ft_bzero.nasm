global _ft_bzero

_ft_bzero:
	push		rbx
	mov			rax, rdi
	mov			ebx, esi
	cmp			ebx, 8
	jge			fillzerobig
	cmp			ebx, 0
	jg			fillzero
	jmp			end

; optimisation de ouf
fillzerobig:
	mov qword	[rax], 0
	sub			ebx, 8
	add			rax, 8
	cmp			ebx, 8
	jge			fillzerobig
	cmp			ebx, 0
	jg			fillzero
	jmp			end

fillzero:
	mov byte	[rax], 0
	inc			rax
	dec			ebx
	cmp			ebx, 0
	jg			fillzero
	jmp			end

end:
	pop			rbx
	ret