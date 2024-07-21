/*
 * InvertedControl.hpp
 *
 *  Created on: 2024/07/20
 *      Author: SHIMOTORI Haruki
 */

#ifndef INC_INVERTEDCONTROL_HPP_
#define INC_INVERTEDCONTROL_HPP_

#include "Motor.hpp"
#include "Encoder.hpp"
#include "IMU.hpp"
#include "globalDefine.h"

class InvertedControl{
private:
	float kp_, ki_, kd_;
	bool i_reset_flag_;
	bool processing_flag_;
	float ratio_;
	double pre_P_[4];
	double pre_theta_, U_, W_;
	double estimated_robot_theta_;
	double P_[4];

	DriveMotor *motor_;
	Encoder *encoder_;
	IMU *imu_;

	float calcError();
	void pid();
	double estimateRobotAngle(double dt, double omega_offset, const double pre_P[4],
                         double pre_theta, double U, double W, double omega,
                         double theta, double *estimated_robot_theta,
                         double P[4]);

public:
	InvertedControl(DriveMotor *, Encoder *, IMU *);
	void flip();
	void setPIDGain(float, float, float);
	void start();
	void stop();


};




#endif /* INC_INVERTEDCONTROL_HPP_ */
