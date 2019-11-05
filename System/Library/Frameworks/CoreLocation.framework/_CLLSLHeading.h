/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>
#import <CoreLocation/NSSecureCoding.h>

@class _CLLSLLocation, _CLLSLHeadingSupplInfo;

@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding> {

	double _timestamp;
	double _confidence;
	unsigned long long _globalReferenceFrame;
	_CLLSLLocation* _location;
	_CLLSLHeadingSupplInfo* _supplemantaryInfo;
	 _rotationalAccuracyInRadians;
	SCD_Struct_CL25 _rotationFromGlobalToDeviceFrame;
	SCD_Struct_CL25 _rotationFromGlobalToCameraFrame;

}

@property (assign,nonatomic) double timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL25 rotationFromGlobalToDeviceFrame;              //@synthesize rotationFromGlobalToDeviceFrame=_rotationFromGlobalToDeviceFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL25 rotationFromGlobalToCameraFrame;              //@synthesize rotationFromGlobalToCameraFrame=_rotationFromGlobalToCameraFrame - In the implementation block
@property (assign,nonatomic)  rotationalAccuracyInRadians;                                 //@synthesize rotationalAccuracyInRadians=_rotationalAccuracyInRadians - In the implementation block
@property (assign,nonatomic) double confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned long long globalReferenceFrame;                      //@synthesize globalReferenceFrame=_globalReferenceFrame - In the implementation block
@property (nonatomic,copy) _CLLSLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) _CLLSLHeadingSupplInfo * supplemantaryInfo;                     //@synthesize supplemantaryInfo=_supplemantaryInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(_CLLSLLocation *)location;
-(void)setLocation:(_CLLSLLocation *)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(SCD_Struct_CL25)rotationFromGlobalToDeviceFrame;
-(SCD_Struct_CL25)rotationFromGlobalToCameraFrame;
-()rotationalAccuracyInRadians;
-(unsigned long long)globalReferenceFrame;
-(_CLLSLHeadingSupplInfo *)supplemantaryInfo;
-(void)setRotationFromGlobalToDeviceFrame:(SCD_Struct_CL25)arg1 ;
-(void)setRotationFromGlobalToCameraFrame:(SCD_Struct_CL25)arg1 ;
-(void)setRotationalAccuracyInRadians:;
-(void)setGlobalReferenceFrame:(unsigned long long)arg1 ;
-(void)setSupplemantaryInfo:(_CLLSLHeadingSupplInfo *)arg1 ;
@end

