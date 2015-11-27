// Generated by gencpp from file asr_usercommand/Command.msg
// DO NOT EDIT!


#ifndef ASR_USERCOMMAND_MESSAGE_COMMAND_H
#define ASR_USERCOMMAND_MESSAGE_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace asr_usercommand
{
template <class ContainerAllocator>
struct Command_
{
  typedef Command_<ContainerAllocator> Type;

  Command_()
    : command()  {
    }
  Command_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;




  typedef boost::shared_ptr< ::asr_usercommand::Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::asr_usercommand::Command_<ContainerAllocator> const> ConstPtr;

}; // struct Command_

typedef ::asr_usercommand::Command_<std::allocator<void> > Command;

typedef boost::shared_ptr< ::asr_usercommand::Command > CommandPtr;
typedef boost::shared_ptr< ::asr_usercommand::Command const> CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::asr_usercommand::Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::asr_usercommand::Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace asr_usercommand

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'asr_usercommand': ['/home/turtlebot2/asr_ws/src/asr_usercommand/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::asr_usercommand::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::asr_usercommand::Command_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asr_usercommand::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asr_usercommand::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asr_usercommand::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asr_usercommand::Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::asr_usercommand::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ::asr_usercommand::Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::asr_usercommand::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "asr_usercommand/Command";
  }

  static const char* value(const ::asr_usercommand::Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::asr_usercommand::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command \n\
";
  }

  static const char* value(const ::asr_usercommand::Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::asr_usercommand::Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::asr_usercommand::Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::asr_usercommand::Command_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASR_USERCOMMAND_MESSAGE_COMMAND_H
