/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXGDisplayAssetPixelBufferSource;
@class NSMutableIndexSet, NSIndexSet;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject {

	NSMutableIndexSet* _textureRequestIDs;
	id<PXGDisplayAssetPixelBufferSource> _pixelBufferSource;

}

@property (nonatomic,readonly) id<PXGDisplayAssetPixelBufferSource> pixelBufferSource;              //@synthesize pixelBufferSource=_pixelBufferSource - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * textureRequestIDs; 
-(NSIndexSet *)textureRequestIDs;
-(void)removeTextureRequestIDs:(id)arg1 ;
-(id<PXGDisplayAssetPixelBufferSource>)pixelBufferSource;
-(void)addTextureRequestID:(int)arg1 ;
-(id)initWithPixelBufferSource:(id)arg1 ;
-(void)removeTextureRequestID:(int)arg1 ;
@end
