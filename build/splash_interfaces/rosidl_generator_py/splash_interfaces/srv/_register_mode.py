# generated from rosidl_generator_py/resource/_idl.py.em
# with input from splash_interfaces:srv/RegisterMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterMode_Request(type):
    """Metaclass of message 'RegisterMode_Request'."""

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
            module = import_type_support('splash_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'splash_interfaces.srv.RegisterMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterMode_Request(metaclass=Metaclass_RegisterMode_Request):
    """Message class 'RegisterMode_Request'."""

    __slots__ = [
        '_factory',
        '_mode_configuration',
        '_name_space',
    ]

    _fields_and_field_types = {
        'factory': 'string',
        'mode_configuration': 'string',
        'name_space': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.factory = kwargs.get('factory', str())
        self.mode_configuration = kwargs.get('mode_configuration', str())
        self.name_space = kwargs.get('name_space', str())

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
        if self.factory != other.factory:
            return False
        if self.mode_configuration != other.mode_configuration:
            return False
        if self.name_space != other.name_space:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def factory(self):
        """Message field 'factory'."""
        return self._factory

    @factory.setter
    def factory(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'factory' field must be of type 'str'"
        self._factory = value

    @property
    def mode_configuration(self):
        """Message field 'mode_configuration'."""
        return self._mode_configuration

    @mode_configuration.setter
    def mode_configuration(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode_configuration' field must be of type 'str'"
        self._mode_configuration = value

    @property
    def name_space(self):
        """Message field 'name_space'."""
        return self._name_space

    @name_space.setter
    def name_space(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name_space' field must be of type 'str'"
        self._name_space = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterMode_Response(type):
    """Metaclass of message 'RegisterMode_Response'."""

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
            module = import_type_support('splash_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'splash_interfaces.srv.RegisterMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterMode_Response(metaclass=Metaclass_RegisterMode_Response):
    """Message class 'RegisterMode_Response'."""

    __slots__ = [
        '_ok',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())

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
        if self.ok != other.ok:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value


class Metaclass_RegisterMode(type):
    """Metaclass of service 'RegisterMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('splash_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'splash_interfaces.srv.RegisterMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__register_mode

            from splash_interfaces.srv import _register_mode
            if _register_mode.Metaclass_RegisterMode_Request._TYPE_SUPPORT is None:
                _register_mode.Metaclass_RegisterMode_Request.__import_type_support__()
            if _register_mode.Metaclass_RegisterMode_Response._TYPE_SUPPORT is None:
                _register_mode.Metaclass_RegisterMode_Response.__import_type_support__()


class RegisterMode(metaclass=Metaclass_RegisterMode):
    from splash_interfaces.srv._register_mode import RegisterMode_Request as Request
    from splash_interfaces.srv._register_mode import RegisterMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
