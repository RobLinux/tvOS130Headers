/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject {

	NSMutableDictionary* _inMemorySyncStatistics;

}

@property (nonatomic,retain) NSMutableDictionary * inMemorySyncStatistics;              //@synthesize inMemorySyncStatistics=_inMemorySyncStatistics - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)inMemorySyncStatistics;
-(void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4 ;
-(void)refreshWithDBSyncStatistics;
-(id)currentInMemorySyncStatistics;
-(void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2 ;
-(void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2 ;
-(void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2 ;
-(void)setInMemorySyncStatistics:(NSMutableDictionary *)arg1 ;
@end

