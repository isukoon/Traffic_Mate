#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include "Template.cpp"

using namespace std;
using namespace cv;

class Pedestrians
{
   public:
	 // void MatchingMethod( int, void*, int match_method, Mat img, Mat templ, Mat result  );	  
      static void Track(Mat img)
{
	Mat templ; Mat result;
	char* image_window = "Source Image";
	char* result_window = "Result window";

	int match_method = 5;
	int max_Trackbar = 5;

  /// Load image and template
 
  templ = imread( "temp.png", 1 );

  /// Create windows
  namedWindow( image_window, CV_WINDOW_AUTOSIZE );
  namedWindow( result_window, CV_WINDOW_AUTOSIZE );
  Template tep;
  /// Create Trackbar
 /* char* trackbar_label = "Method: \n 0: SQDIFF \n 1: SQDIFF NORMED \n 2: TM CCORR \n 3: TM CCORR NORMED \n 4: TM COEFF \n 5: TM COEFF NORMED";
  createTrackbar( trackbar_label, image_window, &match_method, max_Trackbar, &Pedestrians::MatchingMethod);*/

  tep.MatchingMethod( 0, 0, match_method, img, templ, result );

  waitKey(0);
  //return 0;

	  }

};