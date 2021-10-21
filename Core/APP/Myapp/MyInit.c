/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"


/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void Peripheral_Set(void); 

/* Public variables-----------------------------------------------------------*/
MyInit_t MyInit = 
{
	Peripheral_Set
};

/* Private function prototypes------------------------------------------------*/      


/*
	* @name   Peripheral_Set
	* @brief  ��������
	* @param  None
	* @retval None      
*/
static void Peripheral_Set()
{
    oled_init(&hi2c2);
    PS2_Init(hspi1);
}

/********************************************************
  End Of File
********************************************************/
