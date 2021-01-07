/*
 * user_gpio.h
 *
 *  Created on: 2018��10��21��
 *      Author: lenovo
 */

#ifndef __LED_GPIO_H__
#define __LED_GPIO_H__

#include "user_type.h"


/* �ӿ�˵��

�ܹ����������͵Ĳ�����������ͬIO�ӿڲ�ͬ�����벻ͬ�Ĳ�������ʱ�뽫��Ӧ�ĺ��
��������Ĭ�ϱ�������ƹ̼�������
    IS_PHILIPS        : �����ֵĲ�����װ
    IS_JI_ZHI_YUN     : ������wifiģ��(������)
    IS_CHANG_XIN      : ���¶�ʱ������װ(������ͳ�ƹ���)
    IS_CHANG_XIN_V1   : ���¶�ʱ������װ V1�汾

IS_PHILIPS:
	wifi״ָ̬ʾ       	:IO_13   [0:on 1:off]
	�̵�������         	:IO_14   [1:on 0:off]
	�̵���״ָ̬ʾ   	:��
	��������        		:IO_4    [����Ϊ�͵�ƽ]

IS_CHANG_XIN:
	wifi״ָ̬ʾ    	:IO_13     [1:on 0:off]
	�̵�������        	:IO_14     [1:on 0:off]
	�̵���״ָ̬ʾ    	:IO_12     [1:on 0:off]
	��������        		:IO_16     [����Ϊ�͵�ƽ]

IS_CHANG_XIN_V1:
	wifi״ָ̬ʾ    	:IO_13     [1:on 0:off]
	�̵�������        	:IO_14     [1:on 0:off]
	�̵���״ָ̬ʾ    	:IO_12     [1:on 0:off]
	��������        		:IO_4      [����Ϊ�͵�ƽ]

IS_JI_ZHI_YUN:
	wifi״ָ̬ʾ   	:IO_13     [1:on 0:off]
	�̵�������		:��
	�̵���״ָ̬ʾ    	:IO_12     [1:on 0:off]
	�̵�����������    	:IO_4      [����Ϊ�͵�ƽ]
*/

#define IS_PHILIPS      	0
#define IS_CHANG_XIN    	1
#define IS_CHANG_XIN_V1    	0


typedef enum tagLED_WIFI_STATUS
{
    LED_WIFI_STATUS_OFF              = 0,     /* wifi����ʧ�ܣ����� */
    LED_WIFI_STATUS_ON               = 1,     /* wifi������/APģʽ��ʱ����ͬ�������� */
    LED_WIFI_STATUS_FIND_WIFI        = 2,     /* Ѱ��wifi�ȵ�,��˸���2s */
    LED_WIFI_STATUS_SYNC_TIME        = 3,     /* APģʽ�µȴ�ͬ��ʱ��,��˸���2s */
    LED_WIFI_STATUS_CONNECTTING      = 4,     /* ��������wifi�ȵ�,��˸���1s*/
    LED_WIFI_STATUS_SET_AP           = 5,     /* ͨ��������wifiģʽ����ΪAPģʽ����˸���0.2s */
    LED_WIFI_STATUS_SET_STA          = 6,     /* ͨ��������wifiģʽ����Ϊstationģʽ������  */

    LED_WIFI_STATUS_BUFF             = 0xFF
}LED_WIFI_STATUS_E;


VOID LED_GpioInit( VOID );
UINT32 LED_GetKeyStatus( VOID );

VOID LED_RelayOn( VOID );
VOID LED_RelayOff( VOID );


#endif /* __LED_GPIO_H__ */
