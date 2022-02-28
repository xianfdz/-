;实验16测试程序
assume cs:code
code segment
    mov ah,1    ;测试子程序1，改变前景色，al储存颜色,1为红，2为绿，3为蓝
    mov al,3
    int 7ch
    call delay  ;延迟，便于观察变化

    mov ah,2    ;测试子程序2，改变背景色，al储存颜色,1为红，2为绿，3为蓝
    mov al,2
    int 7ch
    call delay

    mov ah,3    ;测试子程序3，向下滚动一行
    int 7ch
    call delay

    mov ah,0    ;测试子程序0，清屏
    int 7ch
    call delay

    mov ax,4c00h
    int 21h
delay:
    push cx
    mov cx,30h
sp0:                ;循环30h*0ffffh次
    push cx
    mov cx,0ffffh
sp1:
    loop sp1        
    pop cx
    loop sp0
    pop cx
    ret             ;返回主程序，相当于pop ip
code ends
end 
