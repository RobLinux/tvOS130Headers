/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAPerspectiveOperator : IPAGeometryOperator {

	double _xAngle;
	double _yAngle;
	double _dx;
	double _dy;

}
+(id)operatorWithAngleX:(double)arg1 Y:(double)arg2 dx:(double)arg3 dy:(double)arg4 ;
+(id)operatorWithIdentifier:(id)arg1 angleX:(double)arg2 Y:(double)arg3 dx:(double)arg4 dy:(double)arg5 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

