#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "GUI.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;

class FrameDetection
{

	

   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
	  IplImage *fr1;
	  IplImage *fr2;
	  IplImage *fr3;
	  IplImage *fr4;



	 void Frames( CvCapture *cap1,  CvCapture *cap2,  CvCapture *cap3,  CvCapture *cap4, int total){
		CvHaarClassifierCascade *cascade;
	    CvMemStorage            *storage;
		int input_resize_percent = 100;

		 cascade = (CvHaarClassifierCascade*) cvLoad("cars3.xml", 0, 0, 0);
		 storage = cvCreateMemStorage(0);

		 if(total == 0)
			 MessageBox::Show("Please select atleast one Video !");

		 if(total == 1){

			 assert(cascade && storage && cap1);
			 IplImage* frame1 = cvQueryFrame(cap1);
			 fr1 = cvCreateImage(cvSize((int)((frame1->width*input_resize_percent)/100) , (int)((frame1->height*input_resize_percent)/100)), frame1->depth, frame1->nChannels);
			 
		 }
		 
	  }

		
	  
};