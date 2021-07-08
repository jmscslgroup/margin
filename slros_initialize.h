#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block margin/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_margin_std_msgs_Float64> Sub_margin_5;

// For Block margin/Publish EffectiveHeadway/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_margin_std_msgs_Float64> Pub_margin_12;

// For Block margin/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_margin_7;

void slros_node_init(int argc, char** argv);

#endif
