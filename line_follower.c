#include<stdio.h>

void line_follower(int i_r,int i_l,int* o_rf,int* o_rb,int* o_lf,int*o_lb){
    if((!i_r) && (!i_l)){
        o_rf = 1;o_rb=0;o_lf=1;o_lb=0;
    }
    else if((!i_r) && (i_l)){
        o_rf = 1;o_rb=0;o_lf=0;o_lb=1;
    }
    else if((!i_l) && (i_r)) {
        o_rf = 0;o_rb=1;o_lf=1;o_lb=0;
    }
    else {
        o_rf = 0;o_rb=0;o_lf=0;o_lb=0;
    }
}

void read(){
    int input_right=0;
    int input_left=0;
    // input_right = digital_read(0);
    // input_left =  digital_read(1);
    int o_rf,o_rb,o_lf,o_lb;
    line_follower(input_right,input_left,&o_rf,&o_rb,&o_lf,&o_lb);
    // digital_write(3,o_rf);
    // digital_write(5,o_lf);
    // digital_write(4,o_rb);
    // digital_write(6,o_lb);
}

int main(){
    //assuming sensors gives 1 if it detcts white
    //sensors to detect line :     0 : right  ,  1  :  left       
    //gpio's for motors operating vehicle     3 : right_front  ,  4  :  right_back  ,  5  :  left_front,   6  :  left_back     
    while(1){
        read();
    }
    return(0);
}
