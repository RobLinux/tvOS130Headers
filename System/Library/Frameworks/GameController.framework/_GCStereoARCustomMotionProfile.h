/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCMotion.h>

@interface _GCStereoARCustomMotionProfile : GCMotion {

	SCD_Struct_GC0 _forwardQuaternion;
	GCQuaternion _prevControllerAttitude;
	BOOL _hasSetPrevControllerAttitude;

}
-(id)initWithController:(id)arg1 ;
-(void)_setForwardQuaternion:(SCD_Struct_GC0)arg1 ;
-(BOOL)hasAttitudeAndRotationRate;
-(void)_setAttitudeWithControllerUpdate:(GCQuaternion)arg1 ;
@end

