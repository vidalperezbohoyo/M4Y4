# generated from rosidl_generator_py/resource/_idl.py.em
# with input from maya_msgs:msg/Sound.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sound(type):
    """Metaclass of message 'Sound'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DO': 0,
        'RE': 1,
        'MI': 2,
        'FA': 3,
        'SOL': 4,
        'LA': 5,
        'SI': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('maya_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'maya_msgs.msg.Sound')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sound
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sound
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sound
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sound
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sound

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DO': cls.__constants['DO'],
            'RE': cls.__constants['RE'],
            'MI': cls.__constants['MI'],
            'FA': cls.__constants['FA'],
            'SOL': cls.__constants['SOL'],
            'LA': cls.__constants['LA'],
            'SI': cls.__constants['SI'],
        }

    @property
    def DO(self):
        """Message constant 'DO'."""
        return Metaclass_Sound.__constants['DO']

    @property
    def RE(self):
        """Message constant 'RE'."""
        return Metaclass_Sound.__constants['RE']

    @property
    def MI(self):
        """Message constant 'MI'."""
        return Metaclass_Sound.__constants['MI']

    @property
    def FA(self):
        """Message constant 'FA'."""
        return Metaclass_Sound.__constants['FA']

    @property
    def SOL(self):
        """Message constant 'SOL'."""
        return Metaclass_Sound.__constants['SOL']

    @property
    def LA(self):
        """Message constant 'LA'."""
        return Metaclass_Sound.__constants['LA']

    @property
    def SI(self):
        """Message constant 'SI'."""
        return Metaclass_Sound.__constants['SI']


class Sound(metaclass=Metaclass_Sound):
    """
    Message class 'Sound'.

    Constants:
      DO
      RE
      MI
      FA
      SOL
      LA
      SI
    """

    __slots__ = [
        '_tone',
    ]

    _fields_and_field_types = {
        'tone': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tone = kwargs.get('tone', int())

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
        if self.tone != other.tone:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tone(self):
        """Message field 'tone'."""
        return self._tone

    @tone.setter
    def tone(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tone' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tone' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tone = value
