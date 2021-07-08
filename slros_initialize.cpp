#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "margin";

// For Block margin/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_margin_std_msgs_Float64> Sub_margin_5;

// For Block margin/Publish EffectiveHeadway/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_margin_std_msgs_Float64> Pub_margin_12;

// For Block margin/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_margin_7;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

