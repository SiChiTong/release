// Generated by gencpp from file scheduling_msgs/register_agv.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_REGISTER_AGV_H
#define SCHEDULING_MSGS_MESSAGE_REGISTER_AGV_H

#include <ros/service_traits.h>


#include <scheduling_msgs/register_agvRequest.h>
#include <scheduling_msgs/register_agvResponse.h>


namespace scheduling_msgs
{

struct register_agv
{

typedef register_agvRequest Request;
typedef register_agvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct register_agv
} // namespace scheduling_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::scheduling_msgs::register_agv > {
  static const char* value()
  {
    return "714c2174858e231e7d345289f3b87caa";
  }

  static const char* value(const ::scheduling_msgs::register_agv&) { return value(); }
};

template<>
struct DataType< ::scheduling_msgs::register_agv > {
  static const char* value()
  {
    return "scheduling_msgs/register_agv";
  }

  static const char* value(const ::scheduling_msgs::register_agv&) { return value(); }
};


// service_traits::MD5Sum< ::scheduling_msgs::register_agvRequest> should match 
// service_traits::MD5Sum< ::scheduling_msgs::register_agv > 
template<>
struct MD5Sum< ::scheduling_msgs::register_agvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::register_agv >::value();
  }
  static const char* value(const ::scheduling_msgs::register_agvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::register_agvRequest> should match 
// service_traits::DataType< ::scheduling_msgs::register_agv > 
template<>
struct DataType< ::scheduling_msgs::register_agvRequest>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::register_agv >::value();
  }
  static const char* value(const ::scheduling_msgs::register_agvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::scheduling_msgs::register_agvResponse> should match 
// service_traits::MD5Sum< ::scheduling_msgs::register_agv > 
template<>
struct MD5Sum< ::scheduling_msgs::register_agvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::register_agv >::value();
  }
  static const char* value(const ::scheduling_msgs::register_agvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::register_agvResponse> should match 
// service_traits::DataType< ::scheduling_msgs::register_agv > 
template<>
struct DataType< ::scheduling_msgs::register_agvResponse>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::register_agv >::value();
  }
  static const char* value(const ::scheduling_msgs::register_agvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_REGISTER_AGV_H
