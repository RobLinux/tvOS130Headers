/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <Metal/MTLFence.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface MTLIOAccelFence : _MTLObjectWithLabel <MTLFence> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
@end

