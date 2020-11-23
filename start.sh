sudo chmod 766 /dev/input/event3
# ./torcs
# rm -rf build/
# rm -rf install/
colcon build
source ~/.bashrc
ros2 run torcs_client main
# ros2 run lkas default_build_unit
