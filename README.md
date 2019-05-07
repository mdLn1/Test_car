# Test car movement

It is a simple publisher/subscriber example where "chatter" is the name of the topic

1. mkdir catkin_ws
2. copy src folder into catkin_ws
3. catkin_make from root workspace
4. open terminal: roscore
5. open new terminal: rosrun car_controller car_controller_node
6. open another terminal: rosrun beginner_tutorials talker

SAMPLE console ouput received from subscriber:

PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
[ INFO] [1557258253.586928074]: new throttle: [10.000000]
[ERROR] [1557258253.611412485]: Car speed :10
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
[ INFO] [1557258253.611758756]: new throttle: [10.000000]
[ERROR] [1557258253.635665441]: Car speed :10
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
PCA9685 Write Byte error: 9our to return value: -1 
[ INFO] [1557258253.635977856]: new throttle: [10.000000]
