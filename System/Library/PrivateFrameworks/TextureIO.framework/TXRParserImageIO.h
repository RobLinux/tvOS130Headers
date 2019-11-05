/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TextureIO-Structs.h>
#import <TextureIO/TXRParser.h>

@class TXRTextureInfo, TXRImageInfo, NSString;

@interface TXRParserImageIO : NSObject <TXRParser> {

	TXRTextureInfo* _textureInfo;
	TXRImageInfo* _imageInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TXRTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
+(BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
+(BOOL)handlesData:(id)arg1 ;
+(BOOL)exportImage:(id)arg1 url:(id)arg2 uttype:(const CFStringRef)arg3 colorSpace:(CGColorSpaceRef)arg4 orientation:(unsigned char)arg5 error:(id*)arg6 ;
+(id)decodeCGImage:(CGImageRef)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)decodeCGImageNonIndexed:(CGImageRef)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(int)determineColorSpaceClass:(CGImageRef)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3 ;
+(CGImageRef)newCGImageFromImage:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 error:(id*)arg3 ;
-(BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
@end

