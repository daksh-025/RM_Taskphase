from collections import deque # DS similar to a list which stores all the prev coordinates to plot trajectory 
from imutils.video import VideoStream
import numpy as np
import cv2
import imutils # used for resizing the video frame 
import time

# define the lower and upper boundaries of the "green"
# ball in the HSV color space, then initialize the
# list of tracked points
greenLower = (29, 40, 6)
greenUpper = (95, 255, 255)
pts = deque(maxlen=1000)
cap=cv2.VideoCapture("tennisVid.mp4")
while (True):
    ret,frame=cap.read()
    if (ret==False):
        break
    print(frame.shape)
    frame=frame[200:800,300:1400]# using the idea of ROI
    blurred = cv2.GaussianBlur(frame, (11, 11), 0)
    hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)
    # construct a mask for the color "green", then perform
	# a series of dilations and erosions to remove any small
	# blobs left in the mask
    mask = cv2.inRange(hsv, greenLower, greenUpper)
   # mask = cv2.erode(mask, None, iterations=2)
    mask = cv2.dilate(mask, None, iterations=1)
    cv2.imshow('mask',mask)
    # find contours in the mask and initialize the current
	# (x, y) center of the ball
    cnts = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL,
		cv2.CHAIN_APPROX_SIMPLE)
    cnts = imutils.grab_contours(cnts)
    center = None
	# only proceed if at least one contour was found
    if len(cnts) > 0:
		# find the largest contour in the mask, then use
		# it to compute the minimum enclosing circle and
		# centroid
	    c = max(cnts, key=cv2.contourArea)
		((x, y), radius) = cv2.minEnclosingCircle(c)
		M = cv2.moments(c)
		center = (int(M["m10"] / M["m00"]), int(M["m01"] / M["m00"]))
		# only proceed if the radius meets a minimum size
		if radius > 0:
			# draw the circle and centroid on the frame,
			# then update the list of tracked points
		    cv2.circle(frame, (int(x), int(y)), int(radius),
				(0, 255, 255), 2)
			cv2.circle(frame, center, 5, (0, 0, 255), -1)
	# update the points queue
	pts.appendleft(center)

    
    # loop over the set of tracked points
    for i in range(1, len(pts)):
		# if either of the tracked points are None, ignore
		# them
	    if pts[i - 1] is None or pts[i] is None:
		    continue
		# otherwise, compute the thickness of the line and
		# draw the connecting lines
	    thickness = 2
	    cv2.line(frame, pts[i - 1], pts[i], (0, 0, 255), thickness)
	cv2.imshow('video',frame)
    if cv2.waitKey(1) & 0xFF==ord('q'):
        break

cap.release()
cv2.destroyAllWindows()    
    

