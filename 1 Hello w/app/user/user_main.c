/*
 * user_main.c
 *
 *  Created on: 2015年7月13日
 *      Author: Administrator
 */
#include "driver/uart.h"
void user_init()
{
	uart_init(115200,115200);
	uart0_sendStr("\r\nHello World\r\n");
	uart0_sendStr("\r\nHello hhh \r\n");
}
void user_rf_pre_init(){}

//uart_init  ---->  system_os_task(uart_recvTask, uart_recvTaskPrio, uart_recvTaskQueue, uart_recvTaskQueueLen);
// 现在选择从UART1输出
