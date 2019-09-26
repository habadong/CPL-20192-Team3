
### 1. make ChArUco Board
<pre>
g++ -o charucoboard charucoboard.cpp $(pkg-config opencv4 --cflags --libs)  

./charucoboard
</pre>

created <code>board.jpg</code>
<br>
<br>
### 2. calibrate
<pre>
g++ -o calibrate calibrate.cpp $(pkg-config opencv4 --cflags --libs)

./calibrate
</pre>

press 'C' more than 4 times. 'ESC' to finish and calibrate.
created <code>output.txt</code>

ex) output.txt
<pre>
%YAML:1.0
---
calibration_time: "2019년 09월 23일 (월) 오후 11시 20분 47초"
image_width: 640
image_height: 480
flags: 0
camera_matrix: !!opencv-matrix
   rows: 3
   cols: 3
   dt: d
   data: [ 7.9431623056167302e+02, 0., 2.9589903548756331e+02, 0.,
       6.2552267740139223e+02, 2.1904076117795572e+02, 0., 0., 1. ]
distortion_coefficients: !!opencv-matrix
   rows: 1
   cols: 5
   dt: d
   data: [ 2.8073257790814921e-01, -2.8983248514555435e+00,
       4.3603588585363645e-02, -3.1156860729767708e-03,
       1.0895180160980223e+01 ]
avg_reprojection_error: 5.1618563911005844e-01
</pre>
