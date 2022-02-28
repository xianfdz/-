assume cs:code
code segment
start:	
	mov dx,1300
	mov bx,0
	mov ax,0b800h
	mov es,ax
	mov ah,1
	int 7ch
	
	mov dx,1300
	mov bx,0
	mov ax,0b800h
	mov es,ax
	mov ah,0
	int 7ch
	mov ax,4c00h
	int 21h
code ends
end start
