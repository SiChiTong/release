使用说明：
1、此版本仅为20170920叉车多机演示使用，仅完成多机显示及任务显示最基础的功能;
2、强烈建议保留原有的HTML，并由Apache提供服务，本版本可开一个临时的Web服务;
3、由于多机调度的Server及各个叉车均还未加ROS Group，故此版本可不通过server，直接与车之间建立连接，订阅相应Topic，显示位置;
4、此版本采用JS ES2015开发，仅在Chrome Version 58.0.3029.81 (64-bit Ubuntu14.04)上测试通过，老旧的浏览器可能会有兼容问题;


使用方法：
1、打开Web服务：cd至该版本index.html所在目录下，执行以下命令：
	python -m SimpleHTTPServer
若8000端口已占用，在该命令最后加上需要的端口号，例如python -m SimpleHTTPServe 9999

2、在浏览器输入server所在的IP及上述的端口号，例如192.168.0.123：8000

3、该版本默认载入server上的地图，故请在server开相应的map_server

4、添加想要显示的叉车：
	1）点击右上图标，弹出右侧边栏，点击添加设备;
	2）在添加页上，id为ROS group，若不输入，则默认为不加group;
	3）ip为想要添加的叉车ip，若不输入，则默认为server的ip（即该web服务器的ip）;
	4）点击完成添加才会把显示在该页上的设备加入显示到地图;
	5）任务状态在左侧边栏的任务下

5、此版本上其余单机的功能还未实现

其他：
1、部分新加入的HTML通过Vue绑定，此版本的Vue为开发版，可能会报警告，忽略之;
2、es2015以后需要转成更老的js，采用Webpack？Babel？
