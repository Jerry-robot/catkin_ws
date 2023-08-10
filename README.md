# aubo-i5 工作空间
    设计moveit控制
##  aubo-i5 ubuntu18.04安装配置 

**1.安装依赖包**
sudo apt install build-essential cmake pkg-config unzip yasm git checkinstall curl wget exfat-utils gparted 
sudo apt install libvtk6-jni libvtk6-java libvtk6-dev libvtk6-qt-dev libpcl-dev 
sudo apt install ros-melodic-pcl-conversions ros-melodic-pcl-ros ros-melodic-perception-pcl ros-melodic-perception ros-melodic-rqt
sudo apt install ros-melodic-desktop-full 
sudo apt install python-rosdep
sudo apt install python-rosinstall python-rosinstall-generator python-wstool build-essential ros-melodic-catkin
sudo apt install python3-dev python3-pip python-pip python-dev
sudo pip3 install -U catkin_tools
sudo apt install ros-melodic-gazebo-ros ros-melodic-gazebo-plugins ros-melodic-gazebo-ros-control ros-melodic-joint-state-controller ros-melodic-position-controllers ros-melodic-joint-trajectory-controller
sudo ln -sf /usr/include/eigen3/Eigen/ /usr/include/Eigen
sudo ln -sf /usr/include/eigen3/unsupported/ /usr/include/unsupported
wget http://archive.ubuntu.com/ubuntu/pool/main/p/protobuf/libprotobuf9v5_2.6.1-1.3_amd64.deb
sudo apt install ros-melodic-industrial-*
sudo apt-get install ros-melodic-moveit-planners-ompl
sudo apt-get install ros-melodic-moveit-*
sudo apt-get install ros-melodic-industrial-*
**2.初始化工作空间**
mkdir -p ~/catkin_ws/src
复制aubo功能包
cd catkin_ws/ 
rosdep install -y --from-paths . --ignore-src --rosdistro melodic -r
catkin_make

**3.运行真实机械臂**
roslaunch aubo_i5_moveit_config moveit_planning_execution.launch robot_ip:=192.168.31.84