global _ft_isalnum

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

_ft_isalnum:
	mov			eax, edi	; 32 bit register
	cmp			eax, 48
	jl			endfalse	; < 48 = false
	cmp			eax, 57
	jle			endtrue		; <= 57 = true
	cmp			eax, 65
	jl			endfalse	; < 65 = false
	cmp			eax, 90
	jle			endtrue		; <= 90 = true
	cmp			eax, 97
	jl			endfalse	; < 97 = false
	cmp			eax, 122
	jle			endtrue		; <= 122 = true
	jmp			endfalse	; > 122 = false

endtrue:
	mov			eax, 1
	ret

endfalse:
	mov			eax, 0
	ret