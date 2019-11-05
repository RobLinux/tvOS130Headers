/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DataConsumerDefinition.h>

@class NSString, NSDictionary;

@interface MutableDataConsumerDefinition : DataConsumerDefinition {

	BOOL overrideProgress;
	BOOL streamableZip;
	long long assetID;
	unsigned long long assetSize;
	unsigned long long bytesOffset;
	unsigned long long diskSpaceNeeded;
	NSString* name;
	NSDictionary* streamingZipOptions;
	NSString* transferPath;

}

@property (assign,nonatomic) long long assetID; 
@property (assign,nonatomic) unsigned long long assetSize; 
@property (assign,nonatomic) unsigned long long bytesOffset; 
@property (assign,nonatomic) unsigned long long diskSpaceNeeded; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL overrideProgress; 
@property (assign,getter=isStreamableZip,nonatomic) BOOL streamableZip; 
@property (nonatomic,copy) NSDictionary * streamingZipOptions; 
@property (nonatomic,copy) NSString * transferPath; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)assetID;
-(void)setAssetID:(long long)arg1 ;
-(void)setAssetSize:(unsigned long long)arg1 ;
-(void)setTransferPath:(NSString *)arg1 ;
-(NSString *)transferPath;
-(unsigned long long)assetSize;
-(unsigned long long)diskSpaceNeeded;
-(void)setDiskSpaceNeeded:(unsigned long long)arg1 ;
-(NSDictionary *)streamingZipOptions;
-(void)setStreamingZipOptions:(NSDictionary *)arg1 ;
-(BOOL)overrideProgress;
-(unsigned long long)bytesOffset;
-(BOOL)isStreamableZip;
-(void)setBytesOffset:(unsigned long long)arg1 ;
-(void)setOverrideProgress:(BOOL)arg1 ;
-(void)setStreamableZip:(BOOL)arg1 ;
@end
