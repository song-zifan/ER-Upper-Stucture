/***
 * @Author: Xieyang
 * @Date: 2023-02-23 18:51:00
 * @LastEditTime: 2023-02-23 18:51:13
 * @LastEditors: szf
 * @Description:
 * @FilePath: \ER\Usercode\user_inc\useful_constant.h
 * @@WeChat:szf13373959031
 */
#pragma once

/**
 * @brief 一些有用的常量，基本上是从 GCC 的 math.h 中复制下来的(因为 ARMCC 的库里貌似没有)
 *
 */

/* Natural log of 2 */
#define _M_LN2   0.693147180559945309417

#define MAXFLOAT 3.40282347e+38F

#define M_E      2.7182818284590452354
#define M_LOG2E  1.4426950408889634074
#define M_LOG10E 0.43429448190325182765
#define M_LN2    _M_LN2
#define M_LN10   2.30258509299404568402
#define M_PI     3.14159265358979323846

#ifndef M_PI_2
#define M_PI_2 1.57079632679489661923
#endif // !M_PI_2

#define M_PI_4     0.78539816339744830962
#define M_1_PI     0.31830988618379067154
#define M_2_PI     0.63661977236758134308
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2    1.41421356237309504880
#define M_SQRT1_2  0.70710678118654752440

#define M_TWOPI    (M_PI * 2.0)
#define M_3PI_4    2.3561944901923448370E0
#define M_SQRTPI   1.77245385090551602792981
#define M_LN2LO    1.9082149292705877000E-10
#define M_LN2HI    6.9314718036912381649E-1
#define M_SQRT3    1.73205080756887719000
#define M_IVLN10   0.43429448190325182765 /* 1 / log(10) */
#define M_LOG2_E   _M_LN2
#define M_INVLN2   1.4426950408889633870E0 /* 1 / log(2) */

/**
 * @brief id
 *
 */

/***************************VESC************************************/

#define VESC_Left_id  0x01
#define VESC_Right_id 0x02

/**************************DJI Motor********************************/

#define Motor_Pitch_id    5
#define Motor_Yaw_id      6
#define Motor_Push_id     1
#define Motor_pass_id     0
#define Motor_Overturn_id 3
#define Motor_Extend_id   4
#define Motor_Claw_id     2

/**
 * @brief 参数
 *
 */

/************************电机速度规划参数*****************************/

#define MaxAngularVelocity_Pitch    300
#define MaxAngularVelocity_Yaw      150
#define MaxAngularVelocity_Overturn 200

#define MotorAngularAcceleration    150

/************************取环——Overturn*****************************/

#define OverturnAngle_Initial 0
#define OverturnAngle         -560

/*************************取环——Extend******************************/

#define ExtendAngle_Initial    0 // todo 需要确定每次初始位置都一样
#define ExtendAngle            15100
#define ExtendAngle_back       13400

#define ExtendAngle_Transition 0

#define ExtendAngle_10         0
#define ExtendAngle_9          1700
#define ExtendAngle_8          2700
#define ExtendAngle_7          3900
#define ExtendAngle_6          5100
#define ExtendAngle_5          6400
#define ExtendAngle_4          7600
#define ExtendAngle_3          8800
#define ExtendAngle_2          10200
#define ExtendAngle_1          11200

/*************************取环——claw******************************/

#define ClawAngle_Initial 0
#define ClawAngle         -45

/*************************递环——Pass******************************/

#define Fire_Pass_Initial 0
#define Pickup_Pass       -20 // 取环的时候伸出来
#define Fire_Pass_1       10
#define Fire_Pass_2       10
#define Fire_Pass_3       10
#define Fire_Pass_4       15
#define Fire_Pass_5       15
#define Fire_Pass_6       15
#define Fire_Pass_7       15
#define Fire_Pass_8       15
#define Fire_Pass_9       15
#define Fire_Pass_10      20

/*************************递环——Extend******************************/

#define Pitch_Initial    0
#define Pitch_Fire_Ready -950

/*************************递环——Push******************************/

#define Fire_Push_Initial 0
#define Fire_Push         -480

/*************************递环——Pitch******************************/

#define Get_Pitch_1  -950
#define Get_Pitch_2  -950
#define Get_Pitch_3  -950
#define Get_Pitch_4  -900
#define Get_Pitch_5  -900
#define Get_Pitch_6  -900
#define Get_Pitch_7  -900
#define Get_Pitch_8  -850
#define Get_Pitch_9  -800
#define Get_Pitch_10 -700

/*************************射环——Yaw******************************/

#define Yaw_Initial    0
#define Yaw_Fire_Ready -400
#define Fire_Yaw_1_1   -200
#define Fire_Yaw_1_2   0
#define Fire_Yaw_2_1   0
#define Fire_Yaw_2_2   0
#define Fire_Yaw_5     0
#define Fire_Yaw_6     0
#define Fire_Yaw_7     0
#define Fire_Yaw_8     0
#define Fire_Yaw_9     0
#define Fire_Yaw_10    0

/*************************射环——Pitch******************************/

#define Fire_Pitch_1_1 -750
#define Fire_Pitch_1_2 0
#define Fire_Pitch_2_1 0
#define Fire_Pitch_2_2 0
#define Fire_Pitch_5   0
#define Fire_Pitch_6   0
#define Fire_Pitch_7   0
#define Fire_Pitch_8   0
#define Fire_Pitch_9   0
#define Fire_Pitch_10  0

/**
 * @brief 端口
 *
 */
#define htim_fire     htim8
#define huart_mavlnik huart6
#define huart_as69    huart1
#define USART_MAVLINK USART6
#define USART_AS69    USART1
