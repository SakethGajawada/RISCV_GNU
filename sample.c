void newlogic(int input1, int input2,int input3, int* output1, int* output2)
{
    *output1 = (input1&input2)|input3;
    *output2 = input1|input2;
}

void read()
{
    int input1=0;
    int input2=0;
    int input3=0;
    int output1;
    int output2; 
    newlogic(input1,input2,input3,&output1,&output2); 

    printf("output1 = %d", output1); 
    printf("output2 = %d", output2); 
}

int main()
{
	read();
}
