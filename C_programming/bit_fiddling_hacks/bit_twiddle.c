#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
int convertByte_tobits(uint32_t input_byte, int size);

uint32_t byte = 0xDEADDEAF;
//1101-1110-1010-1101->1101-1110-1010-1111 
//1111-0101-0111-1011-1011-0101-0111-1011
//1111 0101 0111 1011 1011 0101 0111 1011
int main(int argc, char **argv){

    // byte = byte>>1;
    // printf("%x",byte);

    convertByte_tobits(byte,32);
    return 0;
}

//void * memcpy ( void * destination, const void * source, size_t num );
//1101 1110
int convertByte_tobits(uint32_t input_byte, int size){
    bool output_bit;
    char bit_str[33];
    for(int i=0; i<size; i++){
        // if(i%4==0 && i!=32){
        //    printf("-");     
        // }
        output_bit = input_byte & (1<<i);
       if(output_bit == 0){
           //printf("0");
           //bit_str[i]=0;
           memcpy(&bit_str[i], "0",1);
       } 
       else
       {
            memcpy(&bit_str[i], "1",1);
          //printf("1");
       }
    }
    // bit_str[33]='\0';
    printf("%s",bit_str);
    return 0;
}