/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxContext : NSObject {

	FxContextPriv* _priv;

}
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextForCGImageWithOptions:(id)arg1 ;
+(id)contextForGLTextureWithOptions:(id)arg1 ;
+(id)contextWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
+(id)contextForCIImageWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)options;
-(void)setOptions:(id)arg1 ;
-(int)contextType;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(CGImageRef)cgImage;
-(id)ciImage;
-(id)initForCGImageWithOptions:(id)arg1 ;
-(id)initForGLTextureWithOptions:(id)arg1 ;
-(id)initWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
-(id)initForCIImageWithOptions:(id)arg1 ;
-(void)setCGImage:(CGImageRef)arg1 ;
-(CGContextRef)cgContext;
-(void)setGLTexture:(unsigned long long)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(unsigned long long)glTexture;
-(CGSize)glTextureSize;
-(BOOL)glTextureIsFlipped;
-(CGColorSpaceRef)glTextureColorSpace;
-(id)derivedCIContext;
-(void)setCIImage:(id)arg1 ;
-(id)bitmap;
-(void)drawFxSample:(id)arg1 withRegionOfInterest:(id)arg2 ;
@end

