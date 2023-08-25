#include "delay.h"
/** 
 **  @brief    通用函数
 **  @author   QIU
 **  @data     2023.08.23
 **/

/*-------------------------------------------------------------------*/

/**
 **  @brief   延时函数(10us)
 **  @param   t:0~65535，循环一次约10us
 **  @retval  无
 **/
void delay_10us(u16 t){
	while(t--);
}


/**
 **  @brief   延时函数（ms）
 **  @param   t:0~65535,单位ms
 **  @retval  无
 **/
void delay_ms(u16 t){
	while(t--){
		delay_10us(100);
	}
}
