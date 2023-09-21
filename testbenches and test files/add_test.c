
int main(){
    //assuming sensors gives 1 if it detcts white
    //sensors to detect line :     0 : right  ,  1  :  left       
    //gpio's for motors operating vehicle     3 : right_front  ,  4  :  right_back  ,  5  :  left_front,   6  :  left_back     
    int a = 5 ;
    int b= 10; 
    int c = a+b ;  
 

    	
    	int val =    c * 32  ;
    	
    	asm(
    	"or x30, x30, %0\n\t"
    	:"=r"(val)); 
  
return(0);
}



// Commands :
//   riscv32-unknown-elf-gcc -c -mabi=ilp32 -march=rv32im -ffreestanding -nostdlib -o ./led led.c

//   riscv32-unknown-elf-objdump -d led > led.txt
