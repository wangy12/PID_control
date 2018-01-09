## CarND-Controls-PID


### Introduction

The purpose of this project was to "build a PID controller and tune the PID hyperparameters by applying the general processing flow as described in the lessons," and to "test your solution on the simulator!" The simulator provides crosstrack error (CTE), speed, and steering angle data via local websocket. The PID (proportional/integral/differential) controller must respond with steering and throttle commands to drive the car reliably around the simulator track.

### Steering

A PID is implemented without twiddle. It controls the vehicle on the driveway with throttle fixed to 0.4 when the flag "PID_thro" is set to 0.

### Thorttle

Two PIDs are implemented for steering and speed when the flag "PID_thro" is set to 1.

The speed can be a large value on straight roads and it decreases when curves appear. Therefore, the greater the steer value, the smaller the throttle value. Here, speed is not used in the PID of throttle, instead, the steer value is used.

### Hyperparameter tuning

Initial values of PIDs and the maximum throttle value are tuned. 

### Describe the effect each of the P, I, D components 

A proportional–integral–derivative controller (PID controller or three term controller) is a control loop feedback mechanism widely used in industrial control systems and a variety of other applications requiring continuously modulated control.

A PID controller continuously calculates an error value as the difference between a desired setpoint (SP) and a measured process variable (PV) and applies a correction based on proportional, integral, and derivative terms (denoted P, I, and D respectively) which give the controller its name.


In this project, a PID controller maneuvers the vehicle around the track. The error is crosstrack error (CTE).

The P, or "proportional", component had the most directly observable effect on the car's behavior. It causes the car to steer proportional (and opposite) to the car's distance from the lane center (which is the CTE). However, using P only (P controller) leads to the vehicle oscillate around the lane center.

The D, or "differential", component counteracts the P component's tendency to oscillate and overshoot the center line. A properly tuned D parameter will cause the car to approach the center line smoothly without oscillation.

The I, or "integral", component counteracts a bias in the CTE which prevents the PD controller from reaching the center line. This bias can take several forms, such as a steering drift (as in the Control unit lessons).

### Video result


https://youtu.be/tDvJ9upu3Xg

