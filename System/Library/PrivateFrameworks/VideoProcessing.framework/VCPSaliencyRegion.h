/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSaliencyRegion : NSObject {

	float _confidence;
	CGRect _bound;

}

@property (assign) CGRect bound;                  //@synthesize bound=_bound - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)salientRegionsFromPixelBuffer:(CVBufferRef)arg1 ;
+(void)attachSalientRegions:(id)arg1 toPixelBuffer:(CVBufferRef)arg2 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGRect)bound;
-(id)initWith:(CGRect)arg1 confidence:(float)arg2 ;
-(void)setBound:(CGRect)arg1 ;
@end

