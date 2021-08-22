/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>



typedef union{
    uint32_t word_val;
    uint8_t byte_val[4];
}word_t;

uint32_t my_byte = 0xDEADFEED; // FE(2)-AD(1)-DE(0)-ED(3)

int seperate_bytesUsing32bit_INT(uint32_t val){
    static uint32_t arrg_byte[4];
    arrg_byte[0] = (val>>24) & (0x00FF);
    arrg_byte[1] = val>>16 & (0x00FF);
    arrg_byte[2] = val>>8 & (0x00FF);
    arrg_byte[3] = val & (0x00FF);
    
     printf("%X\n",arrg_byte[0]) ;
     printf("%X\n",arrg_byte[1]) ;
     printf("%X\n",arrg_byte[2]) ;
     printf("%X\n",arrg_byte[3]) ;
     printf("%X\n",my_byte) ;
 
 
    printf("rearranging bytes");
    
    uint32_t arranged_byte;
    // FE
    arranged_byte |= (arrg_byte[2]<<24) & (0xFF0000); 
    //AD
     arranged_byte|= (arrg_byte[1]<<16)  & (0x000000) ;
     //DE
      arranged_byte |= (arrg_byte[0]<<8)  & (0xFF00);
      //ED
       arranged_byte |= (arrg_byte[3]) & (0xFF00);
     
     printf("rearranged bytes %04X\t\n",arranged_byte) ;
       
    return 0;
}
int seperate_bytesUsing8bit_INT(uint32_t val){
    static uint8_t arrg_byte[4];
    arrg_byte[0] = val>>24;
    arrg_byte[1] = val>>16;
    arrg_byte[2] = val>>8;
    arrg_byte[3] = val;
    
    
    printf("%X\n",arrg_byte[0]) ;
     printf("%X\n",arrg_byte[1]) ;
     printf("%X\n",arrg_byte[2]) ;
     printf("%X\n",arrg_byte[3]) ;
     printf("%X\n",my_byte) ;
    return 0;
}


int main()
{

    printf("using 32_bit container\n");
    // seperate_bytesUsing32bit_INT(my_byte);
    
    printf("using 8_bit container\n");
    // seperate_bytesUsing8bit_INT(my_byte);
    // word_t new_word;
    // new_word.word_val = 0xDEADDEAF;
    
    
//   uint32_t num = 1;
//     char *c = (char*)&num;
//     printf("%X \n", *c) ;
//     printf("%p", &c) ;
   // byte_val[0] = ((my_byte & 0x00FF));
   
//   for(int i=0;i<4;i++){
//       printf("%p \t", &(new_word.byte_val[i]));
//         printf("%X \t \n", new_word.byte_val[i]);
//   }
   

    return 0;
}


