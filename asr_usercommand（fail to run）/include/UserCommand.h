// Generated by gencpp from file asr_usercommand/UserCommand.msg
// DO NOT EDIT!


#ifndef ASR_USERCOMMAND_MESSAGE_USERCOMMAND_H
#define ASR_USERCOMMAND_MESSAGE_USERCOMMAND_H

#include <ros/service_traits.h>


#include <asr_usercommand/UserCommandRequest.h>
#include <asr_usercommand/UserCommandResponse.h>


namespace asr_usercommand
{

struct UserCommand
{

typedef UserCommandRequest Request;
typedef UserCommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UserCommand
} // namespace asr_usercommand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::asr_usercommand::UserCommand > {
  static const char* value()
  {
    return "71ac060476c0905d0416477df3715d0f";
  }

  static const char* value(const ::asr_usercommand::UserCommand&) { return value(); }
};

template<>
struct DataType< ::asr_usercommand::UserCommand > {
  static const char* value()
  {
    return "asr_usercommand/UserCommand";
  }

  static const char* value(const ::asr_usercommand::UserCommand&) { return value(); }
};


// service_traits::MD5Sum< ::asr_usercommand::UserCommandRequest> should match 
// service_traits::MD5Sum< ::asr_usercommand::UserCommand > 
template<>
struct MD5Sum< ::asr_usercommand::UserCommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::asr_usercommand::UserCommand >::value();
  }
  static const char* value(const ::asr_usercommand::UserCommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::asr_usercommand::UserCommandRequest> should match 
// service_traits::DataType< ::asr_usercommand::UserCommand > 
template<>
struct DataType< ::asr_usercommand::UserCommandRequest>
{
  static const char* value()
  {
    return DataType< ::asr_usercommand::UserCommand >::value();
  }
  static const char* value(const ::asr_usercommand::UserCommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::asr_usercommand::UserCommandResponse> should match 
// service_traits::MD5Sum< ::asr_usercommand::UserCommand > 
template<>
struct MD5Sum< ::asr_usercommand::UserCommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::asr_usercommand::UserCommand >::value();
  }
  static const char* value(const ::asr_usercommand::UserCommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::asr_usercommand::UserCommandResponse> should match 
// service_traits::DataType< ::asr_usercommand::UserCommand > 
template<>
struct DataType< ::asr_usercommand::UserCommandResponse>
{
  static const char* value()
  {
    return DataType< ::asr_usercommand::UserCommand >::value();
  }
  static const char* value(const ::asr_usercommand::UserCommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASR_USERCOMMAND_MESSAGE_USERCOMMAND_H
