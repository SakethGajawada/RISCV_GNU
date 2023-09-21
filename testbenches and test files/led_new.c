
int main(){
    //assuming sensors gives 1 if it detcts white
    //sensors to detect line :     0 : right  ,  1  :  left       
    //gpio's for motors operating vehicle     3 : right_front  ,  4  :  right_back  ,  5  :  left_front,   6  :  left_back     
    int input =0 ;
    int pin_in =1 ;
    int pin_out = 2; 
    int val1 = 2 ;  
    while(1){
	asm(
	"addi x10, x30, 0\n\t"
	"and %0, x10, %1\n\t"
        :"=r"(input)         
        :"r"(val1));
    	
    	int val =    input * 32  ;
    	
    	asm(
    	"or x30, x30, %0\n\t"
    	:"=r"(val)); 
    	
    }
return(0);
}



// Commands :
//   riscv32-unknown-elf-gcc -c -mabi=ilp32 -march=rv32im -ffreestanding -nostdlib -o ./led led.c

//   riscv32-unknown-elf-objdump -d led > led.txt
