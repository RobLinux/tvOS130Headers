/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVCMSampleBuffer, AVDepthData, PVImageBuffer;

@interface PVFrameSet : NSObject {

	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _mdLock;
	NSMutableDictionary* _metadata;
	PVCMSampleBuffer* _colorSampleBuffer;
	AVDepthData* _depthData;
	PVImageBuffer* _alphaMaskImageBuffer;

}

@property (nonatomic,readonly) PVCMSampleBuffer * colorSampleBuffer;               //@synthesize colorSampleBuffer=_colorSampleBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV19 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                            //@synthesize depthData=_depthData - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                           //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
-(AVDepthData *)depthData;
-(SCD_Struct_PV19)presentationTimeStamp;
-(NSDictionary*)metadataDict;
-(void)setMetadataDict:(NSDictionary*)arg1 ;
-(id)initWithColorBuffer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(PVImageBuffer *)colorImageBuffer;
-(PVCMSampleBuffer *)colorSampleBuffer;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
-(void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(id)metadataObjectForKey:(id)arg1 ;
-(void)setMetadataObject:(id)arg1 forKey:(id)arg2 ;
@end

