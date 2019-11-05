/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder {

	void* _kernelCommandBufferCurrent;
	void* _kernelCommandBufferEnd;
	IOAccelResourceList* _resourceList;
	MTLResourceList* _api_resourceList;

}
-(void)dealloc;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)endEncoding;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)restartDebugPass;
-(void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(unsigned)addDebugResourceListInfo:(IOAccelResourceInfo*)arg1 flag:(unsigned)arg2 ;
-(void)debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)debugResourceBytes:(unsigned)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)addAPIResource:(id)arg1 ;
-(void)kprintfResource:(unsigned)arg1 length:(unsigned)arg2 ;
-(void)IOLogResource:(unsigned)arg1 length:(unsigned)arg2 ;
@end

