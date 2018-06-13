#ifndef SINGLE_CALIB_H
#define SINGLE_CALIB_H

#include "opencv2/core/core.hpp"  
#include "opencv2/imgproc/imgproc.hpp"  
#include "opencv2/calib3d/calib3d.hpp"  
#include "opencv2/highgui/highgui.hpp"  
#include <iostream>  
#include <fstream> 
#include <string.h>
#include <io.h>

using namespace std;
using namespace cv;

class SingleCalib{
public:
	//��Ŀ�궨
	void SingleCalibrate(string intrinsic_filename = "intrinsics.yml", string pics_path="single_calib_pic");
	//��Ҫ��ȡ��ͼƬ·���洢��fileList��
	void InitFileList(string path, vector<string>& files);
private:

	const double patLen = 5.0f;    // unit: mm  �궨��ÿ����Ŀ�ȣ������궨�壩
	double imgScale = 1.0;          //ͼ�����ŵı�������
	Size patSize = Size(6, 4);
	Size img_size;
};

#endif