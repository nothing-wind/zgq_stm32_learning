/*
 * beeper.h
 *
 *  Created on: Oct 6, 2024
 *      Author: 34280
 */

#ifndef BSP_BEEPER_BEEPER_H_
#define BSP_BEEPER_BEEPER_H_

#define BEEPER(x) {x ? HAL_GPIO_WritePin(BEEPER_GPIO_Port, BEEPER_Pin, GPIO_PIN_RESET) : \
		HAL_GPIO_WritePin(BEEPER_GPIO_Port, BEEPER_Pin, GPIO_PIN_SET);}

#endif /* BSP_BEEPER_BEEPER_H_ */
