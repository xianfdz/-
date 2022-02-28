assume cs:code
code segment
    option1: db '1) reset pc', 0
    option2: db '2) start system', 0
    option3: db '3) clock', 0
    option4: db '4) set clock', 0
    
    start:
        mov bp, 0
        mov bx, offset option1
        call printf
        
        mov bp, 160
        mov bx, offset option2
        call printf
        
        mov bp, 320
        mov bx, offset option3
        call printf
        
        mov bp, 480
        mov bx, offset option4
        call printf
        
        mov ax, 4c00h
        int 21h
    ; 显示以 0 结尾字符串方法
    ; bx：字符串的偏移地址
    ; bp：字符串显示位置的偏移地址
    printf:
        mov ax, 0b800h
        mov es, ax
        mov si, 0
        mov ch, 0
        va: mov cl, cs:[bx]
        jcxz ok
        mov es:[si + bp], cl
        add si, 2
        inc bx
        jmp va
        ok: ret      
code ends
end start