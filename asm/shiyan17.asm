assume cs:code
code segment
start:
	mov ax,code
	mov cs,ax
	mov ds,ax
	mov si,offset begin
	mov ax,0
	mov es,ax
	mov di,200h
	mov cx,offset wei - offset begin
	cld
	rep movsb
	
	cli
	mov word ptr es:[7ch*4],200h
	mov word ptr es:[7ch*4+2],0
	sti

	mov ax,4c00h
	int 21h 

begin:	
	cmp ah,2
	ja jieshu
	push dx
	push ax
	push bx
	push es
	cmp 2
	ja jieshu
	mov ah,3
du:	mov ah,2
	
	
	push ax 	;ah为功能号
	mov ax,dx
	mov bx,1440
	div bx
	push ax	;面号
	mov ax,dx
	mov bl,18
	div bl		
	inc ah
	push ax	;ah为扇区号，al为磁道号
	
	pop bx
	mov cl,bh
	mov ch,al
	pop bx
	mov dh,al
	pop bx
	mov ah,bh

	pop es	
	pop bx
	mov dl,0	;dl为驱动号
	mov al,1	;al为扇区数
	int 13h

	pop ax
	pop dx
jieshu:
	iret
	
	
	
wei:	nop
code ends
end start
