/*
 * software_timer.c
 *
 *  Created on: Oct 12, 2022
 *      Author: USER
 */

int timer1_flag =0;
int timer1_counter = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag=0;
}

void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag=1;
		}
	}
}
