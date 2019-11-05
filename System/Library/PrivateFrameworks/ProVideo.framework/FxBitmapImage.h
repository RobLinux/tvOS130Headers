/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxBitmapImage : NSObject {

	FxBitmapImagePriv* _priv;

}
+(id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)bitmapWithSize:(CGSize)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)dealloc;
-(void*)bytes;
-(id)data;
-(CGSize)size;
-(unsigned long long)bytesPerRow;
-(int)pixelFormat;
-(CGColorSpaceRef)colorSpace;
-(CGImageRef)cgImage;
-(id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(CGContextRef)cgContext;
@end

