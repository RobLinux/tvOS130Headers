/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <MetalTools/MTLResourceSPI.h>

@class MTLResourceAllocationInfo, MTLToolsHeap, NSString;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {

	unsigned long long _options;
	MTLToolsHeap* _heap;

}

@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(unsigned long long)options;
-(NSString *)label;
-(unsigned long long)protectionOptions;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(BOOL)isComplete;
-(void)waitUntilComplete;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)resourceOptions;
-(id<MTLHeap>)heap;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(BOOL)isPurgeable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(unsigned long long)unfilteredResourceOptions;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3 ;
-(void)validateCPUReadable;
-(void)validateCPUWriteable;
@end

