/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _forceFaceprintCreation;

}

@property (assign) BOOL forceFaceprintCreation;              //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)forceFaceprintCreation;
@end

