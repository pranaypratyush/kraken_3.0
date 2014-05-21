/* Auto-generated by genmsg_cpp for file /home/prudhvi/ros_ws/kraken_msgs/msg/controllerAction.msg */
#ifndef KRAKEN_MSGS_MESSAGE_CONTROLLERACTION_H
#define KRAKEN_MSGS_MESSAGE_CONTROLLERACTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "kraken_msgs/controllerActionGoal.h"
#include "kraken_msgs/controllerActionResult.h"
#include "kraken_msgs/controllerActionFeedback.h"

namespace kraken_msgs
{
template <class ContainerAllocator>
struct controllerAction_ {
  typedef controllerAction_<ContainerAllocator> Type;

  controllerAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  controllerAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::kraken_msgs::controllerActionGoal_<ContainerAllocator>  _action_goal_type;
   ::kraken_msgs::controllerActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::kraken_msgs::controllerActionResult_<ContainerAllocator>  _action_result_type;
   ::kraken_msgs::controllerActionResult_<ContainerAllocator>  action_result;

  typedef  ::kraken_msgs::controllerActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::kraken_msgs::controllerActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::kraken_msgs::controllerAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::controllerAction_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct controllerAction
typedef  ::kraken_msgs::controllerAction_<std::allocator<void> > controllerAction;

typedef boost::shared_ptr< ::kraken_msgs::controllerAction> controllerActionPtr;
typedef boost::shared_ptr< ::kraken_msgs::controllerAction const> controllerActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::controllerAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::controllerAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::controllerAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::controllerAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::controllerAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2ff05f2ea68d5b1be490c24ea4f27ebf";
  }

  static const char* value(const  ::kraken_msgs::controllerAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2ff05f2ea68d5b1bULL;
  static const uint64_t static_value2 = 0xe490c24ea4f27ebfULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::controllerAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/controllerAction";
  }

  static const char* value(const  ::kraken_msgs::controllerAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::controllerAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
controllerActionGoal action_goal\n\
controllerActionResult action_result\n\
controllerActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
controllerGoal goal\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal\n\
float32 heading_setpoint\n\
float32 forward_setpoint\n\
float32 rightmove_setpoint\n\
float32 depth_setpoint\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
controllerResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result\n\
float32 heading_final\n\
float32 forward_final\n\
float32 rightmove_final\n\
float32 depth_final\n\
\n\
\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
controllerFeedback feedback\n\
\n\
================================================================================\n\
MSG: kraken_msgs/controllerFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
float32 heading_error\n\
float32 forward_error\n\
float32 rightmove_error\n\
float32 depth_error\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::controllerAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::controllerAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct controllerAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::controllerAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::controllerAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::kraken_msgs::controllerActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::kraken_msgs::controllerActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::kraken_msgs::controllerActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_CONTROLLERACTION_H

