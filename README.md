## CarND-Controls-PID

### Steering

A PID is implemented without twiddle. It controls the vehicle on the driveway with throttle fixed to 0.4.

### Thorttle

The speed can be a large value on straight roads and it decreases when curves appear. Therefore, the greater the steer value, the smaller the throttle value. Here, speed is not used in the PID of throttle, instead, the steer value is used.

### Parameter tuning

Initial values of PIDs and the maximum throttle value are tuned. 
