import cv2
import numpy as np
cam=cv2.VideoCapture(0)


model=cv2.CascadeClassifier("haarcascade_frontalface_alt.xml")
eyes_cascade=cv2.CascadeClassifier("frontalEyes35x16.xml")
nose_cascade=cv2.CascadeClassifier("Nose18x15.xml")
musk = cv2.imread("./Train/mustache.png",-1)
specs=cv2.imread("./Train/glasses.png",-1)


while True:
	ret,frame=cam.read()

	if ret == True:
		gray_frame=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
		faces=model.detectMultiScale(gray_frame,1.3,5)
		eyes=eyes_cascade.detectMultiScale(gray_frame,1.2,5)
		noses=nose_cascade.detectMultiScale(gray_frame,1.3,5)

	for face in faces:
		x, y, w, h = face
		#cv2.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 2)

	for eye in eyes:
		# x, y, w, h = eye
		# #cv2.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 2)
		xe,ye,we,he=eye
		specs2=cv2.resize(specs.copy(),(we,he))

		for i in range(specs2.shape[0]):
			for j in range(specs2.shape[1]):
				if (specs2[i,j,3]>0):
					frame[ye+i,xe+j,:]=specs2[i,j,:-1]





	

	for nose in noses:
		# x, y, w, h = nose
		# cv2.rectangle(frame, (x,y), (x+w, y+h), (255, 0, 0), 2)
		xn,yn,wn,hn=nose
		
		musk2=cv2.resize(musk.copy(),(wn,hn-20))
		#here we are just copying earlier
		for i in range(musk2.shape[0]):
			for j in range(musk2.shape[1]):
				if(musk2[i,j,3]!=0):
					frame[yn+35+i,xn+2+j,:]=musk2[i,j,:-1]
				
					
			
	gray_frame=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
	cv2.imshow("window", frame)
	key = cv2.waitKey(1)  #1ms wait by waitkey function
	if key == ord("q") & 0xFF:
		break
	

cam.release()
cv2.destroyAllWindows()
