#include "led.h"
/** 
 **  @brief    仅提供一个demo
 **  @author   QIU
 **  @data     2023.08.23
 **/

/*-------------------------------------------------------------------*/

void main(){
	// 点亮一颗LED
	//led_on(2); 
	while(1){

		// 流水灯
		//led_stream(50000);  
		
		// 跑马灯
		led_run(50000);  
	}
}
