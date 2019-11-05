/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface DataPromiseSpecification : NSObject <NSCopying> {

	unsigned long long _archiveSize;
	unsigned long long _diskSpaceNeeded;
	NSString* _name;
	long long _promiseType;
	NSNumber* _referenceID;
	NSDictionary* _streamingZipOptions;
	NSString* _transferPath;

}

@property (assign) unsigned long long archiveSize;                  //@synthesize archiveSize=_archiveSize - In the implementation block
@property (assign) unsigned long long diskSpaceNeeded;              //@synthesize diskSpaceNeeded=_diskSpaceNeeded - In the implementation block
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) long long promiseType;                           //@synthesize promiseType=_promiseType - In the implementation block
@property (retain) NSNumber * referenceID;                          //@synthesize referenceID=_referenceID - In the implementation block
@property (copy) NSDictionary * streamingZipOptions;                //@synthesize streamingZipOptions=_streamingZipOptions - In the implementation block
@property (copy) NSString * transferPath;                           //@synthesize transferPath=_transferPath - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setTransferPath:(NSString *)arg1 ;
-(NSString *)transferPath;
-(NSNumber *)referenceID;
-(void)setReferenceID:(NSNumber *)arg1 ;
-(unsigned long long)archiveSize;
-(void)setArchiveSize:(unsigned long long)arg1 ;
-(unsigned long long)diskSpaceNeeded;
-(void)setDiskSpaceNeeded:(unsigned long long)arg1 ;
-(long long)promiseType;
-(void)setPromiseType:(long long)arg1 ;
-(NSDictionary *)streamingZipOptions;
-(void)setStreamingZipOptions:(NSDictionary *)arg1 ;
@end

