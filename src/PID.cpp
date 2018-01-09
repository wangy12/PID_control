#include "PID.h"

#include<iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  double prev_cte = p_error;

  p_error  = cte;
  i_error += cte;
  d_error  = cte - prev_cte;
}

double PID::TotalErrorSteer() {
  
  //debug
  //cout << Kp << '\t' << p_error << '\t' << Ki << '\t' << i_error << '\t' << Kd << '\t' << d_error << '\t' << endl;
  //cout << -p_error * Kp - i_error * Ki - d_error * Kd << endl;
  
  return -p_error * Kp - i_error * Ki - d_error * Kd;
  
}

/*
double PID::TotalErrorThrottle(double max_thro) {

  return max_thro - (p_error * Kp + i_error * Ki + d_error * Kd);
  
}*/


