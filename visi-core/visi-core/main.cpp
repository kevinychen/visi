//
//  main.cpp
//  visi-core
//
//  Created by Kevin Chen on 11/19/18.
//  Copyright © 2018 Kevin Chen. All rights reserved.
//

#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main(int argc, const char * argv[]) {
    Mat output = Mat::zeros(120, 350, CV_8UC3);
    putText(output,
            "Hello world!",
            cvPoint(15, 70), /* origin */
            FONT_HERSHEY_PLAIN,
            3., /* font scale */
            cvScalar(0, 255, 0),
            4 /* line type */);

    namedWindow("output");
    imshow("output", output);
    waitKey(0);
    return 0;
}
