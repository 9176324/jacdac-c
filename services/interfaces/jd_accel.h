#ifndef __JD_ACCEL_H
#define __JD_ACCEL_H

void acc_hw_init(void);

void acc_hw_sleep(void);

void acc_hw_get(int16_t sample[3]);

#endif