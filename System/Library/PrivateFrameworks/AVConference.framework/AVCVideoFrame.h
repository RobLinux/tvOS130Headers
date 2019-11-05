/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSData;

@interface AVCVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	CVBufferRef _depthPixelBuffer;
	SCD_Struct_AV75 _time;
	NSData* _imageData;
	NSData* _effectsMetadata;
	float _renderProcessTime;
	id _delegate;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                   //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthPixelBuffer;              //@synthesize depthPixelBuffer=_depthPixelBuffer - In the implementation block
@property (retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign) SCD_Struct_AV75 time;                                //@synthesize time=_time - In the implementation block
@property (retain) NSData * effectsMetadata;                            //@synthesize effectsMetadata=_effectsMetadata - In the implementation block
@property (assign) float renderProcessTime;                             //@synthesize renderProcessTime=_renderProcessTime - In the implementation block
-(void)dealloc;
-(id)delegate;
-(SCD_Struct_AV75)time;
-(NSData *)imageData;
-(void)setTime:(SCD_Struct_AV75)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)effectsMetadata;
-(void)setEffectsMetadata:(NSData *)arg1 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_AV75)arg3 imageData:(id)arg4 delegate:(id)arg5 ;
-(float)renderProcessTime;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV75)arg2 imageData:(id)arg3 ;
-(void)setDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setRenderProcessTime:(float)arg1 ;
-(CVBufferRef)depthPixelBuffer;
@end

