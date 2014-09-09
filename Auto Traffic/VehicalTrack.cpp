#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>

class VehicleTrack
{
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box


	  
int detect(IplImage *img,IplImage *img1, int g, int h, int i, int j )
{
  CvSize img_size = cvGetSize(img);
  CvSeq *object = cvHaarDetectObjects(
    img,
    cascade,
    storage,
    1.1, //1.1,//1.5, //-------------------SCALE FACTOR
    1, //2        //------------------MIN NEIGHBOURS
    0, //CV_HAAR_DO_CANNY_PRUNING
    cvSize(0,0),//cvSize( 30,30), // ------MINSIZE
    img_size //cvSize(70,70)//cvSize(640,480)  //---------MAXSIZE
    );

  
  for(int i = 0 ; i < ( object ? object->total : 0 ) ; i++)
  {
	 
    CvRect *r = (CvRect*)cvGetSeqElem(object, i);
	 if((g < (r->x + r->width)/2) & ((r->x + r->width)/2 < h) & (i < (r->y + r->height)/2) & ((r->y + r->height)/2 < j) ){

    cvRectangle(img,
      cvPoint(r->x, r->y),
      cvPoint(r->x + r->width, r->y + r->height),
      CV_RGB(255, 0, 0), 2, 8, 0);
	  }
  }

 cvRectangle(img,cvPoint(g,i), cvPoint(h, j ),cvScalar(255, 255, 0, 0),1,8,0);

 
  return object->total;
}
};