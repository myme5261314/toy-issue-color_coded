/*
 * main.cpp
 * Copyright (C) 2015 Peng Liu <liupeng@imscv.com>
 *
 * Distributed under terms of the GNU GPL3 license.
 */

// #include "main.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat r = Mat::zeros(100, 100, CV_8UC1);
    while(waitKey(1) == -1) {
        cv::imshow("r", r);
    }
    return 0;
}
