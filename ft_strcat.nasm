global _ft_strcat 

_ft_strcat:
	mov			rax, rdi		; pointeur de debut de string dans rax
	mov 		rbx, rsi		; ptr de fin de string dans rbx
	mov			rcx, rax		; on garde un pointeur sur le debut de la premiere string
	jmp			firstptrmov		; appel first ptr mov

firstptrmov:
	cmp	byte	[rax], 0		; on compare la valeur et rax
	je			secondstring	; si c'est un NULL (0), on saute a la seconde string
	inc			rax				; sinon on incremente le pointeur de rax
	jmp			firstptrmov		; on recommence

secondstring:
	cmp	byte	[rbx], 0		; on compare la valeur de rbx (ptr sur la 2eme string)
	je			end				; on saute a la fin si c'est null
	mov			rdx, [rbx]		; sinon on ajoute la valeur de rbx dans le registre rdx
	mov			[rax], rdx		; on ajoute la valeur de rdx dans la rax
	inc			rax				; on augmente le pointeur rax
	inc			rbx				; on augmente le pointeur rbx
	jmp			secondstring	; on recommence

end:
	inc			rax				; on augmente le pointeur de la seconde chaine de 1
	mov	byte	[rax], 0		; on ajoute le 0 a la fin de la seconde chaine
	mov			rax, rcx		; on assigne le ptr de debut de la premiere string dans la rax
	ret							; fin de la fonction, rax est retourné

; nasm -f macho64 ft_strcat.nasm
; gcc -o test ft_strcat.o main.c
; ./test