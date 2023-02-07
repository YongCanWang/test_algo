// test_algo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


#include "cse_geoarithmetic.h"

/*测试计算屏幕点地理坐标函数*/
void testCalOneThirdPointByMapPointsAndRotationAngle()
{
    CSE_GeoArithmetic geoArithmetic;
    // 默认CCCS2000坐标系
    double dSemiMajorAxis = CGCS2000_SEMIMAJORAXIS;
    double dSemiMinorAxis = CGCS2000_SEMIMINORAXIS;
    double dRightTopPointX = 90;
    double dRightTopPointY = 30;
    double dCenterX = 100;
    double dCenterY = 20;
    double dRotationAngle = 0;
    int iFlag = 1;
    double dScale = 1 / 3.0;
    double dX = 0;
    double dY = 0;
    geoArithmetic.CalOneThirdPointByMapPointsAndRotationAngle(
        dRightTopPointX,
        dRightTopPointY,
        dCenterX,
        dCenterY,
        dRotationAngle,
        iFlag,
        dScale,
        &dX,
        &dY);

    printf("屏幕点地理坐标：经度：%.6f度\t纬度：%.6f度", dX, dY);

}






int main()
{
    testCalOneThirdPointByMapPointsAndRotationAngle();


    /*CSE_GeoArithmetic GeoArithmetic;
    double dLon1 = 120;
    double dLat1 = 50;
    double dAzimuth1 = -10;
    double dDistance = 10127;
    double dSemiMajorAxis = WGS84_SEMIMAJORAXIS;
    double dSemiMinorAxis = WGS84_SEMIMINORAXIS;
    
    double dLon2 = 0;       // 终点经度
    double dLat2 = 0;       // 终点纬度
    GeoArithmetic.CalPointByDistanceAndAzimuth(dSemiMajorAxis,
        dSemiMinorAxis,
        dLat1,
        dLon1,
        dAzimuth1,
        dDistance,
        &dLat2,
        &dLon2);
    
    printf("lon2 = %.6f\tlat2 = %.6f\n", dLon2, dLat2);

    dDistance = 0;
    dAzimuth1 = 0;
    double dAzimuth2 = 0;

    GeoArithmetic.CalDistanceAndAzimuthByTwoPoints(dSemiMajorAxis,
        dSemiMinorAxis,
        dLat1,
        dLon1,
        dLat2,
        dLon2,
        &dDistance,
        &dAzimuth1,
        &dAzimuth2);

    printf("dDistance = %.6f米，dAzimuth1 = %.6f度，dAzimuth2 = %.6f度",dDistance,dAzimuth1,dAzimuth2);
    */
}

