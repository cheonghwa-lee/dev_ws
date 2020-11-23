# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torcs_interfaces:msg/TORCSCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TORCSCtrl(type):
    """Metaclass of message 'TORCSCtrl'."""

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
                'torcs_interfaces.msg.TORCSCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__torcs_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__torcs_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__torcs_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__torcs_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__torcs_ctrl

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


class TORCSCtrl(metaclass=Metaclass_TORCSCtrl):
    """Message class 'TORCSCtrl'."""

    __slots__ = [
        '_header',
        '_accel',
        '_brake',
        '_clutch',
        '_gear',
        '_steering',
        '_focus',
        '_meta',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'accel': 'double',
        'brake': 'double',
        'clutch': 'double',
        'gear': 'int8',
        'steering': 'double',
        'focus': 'double',
        'meta': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.accel = kwargs.get('accel', float())
        self.brake = kwargs.get('brake', float())
        self.clutch = kwargs.get('clutch', float())
        self.gear = kwargs.get('gear', int())
        self.steering = kwargs.get('steering', float())
        self.focus = kwargs.get('focus', float())
        self.meta = kwargs.get('meta', int())

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
        if self.accel != other.accel:
            return False
        if self.brake != other.brake:
            return False
        if self.clutch != other.clutch:
            return False
        if self.gear != other.gear:
            return False
        if self.steering != other.steering:
            return False
        if self.focus != other.focus:
            return False
        if self.meta != other.meta:
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
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel' field must be of type 'float'"
        self._accel = value

    @property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
        self._brake = value

    @property
    def clutch(self):
        """Message field 'clutch'."""
        return self._clutch

    @clutch.setter
    def clutch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clutch' field must be of type 'float'"
        self._clutch = value

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
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
        self._steering = value

    @property
    def focus(self):
        """Message field 'focus'."""
        return self._focus

    @focus.setter
    def focus(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'focus' field must be of type 'float'"
        self._focus = value

    @property
    def meta(self):
        """Message field 'meta'."""
        return self._meta

    @meta.setter
    def meta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta' field must be an unsigned integer in [0, 255]"
        self._meta = value
