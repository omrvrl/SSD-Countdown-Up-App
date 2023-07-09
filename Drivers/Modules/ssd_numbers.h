/*
 * ssd_numbers.h
 *
 * Seven Segment Display numbers count down count up application
 *
 *  Created on: Feb 9, 2023
 *      Author: omer varol
 *      pinout must be as follows:
 *
 *
 *
 */


#ifndef MODULES_SSD_NUMBERS_H_
#define MODULES_SSD_NUMBERS_H_

/*initialize pin for ssd*/
void ssd_init(void);
/*send number that you want to display */
void number_on(uint32_t number);
/*reset number that you want to not display*/
void number_off();
/*count down 9 - 0 */
void count_down(uint32_t speed);
/*count up 0 - 9  */
void count_up(uint32_t speed);





#endif /* MODULES_SSD_NUMBERS_H_ */
