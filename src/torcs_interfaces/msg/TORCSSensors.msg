std_msgs/Header header
# Angle between the car direction and the direction of the track axis [-PI,PI] in rad
float64 angle
# Time elapsed during current lap in seconds
float64 current_lap_time
# Current damage of the car (the higher is the value the higher is the damage)
float64 damage
# Distance of the car from the start line along the track line
float64 dist_from_start
# Distance covered by the car from the beginning of the race
float64 dist_raced
# Distance to middle
float64 dist_to_middle
# Distance to left
float64 dist_to_left
# Distance to right
float64 dist_to_right

# Current fuel level
float64 fuel
# Current gear: -1 is reverse, 0 is neutral and the gear from 1 to 6
int8 gear
# Time to complete the last lap
float64 last_lap_time
# Position in the race with respect to other cars
uint8 race_pos
# Number of rotation per minute of the car engine
float64 rpm
# Distance between the car and the track axis. The value is
# normalized w.r.t to the track width: it is 0 when car is on
# the axis, -1 when the car is on the right edge of the track
# and +1 when it is on the left edge of the car. Values greater
# than 1 or smaller than -1 mean that the car is outside of
# the track.
float64 track_pos
# Vector of 4 sensors representing the rotation speed of
# wheels in radians
float64[] wheel_spin_vel
# Distance of the car mass center from the surface of the track
# along the Z axis in meters
float64 z
