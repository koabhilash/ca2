 LHLD 2050
         SPHL
         LHLD 2052
         XCHG
         LXI H,0000H
         LXI B,0000H
         AGAIN: DAD SP
         JNC START
         INX B
         START: DCX D
         MOV A,E
         ORA D
         JNZ AGAIN
         SHLD 2054
         MOV L,C
         MOV H,B
         SHLD 2056
         HLT
