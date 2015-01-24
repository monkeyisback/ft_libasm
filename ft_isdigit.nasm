global _ft_isdigit

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

_ft_isdigit:
	mov			eax, edi	; 32 bit register
	cmp			eax, 48
	jl			endfalse	; < 48 = false
	cmp			eax, 57
	jle			endtrue		; <= 57 = true
	jmp			endfalse	; false

endtrue:
	mov			eax, 1
	ret

endfalse:
	mov			eax, 0
	ret