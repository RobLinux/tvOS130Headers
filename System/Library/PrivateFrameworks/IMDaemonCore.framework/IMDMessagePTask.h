/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMDMessagePTask : NSObject {

	NSString* _guid;
	unsigned long long _taskFlags;

}

@property (nonatomic,readonly) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned long long taskFlags;              //@synthesize taskFlags=_taskFlags - In the implementation block
-(void)dealloc;
-(NSString *)guid;
-(id)initWithGUID:(id)arg1 ;
-(BOOL)needsProccesingFor:(unsigned long long)arg1 ;
-(void)compeletedTask:(unsigned long long)arg1 ;
-(void)setTaskFlag:(unsigned long long)arg1 ;
-(id)initWithStoreDictionary:(id)arg1 ;
-(unsigned long long)taskFlags;
@end

