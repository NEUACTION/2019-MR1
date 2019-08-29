/****************************************Copyright (c)****************************************************
**
**                                 http://www.powermcu.com
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               app_cfg.h
** Descriptions:            ucosii configuration
**
**--------------------------------------------------------------------------------------------------------
** Created by:              AVRman
** Created date:            2010-11-9
** Version:                 v1.0
** Descriptions:            The original version
**
**--------------------------------------------------------------------------------------------------------
** Modified by:
** Modified date:
** Version:
** Descriptions:
**
*********************************************************************************************************/

#ifndef  __APP_CFG_H__
#define  __APP_CFG_H__
#include  <os_cpu.h>
/*
*********************************************************************************************************
*                                       MODULE ENABLE / DISABLE
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                              TASKS NAMES
*********************************************************************************************************
*/
extern  void  App_Task(void);

static  void  App_TaskStart(void);
static 	void  ConfigTask(void);
static 	void  WalkTask(void);


/*
*********************************************************************************************************
*                                            TASK PRIORITIES
*********************************************************************************************************
*/

#define	APP_TASK_START_PRIO							10u
#define	Config_TASK_START_PRIO					11u
#define	Walk_TASK_PRIO									13u
#define	VELCRL_TASK_PRIO								12u
#define	SHOOT_TASK_PRIO									14u
#define	SELFCHECK_TASK_PRIO							20u

/*
*********************************************************************************************************
*                                            TASK STACK SIZES
*                             Size of the task stacks (# of OS_STK entries)
*********************************************************************************************************
*/
#define	APP_TASK_START_STK_SIZE					256u
#define	Config_TASK_START_STK_SIZE			256u
#define	Walk_TASK_STK_SIZE							1024u
#define	VELCRL_TASK_STK_SIZE						1024u
#define	SELFCHECK_TASK_STK_SIZE					1024u
#define	SHOOT_TASK_STK_SIZE							1024u

/*
*********************************************************************************************************
*                                            TASK STACK
*
*********************************************************************************************************
*/



/*
*********************************************************************************************************
*                                                  LIB
*********************************************************************************************************
*/



#endif

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

