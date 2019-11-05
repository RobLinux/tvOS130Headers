/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSArray;

@interface VNImageBasedRequestConfiguration : VNRequestConfiguration {

	NSArray* _inputFaceObservations;
	CGRect _regionOfInterest;

}

@property (assign,nonatomic) CGRect regionOfInterest;                    //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (nonatomic,copy) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(NSArray *)inputFaceObservations;
-(CGRect)regionOfInterest;
-(void)setRegionOfInterest:(CGRect)arg1 ;
@end

