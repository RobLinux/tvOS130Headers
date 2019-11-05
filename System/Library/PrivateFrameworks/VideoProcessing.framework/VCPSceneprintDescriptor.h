/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPDistanceDescriptorProtocol.h>

@class VNSceneprint;

@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol> {

	VNSceneprint* _sceneprint;

}
+(BOOL)usePHAssetData;
+(int)preferredPixelFormat;
+(id)descriptorWithImage:(CVBufferRef)arg1 ;
+(id)descriptorWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2 ;
@end

