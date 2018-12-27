#include "output.h"
#include "delay.h"
#include "sys.h"
#include "rc522.h"
#include "lcd.h"			       //��ʾģ��
#include "usart.h"
#include "string.h" 


int main(void)
{		

 	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
 	OUTPUT_Init();			 //���ģ���ʼ��
	uart_init(115200);				
	InitRc522();				//��ʼ����Ƶ��ģ��
	BEEP=1;
  	while(1) 
	{		
			RC522_Handel();
	
	}
	
}
			




