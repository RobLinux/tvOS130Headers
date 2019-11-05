/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject {

	NSString* device_name;
	NSString* pool;
	unsigned long long allocatedSize;
	unsigned long long residentSize;
	unsigned long long wiredSize;
	unsigned long long dirtySize;
	unsigned long long purgeableSize;
	unsigned long long nonpurgeableSize;
	unsigned long long orphanedSize;

}

@property (retain) NSString * device_name; 
@property (retain) NSString * pool; 
@property (assign) unsigned long long allocatedSize; 
@property (assign) unsigned long long residentSize; 
@property (assign) unsigned long long wiredSize; 
@property (assign) unsigned long long dirtySize; 
@property (assign) unsigned long long purgeableSize; 
@property (assign) unsigned long long nonpurgeableSize; 
@property (assign) unsigned long long orphanedSize; 
-(void)dealloc;
-(unsigned long long)allocatedSize;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(NSString *)pool;
-(void)setPool:(NSString *)arg1 ;
-(unsigned long long)purgeableSize;
-(NSString *)device_name;
-(void)setDevice_name:(NSString *)arg1 ;
-(void)setAllocatedSize:(unsigned long long)arg1 ;
-(void)setResidentSize:(unsigned long long)arg1 ;
-(unsigned long long)wiredSize;
-(void)setWiredSize:(unsigned long long)arg1 ;
-(void)setDirtySize:(unsigned long long)arg1 ;
-(void)setPurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)nonpurgeableSize;
-(void)setNonpurgeableSize:(unsigned long long)arg1 ;
-(unsigned long long)orphanedSize;
-(void)setOrphanedSize:(unsigned long long)arg1 ;
@end

