/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMPixelBufferWrapper : NSObject {

	CVBufferRef _pixelBuffer;
	unsigned _orientation;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) CGSize unorientedSize; 
@property (nonatomic,readonly) CGSize orientedSize; 
+(id)new;
+(id)wrapperWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned)orientation;
-(CVBufferRef)pixelBuffer;
-(CGSize)orientedSize;
-(id)_initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(CGSize)unorientedSize;
@end

