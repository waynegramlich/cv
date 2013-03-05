/*
 * Copyright (c) 2010 by Wayne C. Gramlich
 * All rights reserved.
 */

#include "opencv/cv.h"
#include "opencv/highgui.h"
#include "CV.h"
#include "CV_C.h"
#include "Easy_C.h"
#include "Easy_C_C.h"

/* null objects: */
CV_Contour CV_Contour__Null = (CV_Contour)0;
CV_Image CV_Image__null = (CV_Image)0;
CV_Matrix CV_Matrix__null = (CV_Matrix)0;
CV_Memory_Storage CV_Memory_Storage__null = (CV_Memory_Storage)0;
CV_Point CV_Point__null = (CV_Point)0;
CV_Point2D32F CV_Point2D32F__null = (CV_Point2D32F)0;
CV_Point2D32F_Vector CV_Point2D32F_Vector__null = (CV_Point2D32F_Vector)0;
CV_Scalar CV_Scalar__null = (CV_Scalar)0;
CV_Sequence CV_Sequence__null = (CV_Sequence)0;
CV_Size CV_Size__null = (CV_Size)0;
CV_Slice CV_Slice__null = (CV_Slice)0;
CV_Term_Criteria CV_Term_Criteria__null = (CV_Term_Criteria)0;

/* Initial objects: */
CvContour CV_Contour__Initial;
IplImage CV_Image__Initial;
CvSize CV_Size__Initial;
CvMat CV_Matrix__Initial;
CvMemStorage CV_Memory_Storage__Initial;
CvPoint CV_Point__Initial;
CvPoint2D32f CV_Point2D32F__Initial;
CvPoint2D32f CV_Point2D32F_Vector__Initial;
CvScalar CV_Scalar__Initial;
CvSlice CV_Slice__Initial;
CvTermCriteria CV_Term_Criteria__Initial;


void CV_Contour__Initialize(void)
{
}

void CV_Image__Initialize(void)
{
}

void CV_Matrix__Initialize(void)
{
}

void CV_Memory_Storage__Initialize(void)
{
}

void CV_Point__Initialize(void)
{
}

void CV_Point2D32F__Initialize(void)
{
}

void CV_Point2D32F_Vector__Initialize(void)
{
}

void CV_Scalar__Initialize(void)
{
}

void CV_Sequence__Initialize(void)
{
}

void CV_Size__Initialize(void)
{
}

static CvSlice whole_sequence;		// CV_WHOLE_SEQ (see below)
CV_Slice CV__whole_seq = &whole_sequence;

void CV_Slice__Initialize(void)
{
    whole_sequence = CV_WHOLE_SEQ;
}

void CV_Term_Criteria__Initialize(void)
{
}

/* Depth constants: */
Integer CV__depth_1u = IPL_DEPTH_1U;
Integer CV__depth_8u = IPL_DEPTH_8U;
Integer CV__depth_16u = IPL_DEPTH_16U;
Integer CV__depth_8s = IPL_DEPTH_8S;
Integer CV__depth_16s = IPL_DEPTH_16S;
Integer CV__depth_32s = IPL_DEPTH_32S;
Integer CV__depth_32f = IPL_DEPTH_32F;
Integer CV__depth_64f = IPL_DEPTH_64F;

Integer CV__load_image_any_color = CV_LOAD_IMAGE_ANYCOLOR;
Integer CV__load_image_any_depth = CV_LOAD_IMAGE_ANYDEPTH;
Integer CV__load_image_color = CV_LOAD_IMAGE_COLOR;
Integer CV__load_image_gray_scale = CV_LOAD_IMAGE_GRAYSCALE;
Integer CV__load_image_unchanged = CV_LOAD_IMAGE_UNCHANGED;
Integer CV__window_auto_size = CV_WINDOW_AUTOSIZE;

/* Color space conversion codes: */
Integer CV__bgr_to_bgra = CV_BGR2BGRA;
Integer CV__rgb_to_rgba = CV_RGB2RGBA;
Integer CV__bgra_to_bgr = CV_BGRA2BGR;
Integer CV__rgba_to_rgb = CV_RGBA2RGB;
Integer CV__bgr_to_rgba = CV_BGR2RGBA;
Integer CV__rgb_to_bgra = CV_RGB2BGRA;
Integer CV__rgba_to_bgr = CV_RGBA2BGR;
Integer CV__bgra_to_rgb = CV_BGRA2RGB;
Integer CV__bgr_to_rgb = CV_BGR2RGB;
Integer CV__rgb_to_bgr = CV_RGB2BGR;
Integer CV__brga_to_rgba = CV_BGRA2RGBA;
Integer CV__rgba_to_brga = CV_RGBA2BGRA;
Integer CV__bgr_to_gray = CV_BGR2GRAY;
Integer CV__rgb_to_gray = CV_RGB2GRAY;
Integer CV__gray_to_brg = CV_GRAY2BGR;
Integer CV__gray_to_rgb = CV_GRAY2RGB;
Integer CV__gray_to_bgra = CV_GRAY2BGRA;
Integer CV__gray_to_rgba = CV_GRAY2RGBA;
Integer CV__brga_to_gray = CV_BGRA2GRAY;
Integer CV__rgba_to_gray = CV_RGBA2GRAY;
Integer CV__bgr_to_bgr565 = CV_BGR2BGR565;
Integer CV__rgb_to_bgr565 = CV_RGB2BGR565;
Integer CV__bgr565_to_bgr = CV_BGR5652BGR;
Integer CV__bg4565_to_rgb = CV_BGR5652RGB;
Integer CV__bgra_to_bgr565 = CV_BGRA2BGR565;
Integer CV__rgba_to_bgr565 = CV_RGBA2BGR565;
Integer CV__bgr565_to_bgra = CV_BGR5652BGRA;
Integer CV__bgr565_to_rgba = CV_BGR5652RGBA;
Integer CV__gray_to_bgr565 = CV_GRAY2BGR565;
Integer CV__bgr565_to_gray =  CV_BGR5652GRAY;
Integer CV__bgr_to_bgr555 = CV_BGR2BGR555;
Integer CV__rgb_to_bgr555 = CV_RGB2BGR555;
Integer CV__bgr555_to_bgr = CV_BGR5552BGR;
Integer CV__bgr555_to_rgb = CV_BGR5552RGB;
Integer CV__bgra_to_bgr555 = CV_BGRA2BGR555;
Integer CV__rgba_to_bgr555 = CV_RGBA2BGR555;
Integer CV__bgr555_to_bgra = CV_BGR5552BGRA;
Integer CV__bgr555_to_rgba = CV_BGR5552RGBA;
Integer CV__gray_to_bgr555 = CV_GRAY2BGR555;
Integer CV__bgr555_to_gray = CV_BGR5552GRAY;
Integer CV__bgr_to_xyz = CV_BGR2XYZ;
Integer CV__rgb_to_xyz = CV_RGB2XYZ;
Integer CV__xyz_to_bgr = CV_XYZ2BGR;
Integer CV__xyz_to_rgb = CV_XYZ2RGB;
Integer CV__bgr_to_ycrcb = CV_BGR2YCrCb;
Integer CV__rgb_to_ycrcb = CV_RGB2YCrCb;
Integer CV__ycrcb_to_bgr = CV_YCrCb2BGR;
Integer CV__ycrcb_to_rgb = CV_YCrCb2RGB;
Integer CV__bgr_to_hsv = CV_BGR2HSV;
Integer CV__rgb_to_hsv = CV_RGB2HSV;
Integer CV__bgr_to_lab = CV_BGR2Lab;
Integer CV__rgb_to_lab = CV_RGB2Lab;
Integer CV__bayerbg_to_bgr = CV_BayerBG2BGR;
Integer CV__bayergb_to_bgr = CV_BayerGB2BGR;
Integer CV__bayerrg_to_bgr = CV_BayerRG2BGR;
Integer CV__bayergr_to_bgr = CV_BayerGR2BGR;
Integer CV__bayerbg_to_rgb = CV_BayerBG2RGB;
Integer CV__bayergb_to_rgb = CV_BayerGB2RGB;
Integer CV__bayerrg_to_rgb = CV_BayerRG2RGB;
Integer CV__bayergr_to_rgb = CV_BayerGR2RGB;
Integer CV__bgr_to_luv = CV_BGR2Luv;
Integer CV__rgb_to_luv = CV_RGB2Luv;
Integer CV__bgr_to_hls = CV_BGR2HLS;
Integer CV__rgb_to_hls = CV_RGB2HLS;
Integer CV__hsv_to_bgr = CV_HSV2BGR;
Integer CV__hsv_to_rgb = CV_HSV2RGB;
Integer CV__lab_to_bgr = CV_Lab2BGR;
Integer CV__lab_to_rgb = CV_Lab2RGB;
Integer CV__luv_to_bgr = CV_Luv2BGR;
Integer CV__luv_to_rgb = CV_Luv2RGB;
Integer CV__hls_to_bgr = CV_HLS2BGR;
Integer CV__hls_to_rgb = CV_HLS2RGB;

Integer CV__adaptive_thresh_mean_c = CV_ADAPTIVE_THRESH_MEAN_C;
Integer CV__adaptive_thresh_gaussian_c = CV_ADAPTIVE_THRESH_GAUSSIAN_C;
Integer CV__thresh_binary = CV_THRESH_BINARY;
Integer CV__thresh_binary_inv = CV_THRESH_BINARY_INV;

/* Types for Matrices and images: */
Integer CV__u8 = CV_8U;
Integer CV__s8 = CV_8S;
Integer CV__u16 = CV_16U;
Integer CV__s16 = CV_16S;
Integer CV__s32 = CV_32S;
Integer CV__f32 = CV_32F;
Integer CV__f64 = CV_64F;
Integer CV__user_type = CV_USRTYPE1;

Integer CV__u8c1 = CV_8UC1;
Integer CV__u8c2 = CV_8UC2;
Integer CV__u8c3 = CV_8UC3;
Integer CV__u8c4 = CV_8UC4;

Integer CV__s8c1 = CV_8SC1;
Integer CV__s8c2 = CV_8SC2;
Integer CV__s8c3 = CV_8SC3;
Integer CV__s8c4 = CV_8SC4;

Integer CV__u16c1 = CV_16UC1;
Integer CV__u16c2 = CV_16UC2;
Integer CV__u16c3 = CV_16UC3;
Integer CV__u16c4 = CV_16UC4;

Integer CV__s16c1 = CV_16SC1;
Integer CV__s16c2 = CV_16SC2;
Integer CV__s16c3 = CV_16SC3;
Integer CV__s16c4 = CV_16SC4;

Integer CV__s32c1 = CV_32SC1;
Integer CV__s32c2 = CV_32SC2;
Integer CV__s32c3 = CV_32SC3;
Integer CV__s32c4 = CV_32SC4;

Integer CV__f32c1 = CV_32FC1;
Integer CV__f32c2 = CV_32FC2;
Integer CV__f32c3 = CV_32FC3;
Integer CV__f32c4 = CV_32FC4;

Integer CV__f64c1 = CV_64FC1;
Integer CV__f64c2 = CV_64FC2;
Integer CV__f64c3 = CV_64FC3;
Integer CV__f64c4 = CV_64FC4;

Integer Cv__auto_step = CV_AUTO_STEP;

void
CV__adaptive_threshold(
  CV_Image source_image,
  CV_Image destination_image,
  Double maximum_value,
  Integer adaptive_method,
  Integer threshold_type,
  Integer block_size,
  Double parameter1)
{
    cvAdaptiveThreshold(source_image, destination_image, maximum_value,
      adaptive_method, threshold_type, block_size, parameter1);
}

Integer CV__poly_approx_dp = CV_POLY_APPROX_DP;

CV_Sequence
CV__approx_poly(
  CV_Sequence contour,
  Integer header_size,
  CV_Memory_Storage storage,
  Integer method,
  Integer parameter1,
  Double parameter2)
{
    //(void)printf("sizeof=%d method=%d param1=%d\n",
    //  sizeof(CvContour), method, parameter1);
    return cvApproxPoly(contour,
      sizeof(CvContour), storage, method, parameter1, parameter2);
}

Double
CV__arc_length(
  CV_Sequence contour,
  CV_Slice slice,
  Integer is_closed)
{
    return cvArcLength(contour, *slice, is_closed);
}    

void
CV__calibrate_camera2(
  CV_Matrix object_points,
  CV_Matrix image_points,
  CV_Matrix point_counts,
  CV_Size image_size,
  CV_Matrix camera_matrix,
  CV_Matrix distortion_coefficients, 
  CV_Matrix rotation_vectors,
  CV_Matrix translation_vectors,
  Integer flags)
{
    cvCalibrateCamera2(object_points, image_points, point_counts,
      *image_size, camera_matrix, distortion_coefficients, rotation_vectors,
      translation_vectors, flags);
}

Logical
CV__check_contour_convexity(
  CV_Sequence contour)
{
    return (Logical)(cvCheckContourConvexity(contour) ? 1 : 0);
}

void
CV__clear_mem_storage(
  CV_Memory_Storage storage)
{
    cvClearMemStorage(storage);
}

CV_Image
CV__clone_image(
  CV_Image image)
{
    return cvCloneImage(image);
}

Double
CV__contour_area(
  CV_Sequence contour,
  CV_Slice slice,
  Integer oriented)
{
    return cvContourArea(contour, *slice, oriented);
}

CV_Image
CV__create_image(
  CV_Size size,
  Integer depth,
  Integer channels)
{
    return cvCreateImage(*size, depth, channels);
}

void
CV__cvt_color(
  CV_Image source_image,
  CV_Image destination_image,
  Integer conversion_code)
{
  cvCvtColor(source_image, destination_image, conversion_code);
}

void
CV__copy(
  CV_Image source_image,
  CV_Image destination_image,
  CV_Image mask)
{
    cvCopy(source_image, destination_image, mask);
}

void
CV__draw_chessboard_corners(
  CV_Image image,
  CV_Size pattern_size,
  CV_Point2D32F_Vector corners,
  Integer count,
  Logical pattern_was_found)
{
    cvDrawChessboardCorners(image,
      *pattern_size, corners, count, pattern_was_found);
}

void
CV__draw_contours(
  CV_Image image,
  CV_Sequence contour,
  CV_Scalar external_color,
  CV_Scalar hole_color,
  Integer maximal_level,
  Integer thickness,
  Integer line_type,
  CV_Point offset)
{
  cvDrawContours(image, contour, *external_color,
    *hole_color, maximal_level, thickness, line_type, *offset);
}

/* {mode} constants: */
Integer CV__retr_external = CV_RETR_EXTERNAL;
Integer CV__retr_list = CV_RETR_LIST;
Integer CV__retr_ccomp = CV_RETR_CCOMP;
Integer CV__retr_tree = CV_RETR_TREE;

/* {method} constants: */
Integer CV__chain_code = CV_CHAIN_CODE;
Integer CV__chain_approx_none = CV_CHAIN_APPROX_NONE;
Integer CV__chain_approx_simple = CV_CHAIN_APPROX_SIMPLE;
Integer CV__chain_approx_tc89_l1 = CV_CHAIN_APPROX_TC89_L1;
Integer CV__chain_approx_tc89_kcos = CV_CHAIN_APPROX_TC89_KCOS;
Integer CV__chain_link_runs = CV_LINK_RUNS;

Integer CV__calib_cb_adaptive_thresh = CV_CALIB_CB_ADAPTIVE_THRESH;
Integer CV__calib_cb_normalize_image = CV_CALIB_CB_NORMALIZE_IMAGE;
Integer CV__calib_cb_filter_quads = CV_CALIB_CB_FILTER_QUADS;

Integer
CV__find_chessboard_corners(
  CV_Image image,
  CV_Size pattern_size,
  CV_Point2D32F_Vector corners,
  Integer flags)
{
    Integer corner_count;
    Integer result;

    result = cvFindChessboardCorners(image,
      *pattern_size, corners, &corner_count, flags);
    if (result != 0) {
	result = corner_count;
    }
    return result;
}

CV_Sequence
CV__find_contours(
  CV_Image image,
  CV_Memory_Storage storage,
  Integer header_size,
  Integer mode,
  Integer method,
  CV_Point point)
{
    Integer result;
    CV_Sequence contours;

    contours = (CV_Sequence)0;
    result = cvFindContours(image,
      storage, &contours, sizeof(CvContour), mode, method, *point);
    return contours;
}  

void
CV__find_corner_sub_pix(
  CV_Image image,
  CV_Point2D32F_Vector corners,
  Integer count,
  CV_Size window,
  CV_Size zero_zone,
  CV_Term_Criteria criteria)
{
    cvFindCornerSubPix(image, corners, count, *window, *zero_zone, *criteria);
}

void
CV__find_extrinsic_camera_params2(
  CV_Matrix object_points,
  CV_Matrix image_points,
  CV_Matrix camera,
  CV_Matrix distortion_coefficients,
  CV_Matrix rotation_vector,
  CV_Matrix translation_vector,
  Integer use_extrinsic_guess)
{
  cvFindExtrinsicCameraParams2(object_points, image_points, camera,
    distortion_coefficients, rotation_vector, translation_vector,
    use_extrinsic_guess);
}

Integer
CV__fourcc(
  Character character1,
  Character character2,
  Character character3,
  Character character4)
{
    return CV_FOURCC(character1, character2, character3, character4);
}

Integer CV__gemm_a_t = CV_GEMM_A_T;
Integer CV__gemm_b_t = CV_GEMM_B_T;
Integer CV__gemm_c_t = CV_GEMM_C_T;

void
CV__gemm(
  CV_Matrix a,
  CV_Matrix b,
  double alpha,
  CV_Matrix c,
  double beta,
  CV_Matrix d,
  int transpose_a_b_c)
{
    return cvGEMM(a, b, alpha, c, beta, d, transpose_a_b_c);
}


Double
CV__get_real_2d(
  CV_Matrix matrix,
  Integer row,
  Integer column)
{
    return cvGetReal2D(matrix, row, column);
}

void
CV__init_undistort_map(
  CV_Matrix camera_matrix,
  CV_Matrix distortion_coefficients,
  CV_Matrix mapx,
  CV_Matrix mapy)
{
    cvInitUndistortMap(camera_matrix, distortion_coefficients, mapx, mapy);
}

CV_Matrix
CV__load(
  String file_name,
  CV_Memory_Storage storage,
  String name,
  String real_name)
{
    char *simple_file_name;
    char *simple_name;
    const char *simple_real_name;

    simple_file_name = String__Unix(file_name);    
    simple_name = (char *)0;
    simple_real_name = (const char *)0;
    return cvLoad(simple_file_name, storage, simple_name, &simple_real_name);
}

void
CV__release_image(
  CV_Image image)
{
    cvReleaseImage(&image);
}

Integer CV__inter_linear = CV_INTER_LINEAR;
Integer CV__warp_fill_outliers = CV_WARP_FILL_OUTLIERS;

void
CV__remap(
  CV_Image source_image,
  CV_Image destination_image,
  CV_Matrix mapx,
  CV_Matrix mapy,
  Integer flags,
  CV_Scalar fill_value)
{
    cvRemap(source_image,
      destination_image, mapx, mapy, flags, *fill_value);
}

void
CV__rodrigues2(
  CV_Matrix rotation_vector,
  CV_Matrix rotation_matrix,
  CV_Matrix jacobian)
{
    cvRodrigues2(rotation_vector, rotation_matrix, jacobian);
}

void
CV__set_identity(
  CV_Matrix matrix,
  CV_Scalar scalar)
{
    cvSetIdentity(matrix, *scalar);
}

void
CV__set_real_2d(
  CV_Matrix matrix,
  Integer row,
  Integer column,
  Double value)
{
    cvSetReal2D(matrix, row, column, value);
}

void
CV__set_zero(
  CV_Matrix matrix)
{
    cvSetZero(matrix);
}

Integer CV__blur_no_scale = CV_BLUR_NO_SCALE;
Integer CV__blur = CV_BLUR;
Integer CV__gaussian = CV_GAUSSIAN;
Integer CV__median = CV_MEDIAN;
Integer CV__bilateral = CV_BILATERAL;

void
CV_smooth(
  CV_Image source_image,
  CV_Image destination_image,
  Integer smooth_type,
  Integer parameter1,
  Integer parameter2,
  Double parameter3,
  Double parameter4)
{
    cvSmooth(source_image, destination_image, smooth_type, parameter1,
      parameter2, parameter3, parameter4);
}

CV_Image__channels_get(
  CV_Image image)
{
    return image->nChannels;
}

void
CV_Image__cross_draw(
  CV_Image img,
  Integer x,
  Integer y,
  CV_Scalar color)
{
    // Draw a small cross at the indicated point.
    uchar *pixel;
    uchar *pixel_lt;
    uchar *pixel_rt;
    uchar *pixel_up;
    uchar *pixel_dn;
    uchar red = cvRound(color->val[0]);
    uchar green = cvRound(color->val[1]);
    uchar blue = cvRound(color->val[2]);
    uchar *data = (uchar *)img->imageData;
    int width_step = img->widthStep;

    // Sanity check the values.
    if (x < 1 || y < 1 || x >= (img->width - 1) || y >= (img->height - 1)) {
	return;
    }

    // Get the pixels to be colored.
    pixel = &((data + width_step * y))[x * 3];
    pixel_lt = &((data + width_step * y))[(x - 1) * 3];
    pixel_rt = &((data + width_step * y))[(x + 1) * 3];
    pixel_up = &((data + width_step * (y - 1)))[x * 3];
    pixel_dn = &((data + width_step * (y + 1)))[x * 3];

    // Draw the cross.
    pixel[0] = red; pixel[1] = green; pixel[2] = blue;
    pixel_lt[0] = red; pixel_lt[1] = green; pixel_lt[2] = blue;
    pixel_rt[0] = red; pixel_rt[1] = green; pixel_rt[2] = blue;
    pixel_up[0] = red; pixel_up[1] = green; pixel_up[2] = blue;
    pixel_dn[0] = red; pixel_dn[1] = green; pixel_dn[2] = blue;
}

CV_Image__depth_get(
  CV_Image image)
{
    return image->depth;
}

Unsigned
CV_Image__fetch3(
  CV_Image image,
  Unsigned x,
  Unsigned y,
  Unsigned channel)
{
    unsigned char *pointer = cvPtr2D(image, y, x, (int *)0);
    return pointer[channel];
}

Integer
CV_Image__gray_fetch(
  CV_Image image,
  Integer x,
  Integer y)
{
    Integer result = -1;
    if (0 <= x && x < image->width && 0 <= y && y < image->height) {
	result =
	  (Integer)(((uchar *)image->imageData + image->widthStep * y))[x];
    }
    return result;
}

Integer
CV_Image__height_get(
  CV_Image image)
{
    return image->height;
}

void
CV_Image__store3(
  CV_Image image,
  Unsigned x,
  Unsigned y,
  Unsigned channel,
  Unsigned value)
{
    unsigned char *pointer = cvPtr2D(image, y, x, (int *)0);
    pointer[channel] = (unsigned char)value;
}

Integer
CV_Image__width_get(
  CV_Image image)
{
    return image->width;
}

Integer
CV_Matrix__columns_get(
  CV_Matrix matrix)
{
    return matrix->cols;
}

Integer
CV_Matrix__rows_get(
  CV_Matrix matrix)
{
    return matrix->rows;
}

void
CV_Matrix__save(
  CV_Matrix matrix,
  String file_name)
{
    CvAttrList attributes;

    attributes = cvAttrList((const char **)0, (CvAttrList *)0);
    cvSave(String__Unix(file_name),
      matrix, (const char *)0, (const char *)0, attributes);
}

CV_Point
CV_Point__create(
  Integer x,
  Integer y)
{
    Unsigned malloc_bytes = sizeof *((CV_Point)0);
    /* (void)printf("CV_Point__create: malloc_bytes=%d\n", malloc_bytes); */
    CV_Point point = (CV_Point) malloc(sizeof *((CV_Point *)0) );

    point->x = x;
    point->y = y;
    return point;
}

Integer
CV_Point__x_get(
  CV_Point point)
{
    return point->x;
}

void
CV_Point__x_set(
  CV_Point point,
  Integer x)
{
    point->x = x;
}

Integer
CV_Point__y_get(
  CV_Point point)
{
    return point->y;
}

void
CV_Point__y_set(
  CV_Point point,
  Integer y)
{
    point->y = y;
}



CV_Point2D32F
CV_Point2D32F__create(
  Double x,
  Double y)
{
    Unsigned malloc_bytes = sizeof *((CV_Point2D32F)0);
    /* (void)printf("CV_Point2D32F__create: malloc_bytes=%d\n",
         malloc_bytes); */
    CV_Point2D32F point = (CV_Point2D32F)malloc(malloc_bytes);

    point->x = x;
    point->y = y;
    return point;
}

Double
CV_Point2D32F__x_get(
  CV_Point2D32F point)
{
    return point->x;
}

void
CV_Point2D32F__x_set(
  CV_Point2D32F point,
  Double x)
{
    point->x = x;
}

Double
CV_Point2D32F__y_get(
  CV_Point2D32F point)
{
    return point->y;
}

void
CV_Point2D32F__y_set(
  CV_Point2D32F point,
  Double y)
{
    point->y = y;
}

CV_Point2D32F_Vector
CV_Point2D32F_Vector__create(
  Unsigned size)
{
    Unsigned malloc_bytes = size * sizeof *((CV_Point2D32F)0);
    /* (void)printf("CV_Point2D32F_Vector__create: size=%d malloc_bytes=%d\n",
       size, malloc_bytes); */
    CV_Point2D32F vector = (CV_Point2D32F)malloc(malloc_bytes);
    Integer index;

    for (index = 0; index < size; index++) {
        vector[index].x = 0.0;
        vector[index].y = 0.0;
    }
    return vector;
}

CV_Point2D32F
CV_Point2D32F_Vector__fetch1(
  CV_Point2D32F_Vector vector,
  Unsigned index)
{
    return &vector[index];
}

CV_Scalar
CV_Scalar__create(
  Double value0,
  Double value1,
  Double value2,
  Double value3)
{
    Unsigned malloc_bytes = sizeof *((CV_Scalar)0);
    /* (void)printf("CV_Scalar__create: malloc_bytes=%d\n", malloc_bytes); */
    CV_Scalar scalar = (CV_Scalar)malloc(malloc_bytes);
    scalar->val[0] = value0;
    scalar->val[1] = value1;
    scalar->val[2] = value2;
    scalar->val[3] = value3;
    return scalar;
}

CV_Sequence
CV_Sequence__next_get(
  CV_Sequence sequence)
{
    return sequence->h_next;
}

CV_Point
CV_Sequence__point_fetch(
  CV_Sequence sequence,
  Unsigned index)
{
    return (CV_Point)cvGetSeqElem(sequence, index);
}

Integer
CV_Sequence__total_get(
  CV_Sequence sequence)
{
    return sequence->total;
}

CV_Size
CV_Size__create(
  Integer width,
  Integer height)
{
    Unsigned malloc_bytes = sizeof *((CV_Size)0);
    /* (void)printf("CV_Size__create: malloc_bytes=%d\n", malloc_bytes); */
    CV_Size size = (CV_Size)malloc(malloc_bytes);

    size->width = width;
    size->height = height;
    return size;
}

CV_Slice
CV_Slice__create(
  Integer start_index,
  Integer end_index)
{
    Unsigned malloc_bytes = sizeof *((CV_Slice)0);
    /* (void)printf("CV_Slice__create: malloc_bytes=%d\n", malloc_bytes); */
    CV_Slice slice = (CV_Slice)malloc(malloc_bytes);

    slice->start_index = start_index;
    slice->end_index = end_index;
    return slice;
}

Integer CV__term_criteria_iterations = CV_TERMCRIT_ITER;
Integer CV__term_criteria_eps = CV_TERMCRIT_EPS;

CV_Term_Criteria
CV_Term_Criteria__create(
  Integer type,
  Integer maximum_iterations,
  Double epsilon)
{
    Unsigned malloc_bytes = sizeof *((CV_Term_Criteria)0);
    /* (void)printf("CV_Term_Criteria__create: malloc_bytes=%d\n",
       malloc_bytes); */
    CV_Term_Criteria term_criteria = (CV_Term_Criteria)malloc(malloc_bytes);

    term_criteria->type = type;
    term_criteria->max_iter = maximum_iterations;
    term_criteria->epsilon = epsilon;
    return term_criteria;
}

