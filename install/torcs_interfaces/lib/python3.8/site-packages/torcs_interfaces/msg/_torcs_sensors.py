# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torcs_interfaces:msg/TORCSSensors.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'wheel_spin_vel'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TORCSSensors(type):
    """Metaclass of message 'TORCSSensors'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('torcs_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torcs_interfaces.msg.TORCSSensors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__torcs_sensors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__torcs_sensors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__torcs_sensors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__torcs_sensors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__torcs_sensors

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TORCSSensors(metaclass=Metaclass_TORCSSensors):
    """Message class 'TORCSSensors'."""

    __slots__ = [
        '_header',
        '_angle',
        '_current_lap_time',
        '_damage',
        '_dist_from_start',
        '_dist_raced',
        '_dist_to_middle',
        '_dist_to_left',
        '_dist_to_right',
        '_fuel',
        '_gear',
        '_last_lap_time',
        '_race_pos',
        '_rpm',
        '_track_pos',
        '_wheel_spin_vel',
        '_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angle': 'double',
        'current_lap_time': 'double',
        'damage': 'double',
        'dist_from_start': 'double',
        'dist_raced': 'double',
        'dist_to_middle': 'double',
        'dist_to_left': 'double',
        'dist_to_right': 'double',
        'fuel': 'double',
        'gear': 'int8',
        'last_lap_time': 'double',
        'race_pos': 'uint8',
        'rpm': 'double',
        'track_pos': 'double',
        'wheel_spin_vel': 'sequence<double>',
        'z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle = kwargs.get('angle', float())
        self.current_lap_time = kwargs.get('current_lap_time', float())
        self.damage = kwargs.get('damage', float())
        self.dist_from_start = kwargs.get('dist_from_start', float())
        self.dist_raced = kwargs.get('dist_raced', float())
        self.dist_to_middle = kwargs.get('dist_to_middle', float())
        self.dist_to_left = kwargs.get('dist_to_left', float())
        self.dist_to_right = kwargs.get('dist_to_right', float())
        self.fuel = kwargs.get('fuel', float())
        self.gear = kwargs.get('gear', int())
        self.last_lap_time = kwargs.get('last_lap_time', float())
        self.race_pos = kwargs.get('race_pos', int())
        self.rpm = kwargs.get('rpm', float())
        self.track_pos = kwargs.get('track_pos', float())
        self.wheel_spin_vel = array.array('d', kwargs.get('wheel_spin_vel', []))
        self.z = kwargs.get('z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.angle != other.angle:
            return False
        if self.current_lap_time != other.current_lap_time:
            return False
        if self.damage != other.damage:
            return False
        if self.dist_from_start != other.dist_from_start:
            return False
        if self.dist_raced != other.dist_raced:
            return False
        if self.dist_to_middle != other.dist_to_middle:
            return False
        if self.dist_to_left != other.dist_to_left:
            return False
        if self.dist_to_right != other.dist_to_right:
            return False
        if self.fuel != other.fuel:
            return False
        if self.gear != other.gear:
            return False
        if self.last_lap_time != other.last_lap_time:
            return False
        if self.race_pos != other.race_pos:
            return False
        if self.rpm != other.rpm:
            return False
        if self.track_pos != other.track_pos:
            return False
        if self.wheel_spin_vel != other.wheel_spin_vel:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def current_lap_time(self):
        """Message field 'current_lap_time'."""
        return self._current_lap_time

    @current_lap_time.setter
    def current_lap_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_lap_time' field must be of type 'float'"
        self._current_lap_time = value

    @property
    def damage(self):
        """Message field 'damage'."""
        return self._damage

    @damage.setter
    def damage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damage' field must be of type 'float'"
        self._damage = value

    @property
    def dist_from_start(self):
        """Message field 'dist_from_start'."""
        return self._dist_from_start

    @dist_from_start.setter
    def dist_from_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_from_start' field must be of type 'float'"
        self._dist_from_start = value

    @property
    def dist_raced(self):
        """Message field 'dist_raced'."""
        return self._dist_raced

    @dist_raced.setter
    def dist_raced(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_raced' field must be of type 'float'"
        self._dist_raced = value

    @property
    def dist_to_middle(self):
        """Message field 'dist_to_middle'."""
        return self._dist_to_middle

    @dist_to_middle.setter
    def dist_to_middle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_middle' field must be of type 'float'"
        self._dist_to_middle = value

    @property
    def dist_to_left(self):
        """Message field 'dist_to_left'."""
        return self._dist_to_left

    @dist_to_left.setter
    def dist_to_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_left' field must be of type 'float'"
        self._dist_to_left = value

    @property
    def dist_to_right(self):
        """Message field 'dist_to_right'."""
        return self._dist_to_right

    @dist_to_right.setter
    def dist_to_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_right' field must be of type 'float'"
        self._dist_to_right = value

    @property
    def fuel(self):
        """Message field 'fuel'."""
        return self._fuel

    @fuel.setter
    def fuel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel' field must be of type 'float'"
        self._fuel = value

    @property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gear' field must be an integer in [-128, 127]"
        self._gear = value

    @property
    def last_lap_time(self):
        """Message field 'last_lap_time'."""
        return self._last_lap_time

    @last_lap_time.setter
    def last_lap_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_lap_time' field must be of type 'float'"
        self._last_lap_time = value

    @property
    def race_pos(self):
        """Message field 'race_pos'."""
        return self._race_pos

    @race_pos.setter
    def race_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'race_pos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'race_pos' field must be an unsigned integer in [0, 255]"
        self._race_pos = value

    @property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rpm' field must be of type 'float'"
        self._rpm = value

    @property
    def track_pos(self):
        """Message field 'track_pos'."""
        return self._track_pos

    @track_pos.setter
    def track_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'track_pos' field must be of type 'float'"
        self._track_pos = value

    @property
    def wheel_spin_vel(self):
        """Message field 'wheel_spin_vel'."""
        return self._wheel_spin_vel

    @wheel_spin_vel.setter
    def wheel_spin_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'wheel_spin_vel' array.array() must have the type code of 'd'"
            self._wheel_spin_vel = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'wheel_spin_vel' field must be a set or sequence and each value of type 'float'"
        self._wheel_spin_vel = array.array('d', value)

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value
