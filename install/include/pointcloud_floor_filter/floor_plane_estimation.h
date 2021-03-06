/*********************************************************************
 *
 *  Copyright (c) 2013, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.

 *  Author: Julius Kammerl (jkammerl@willowgarage.com)
 *
 */

#ifndef FLOOR_PLANE_ESTIMATION_H_
#define FLOOR_PLANE_ESTIMATION_H_

#include <ros/ros.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/TransformStamped.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl/point_types.h>


namespace floor_filtered_pointcloud
{

class DepthToPointCloud;

class FloorPlaneEstimation
{
public:
  FloorPlaneEstimation();
  ~FloorPlaneEstimation();

  void floorPlaneEstimation(const sensor_msgs::ImageConstPtr& depth_msg,
                            sensor_msgs::CameraInfoConstPtr info_msg,
                            geometry_msgs::TransformStampedPtr depth_to_odom_transform,
                            double ransac_floor_distance,
                            double filtered_floor_distance,
                            sensor_msgs::PointCloud2& out_cloud,
                            geometry_msgs::PointPtr& out_normal
                            );

  void floorPlaneEstimation(const sensor_msgs::ImageConstPtr& depth_msg,
                            sensor_msgs::CameraInfoConstPtr info_msg,
                            geometry_msgs::TransformStampedPtr depth_to_odom_transform,
                            double preselect_floor_distance,
                            geometry_msgs::PointPtr& out_normal
                            );
private:

  boost::shared_ptr<DepthToPointCloud> depth_converter_;

};

}

#endif
