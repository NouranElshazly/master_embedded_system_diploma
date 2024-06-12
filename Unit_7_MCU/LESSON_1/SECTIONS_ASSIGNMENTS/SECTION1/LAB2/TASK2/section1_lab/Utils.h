/*
 * Utils.h
 *
 * Created: 4/25/2024 12:50:33 PM
 *  Author: User
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define READ_BIT(REG , BIT_NUM)   ((REG>>BIT_NUM) & 1)
#define SET_BIT(REG , BIT_NUM)   REG |=(1<<BIT_NUM)
#define CLEAR_BIT(REG , BIT_NUM) REG &=(~(1<<BIT_NUM))
#define TOGGEL_BIT(REG,BIT_NUM)  REG=REG^(1<<BIT_NUM)
#endif /* UTILS_H_ */