// Generated by gencpp from file aubo_planning/grasp_poseRequest.msg
// DO NOT EDIT!


#ifndef AUBO_PLANNING_MESSAGE_GRASP_POSEREQUEST_H
#define AUBO_PLANNING_MESSAGE_GRASP_POSEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aubo_planning
{
template <class ContainerAllocator>
struct grasp_poseRequest_
{
  typedef grasp_poseRequest_<ContainerAllocator> Type;

  grasp_poseRequest_()
    : grasppose_x(0.0)
    , grasppose_y(0.0)
    , grasppose_z(0.0)
    , grasppose_R(0.0)
    , grasppose_P(0.0)
    , grasppose_Y(0.0)  {
    }
  grasp_poseRequest_(const ContainerAllocator& _alloc)
    : grasppose_x(0.0)
    , grasppose_y(0.0)
    , grasppose_z(0.0)
    , grasppose_R(0.0)
    , grasppose_P(0.0)
    , grasppose_Y(0.0)  {
  (void)_alloc;
    }



   typedef double _grasppose_x_type;
  _grasppose_x_type grasppose_x;

   typedef double _grasppose_y_type;
  _grasppose_y_type grasppose_y;

   typedef double _grasppose_z_type;
  _grasppose_z_type grasppose_z;

   typedef double _grasppose_R_type;
  _grasppose_R_type grasppose_R;

   typedef double _grasppose_P_type;
  _grasppose_P_type grasppose_P;

   typedef double _grasppose_Y_type;
  _grasppose_Y_type grasppose_Y;





  typedef boost::shared_ptr< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct grasp_poseRequest_

typedef ::aubo_planning::grasp_poseRequest_<std::allocator<void> > grasp_poseRequest;

typedef boost::shared_ptr< ::aubo_planning::grasp_poseRequest > grasp_poseRequestPtr;
typedef boost::shared_ptr< ::aubo_planning::grasp_poseRequest const> grasp_poseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aubo_planning::grasp_poseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aubo_planning::grasp_poseRequest_<ContainerAllocator1> & lhs, const ::aubo_planning::grasp_poseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.grasppose_x == rhs.grasppose_x &&
    lhs.grasppose_y == rhs.grasppose_y &&
    lhs.grasppose_z == rhs.grasppose_z &&
    lhs.grasppose_R == rhs.grasppose_R &&
    lhs.grasppose_P == rhs.grasppose_P &&
    lhs.grasppose_Y == rhs.grasppose_Y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aubo_planning::grasp_poseRequest_<ContainerAllocator1> & lhs, const ::aubo_planning::grasp_poseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aubo_planning

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "750783d28a717b2d8f54ebfe11d1d013";
  }

  static const char* value(const ::aubo_planning::grasp_poseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x750783d28a717b2dULL;
  static const uint64_t static_value2 = 0x8f54ebfe11d1d013ULL;
};

template<class ContainerAllocator>
struct DataType< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aubo_planning/grasp_poseRequest";
  }

  static const char* value(const ::aubo_planning::grasp_poseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 grasppose_x\n"
"float64 grasppose_y\n"
"float64 grasppose_z\n"
"float64 grasppose_R\n"
"float64 grasppose_P\n"
"float64 grasppose_Y\n"
;
  }

  static const char* value(const ::aubo_planning::grasp_poseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grasppose_x);
      stream.next(m.grasppose_y);
      stream.next(m.grasppose_z);
      stream.next(m.grasppose_R);
      stream.next(m.grasppose_P);
      stream.next(m.grasppose_Y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct grasp_poseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aubo_planning::grasp_poseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aubo_planning::grasp_poseRequest_<ContainerAllocator>& v)
  {
    s << indent << "grasppose_x: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_x);
    s << indent << "grasppose_y: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_y);
    s << indent << "grasppose_z: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_z);
    s << indent << "grasppose_R: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_R);
    s << indent << "grasppose_P: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_P);
    s << indent << "grasppose_Y: ";
    Printer<double>::stream(s, indent + "  ", v.grasppose_Y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUBO_PLANNING_MESSAGE_GRASP_POSEREQUEST_H
