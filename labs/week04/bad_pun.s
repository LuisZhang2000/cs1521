main:
    la  $a0, string #get addr of string
    li	$v0, 4      #4 is print string syscall
    syscall

    jr  $ra         #return
    
.data
    
    string: .asciiz "I MIPS you!\n"