/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVImageBufferImpl;
#import <ProVideo/ProVideo-Structs.h>
@interface PVImageBuffer : NSObject {

	id<PVImageBufferImpl> _imageBufferImpl;
	HGSynchronizable* _lock;

}
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithHGBitmap:(HGRef<HGBitmap>*)arg1 ;
+(id)imageWithHGCVPixelBuffer:(HGRef<HGCVPixelBuffer>*)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(CGSize)size;
-(id)debugQuickLookObject;
-(CGImageRef)cgImage;
-(CVBufferRef)cvPixelBuffer;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmap;
-(id)initWithImageBufferImpl:(id)arg1 ;
-(BOOL)cvPixelBufferRequiresCopy;
-(CVBufferRef)cvPixelBufferWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
-(id)uiImage;
@end

