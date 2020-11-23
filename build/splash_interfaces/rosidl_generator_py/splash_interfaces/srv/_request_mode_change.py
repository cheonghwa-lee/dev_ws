# generated from rosidl_generator_py/resource/_idl.py.em
# with input from splash_interfaces:srv/RequestModeChange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestModeChange_Request(type):
    """Metaclass of message 'RequestModeChange_Request'."""

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
                'splash_interfaces.srv.RequestModeChange_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__request_mode_change__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__request_mode_change__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__request_mode_change__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__request_mode_change__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__request_mode_change__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestModeChange_Request(metaclass=Metaclass_RequestModeChange_Request):
    """Message class 'RequestModeChange_Request'."""

    __slots__ = [
        '_factory',
        '_event',
    ]

    _fields_and_field_types = {
        'factory': 'string',
        'event': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.factory = kwargs.get('factory', str())
        self.event = kwargs.get('event', str())

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
        if self.event != other.event:
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
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'event' field must be of type 'str'"
        self._event = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestModeChange_Response(type):
    """Metaclass of message 'RequestModeChange_Response'."""

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
                'splash_interfaces.srv.RequestModeChange_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__request_mode_change__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__request_mode_change__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__request_mode_change__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__request_mode_change__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__request_mode_change__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RequestModeChange_Response(metaclass=Metaclass_RequestModeChange_Response):
    """Message class 'RequestModeChange_Response'."""

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


class Metaclass_RequestModeChange(type):
    """Metaclass of service 'RequestModeChange'."""

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
                'splash_interfaces.srv.RequestModeChange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__request_mode_change

            from splash_interfaces.srv import _request_mode_change
            if _request_mode_change.Metaclass_RequestModeChange_Request._TYPE_SUPPORT is None:
                _request_mode_change.Metaclass_RequestModeChange_Request.__import_type_support__()
            if _request_mode_change.Metaclass_RequestModeChange_Response._TYPE_SUPPORT is None:
                _request_mode_change.Metaclass_RequestModeChange_Response.__import_type_support__()


class RequestModeChange(metaclass=Metaclass_RequestModeChange):
    from splash_interfaces.srv._request_mode_change import RequestModeChange_Request as Request
    from splash_interfaces.srv._request_mode_change import RequestModeChange_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
