/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVGraphicsImageRenderer : NSObject
+(id)preferredFormat;
+(id)formatWithUIImage:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 actions:(/*^block*/id)arg3 ;
+(id)blurRenderer:(id)arg1 renderImage:(id)arg2 targetSize:(CGSize)arg3 scaleSize:(CGSize)arg4 blurStyle:(long long)arg5 blurRadius:(double)arg6 ;
+(id)formatWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)decodedImage:(id)arg1 opaque:(BOOL)arg2 ;
+(id)blurRenderer:(id)arg1 renderImage:(id)arg2 blurStyle:(long long)arg3 targetSize:(CGSize)arg4 blurRadius:(double)arg5 ;
+(id)sharedBlurRenderer;
@end

