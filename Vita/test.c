#include <stdio.h>

void helloMsg(void){
  printf("Hello, This is the StarBugs :)\n");
  printf("*************************\n");
  printf("*        M E N U        *\n");
  printf("*                       *\n");
  printf("* 1. Americano          *\n");
  printf("* 2. Latte              *\n");
  printf("* 3. Caffe Mocha        *\n");
  printf("* 4. Tea                *\n");
  printf("*                       *\n");
  printf("*************************\n\n");
  printf("Type your order as a number sequence on the menu.\nEx) 1132 : means Two-Americano, One-Caffe Mocha, and One-Latte.\n");
  printf("\n\n");
  printf("0(zero) can only be used for separating customers.\nEx) 442012 : means Two-Tea, One-Latte for customer1 and\nOne-Americano and One-Latte for customer2.\n");
  printf("\n\n");
}

int checkOrder(int queue){
// Write your code.
}

int power(int a, int b){
  int rst = 1;
  while(b){
    rst *=a;
    b--;
  }
  return rst;
}

void processQ(int queue, int order_len) {
// Write your code.
}

int main(void) {
  int serv_queue;
  int ret;

  helloMsg();

  while(1){
    printf("Your order? : ");
    scanf("%d", &serv_queue);

    ret = checkOrder(serv_queue);

    if(ret > 0){
      printf("Okay. please wait.(ret=%d)\n", ret);
      break;
    }else{
      printf("You can only order what is on the menu.(ret=%d)\n", ret);
    }
  }

  printf("serv_queue: %d\n", serv_queue);
  processQ(serv_queue, ret);

  return 0;
}
