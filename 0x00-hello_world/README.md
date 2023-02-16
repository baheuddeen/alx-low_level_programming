Steps of compilation:

1- Preprocessor
The first thing that GCC makes is run the PRE-PROCESSOR. It takes the source code, removes the comments, includes headers, and replaces macros with code ( keep reading to understand these). You can ask the preprocessor to stop at the end of this stage with the flag “-E”.
`$gcc -E file.c`

2. Compiling
--takes preprocessed code and generate Assemly code--
The output of the preprocessor is received and transformed in assembly code.
A human-readable language, a little bit harder than C. Let's see an example of the same function written in C, and written in assembly:
'at example.s
.file   "example.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $1, %eax
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
        .section        .note.GNU-stack,"",@progbits'
to generate this file use 
`$gcc -S filename.c -o 'name' .s`

3- Assembly

The assembler translates the assembly code into binary.
`$gcc -c filename.c -o 'name' .o`

to see the binary code 
`xxd -b name.o`

4-Linker 