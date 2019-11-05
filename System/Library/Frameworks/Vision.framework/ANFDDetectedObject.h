/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoDetectedObject.h>

@interface ANFDDetectedObject : VNEspressoDetectedObject {

	float _rotationAngle;
	float _yawAngle;
	int _labelKey;

}

@property (assign) float rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) float yawAngle;                   //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign) int labelKey;                     //@synthesize labelKey=_labelKey - In the implementation block
-(float)yawAngle;
-(void)setYawAngle:(float)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 labelKey:(int)arg6 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(int)labelKey;
-(void)setLabelKey:(int)arg1 ;
@end

