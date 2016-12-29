// Generated by gencpp from file ar_pose/ARMarker.msg
// DO NOT EDIT!


#ifndef AR_POSE_MESSAGE_ARMARKER_H
#define AR_POSE_MESSAGE_ARMARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseWithCovariance.h>

namespace ar_pose
{
template <class ContainerAllocator>
struct ARMarker_
{
  typedef ARMarker_<ContainerAllocator> Type;

  ARMarker_()
    : header()
    , id(0)
    , pose()
    , confidence(0)  {
    }
  ARMarker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , pose(_alloc)
    , confidence(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint32_t _confidence_type;
  _confidence_type confidence;




  typedef boost::shared_ptr< ::ar_pose::ARMarker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ar_pose::ARMarker_<ContainerAllocator> const> ConstPtr;

}; // struct ARMarker_

typedef ::ar_pose::ARMarker_<std::allocator<void> > ARMarker;

typedef boost::shared_ptr< ::ar_pose::ARMarker > ARMarkerPtr;
typedef boost::shared_ptr< ::ar_pose::ARMarker const> ARMarkerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ar_pose::ARMarker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ar_pose::ARMarker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ar_pose

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'ar_pose': ['/home/ouiyeah/catkin_ws/src/ar_tools/ar_pose/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ar_pose::ARMarker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ar_pose::ARMarker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ar_pose::ARMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ar_pose::ARMarker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ar_pose::ARMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ar_pose::ARMarker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93c4ce9061a70bc30293e52ac4675f76";
  }

  static const char* value(const ::ar_pose::ARMarker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93c4ce9061a70bc3ULL;
  static const uint64_t static_value2 = 0x0293e52ac4675f76ULL;
};

template<class ContainerAllocator>
struct DataType< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ar_pose/ARMarker";
  }

  static const char* value(const ::ar_pose::ARMarker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint32 id\n\
geometry_msgs/PoseWithCovariance pose\n\
uint32 confidence\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::ar_pose::ARMarker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ar_pose::ARMarker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.pose);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ARMarker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ar_pose::ARMarker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "confidence: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.confidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AR_POSE_MESSAGE_ARMARKER_H
