#include "led.h"

/** 
 **  @brief    LED控制程序
 **  @author   QIU
 **  @data     2023.08.23
 **/

/*-------------------------------------------------------------------*/


/**
 **  @brief  指定某个LED亮
 **  @param  pos: 位置(1~8)
 **  @retval 无
 **/
void led_on(u8 pos){
	LED_PORT &= ~(0x01<<(pos-1));
}


/**
 **  @brief  指定某个LED灭
 **  @param  pos: 位置(1~8)
 **  @retval 无
 **/
void led_off(u8 pos){
	LED_PORT |= 0x01<<(pos-1);
}


/**
 **  @brief   LED流水灯
 **  @param   time 延时时间
 **  @retval  无
 **/
void led_stream(u16 time){
	u8 i;
	for(i=0;i<8;i++){
		led_on(i+1);
		delay_10us(time);
	}
	
	// 全部熄灭
	for(i=0;i<8;i++){
		led_off(i+1);
	}
}


/**
 **  @brief   LED跑马灯
 **  @param   time 延时时间
 **  @retval  无
 **/
void led_run(u16 time){
	u8 i;
	for(i=0;i<8;i++){
		led_on(i+1);
		delay_10us(time);
		led_off(i+1);
	}
}
