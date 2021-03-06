// Generated by gencpp from file roboteq_msgs/Command.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_MSGS_MESSAGE_COMMAND_H
#define ROBOTEQ_MSGS_MESSAGE_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboteq_msgs
{
template <class ContainerAllocator>
struct Command_
{
  typedef Command_<ContainerAllocator> Type;

  Command_()
    : commanded_velocity(0.0)  {
    }
  Command_(const ContainerAllocator& _alloc)
    : commanded_velocity(0.0)  {
  (void)_alloc;
    }



   typedef float _commanded_velocity_type;
  _commanded_velocity_type commanded_velocity;




  typedef boost::shared_ptr< ::roboteq_msgs::Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_msgs::Command_<ContainerAllocator> const> ConstPtr;

}; // struct Command_

typedef ::roboteq_msgs::Command_<std::allocator<void> > Command;

typedef boost::shared_ptr< ::roboteq_msgs::Command > CommandPtr;
typedef boost::shared_ptr< ::roboteq_msgs::Command const> CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_msgs::Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_msgs::Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboteq_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'roboteq_msgs': ['/home/dgnr/Bureau/Mini-Lab-master/minilab_hardware/src/driver/roboteq/roboteq_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_msgs::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_msgs::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_msgs::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_msgs::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_msgs::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_msgs::Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_msgs::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55127b9d38b8d2d2ecd090775b958451";
  }

  static const char* value(const ::roboteq_msgs::Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55127b9d38b8d2d2ULL;
  static const uint64_t static_value2 = 0xecd090775b958451ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_msgs::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_msgs/Command";
  }

  static const char* value(const ::roboteq_msgs::Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_msgs::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Commanded speed for the motors (rad/s)\n\
float32 commanded_velocity\n\
";
  }

  static const char* value(const ::roboteq_msgs::Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_msgs::Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.commanded_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_msgs::Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_msgs::Command_<ContainerAllocator>& v)
  {
    s << indent << "commanded_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.commanded_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_MSGS_MESSAGE_COMMAND_H
