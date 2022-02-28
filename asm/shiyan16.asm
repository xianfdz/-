;安装int7ch中断，显示输出子程序
;子程序可以清屏，设置前景色，设置背景色，向上滚动一行
;ah传递功能号，al传递颜色号
assume cs:code
code segment
start:	
	mov ax,cs
	mov ds,ax
	mov si,offset begin
	mov ax,0
	mov es,ax
	mov di,200h
	
	cld		;si+1，di+1
	mov cx,offset wei - offset begin
	rep movsb ;将ds:[si]～ds:[si+cx]内容复制到es:[di]~es:[di+cx]
	
	cli		;不响应外部中断
	mov word ptr es:[7ch*4],200h
	mov word ptr es:[7ch*4+2],0
	sti		;响应外部中断

	mov ax,4c00h
	int 21h
	 
begin:	jmp short s 	;该命令占两个字节
	table	    dw offset sub0 - offset begin + 200h	;table存储子程序入口地址
		    dw offset sub1 - offset begin + 200h
		    dw offset sub2 - offset begin + 200h
		    dw offset sub3 - offset begin + 200h
s:	push bx
	cmp ah,3	;防止ah越界
	ja likai 

	mov bl,ah
	mov bh,0
	add bx,bx
	call word ptr cs:[bx+202h]	;调用子程序
	
	
likai:	pop bx
		iret
	
	
sub0:			;子程序0，清屏	
	push es		
	push ax
	push di
	push cx
	mov ax,0b800h
	mov es,ax
	mov di,0
	mov cx,2000

s1:	mov byte ptr es:[di],' '
	add di,2
	loop s1
	pop cx
	pop di
	pop ax
	pop es
	ret
	
sub1:				;子程序1，改变前景色，al储存颜色
	push es
	push di
	push cx
	push bx
	mov bx,0b800h
	mov es,bx
	mov di,1
	mov cx,2000

s2:	and byte ptr es:[di],11111000b
	or es:[di],al
	add di,2
	loop s2
	pop bx
	pop cx
	pop di
	pop es
	ret
	
sub2:					;子程序2，改变背景色，al储存颜色
	push di
	push es
	push cx
	push ax
	mov ax,0b800h
	mov es,ax

	pop ax

	mov cl,4
	shl al,cl

	mov di,1
	mov cx,2000

s3:	and byte ptr es:[di],10001111b
	or es:[di],al
	add di,2
	loop s3

	pop cx
	pop es
	pop di

	ret

sub3:					;子程序3，向下滚动一行
	push ax
	push si
	push di
	push cx
	push es
	push ds
	mov ax,0b800h
	mov ds,ax
	mov si,160
	mov es,ax
	mov di,0
	mov cx,24*160
	cld
	rep movsb
	mov cx,80
	mov di,0

s4:	mov byte ptr es:[160*24+di],' '
	add di,2
	loop s4
	pop ds
	pop es
	pop cx
	pop di
	pop si
	pop ax
	ret
wei:	nop	
code ends
end start
