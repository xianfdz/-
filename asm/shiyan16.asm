;��װint7ch�жϣ���ʾ����ӳ���
;�ӳ����������������ǰ��ɫ�����ñ���ɫ�����Ϲ���һ��
;ah���ݹ��ܺţ�al������ɫ��
assume cs:code
code segment
start:	
	mov ax,cs
	mov ds,ax
	mov si,offset begin
	mov ax,0
	mov es,ax
	mov di,200h
	
	cld		;si+1��di+1
	mov cx,offset wei - offset begin
	rep movsb ;��ds:[si]��ds:[si+cx]���ݸ��Ƶ�es:[di]~es:[di+cx]
	
	cli		;����Ӧ�ⲿ�ж�
	mov word ptr es:[7ch*4],200h
	mov word ptr es:[7ch*4+2],0
	sti		;��Ӧ�ⲿ�ж�

	mov ax,4c00h
	int 21h
	 
begin:	jmp short s 	;������ռ�����ֽ�
	table	    dw offset sub0 - offset begin + 200h	;table�洢�ӳ�����ڵ�ַ
		    dw offset sub1 - offset begin + 200h
		    dw offset sub2 - offset begin + 200h
		    dw offset sub3 - offset begin + 200h
s:	push bx
	cmp ah,3	;��ֹahԽ��
	ja likai 

	mov bl,ah
	mov bh,0
	add bx,bx
	call word ptr cs:[bx+202h]	;�����ӳ���
	
	
likai:	pop bx
		iret
	
	
sub0:			;�ӳ���0������	
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
	
sub1:				;�ӳ���1���ı�ǰ��ɫ��al������ɫ
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
	
sub2:					;�ӳ���2���ı䱳��ɫ��al������ɫ
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

sub3:					;�ӳ���3�����¹���һ��
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
