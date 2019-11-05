/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWStatisticsSourceDelegate;
#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NWStatisticsManager;

@interface NWStatisticsSource : NSObject {

	unsigned _filter;
	nstat_counts _last_counts;
	BOOL _removing;
	unsigned _provider;
	id<NWStatisticsSourceDelegate> _delegate;
	NWStatisticsManager* _manager;
	unsigned long long _reference;
	unsigned long long _countsSeqno;
	unsigned long long _descriptorSeqno;

}

@property (retain) id<NWStatisticsSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NWStatisticsManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (assign) unsigned long long reference;                         //@synthesize reference=_reference - In the implementation block
@property (assign) BOOL removing;                                        //@synthesize removing=_removing - In the implementation block
@property (assign) unsigned long long countsSeqno;                       //@synthesize countsSeqno=_countsSeqno - In the implementation block
@property (assign) unsigned long long descriptorSeqno;                   //@synthesize descriptorSeqno=_descriptorSeqno - In the implementation block
@property (readonly) unsigned provider;                                  //@synthesize provider=_provider - In the implementation block
@property (readonly) const nstat_counts* _nstat_counts; 
@property (readonly) unsigned long long sourceIdentifier; 
@property (readonly) unsigned long long snapshotRevision; 
+(id)createSourceForProvider:(unsigned)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)init;
-(id<NWStatisticsSourceDelegate>)delegate;
-(void)setDelegate:(id<NWStatisticsSourceDelegate>)arg1 ;
-(NWStatisticsManager *)manager;
-(unsigned)provider;
-(unsigned long long)reference;
-(void)setReference:(unsigned long long)arg1 ;
-(id)currentSnapshot;
-(void)queryDescription;
-(void)queryCounts;
-(void)queryUpdate;
-(unsigned long long)sourceIdentifier;
-(const nstat_counts*)_nstat_counts;
-(unsigned long long)snapshotRevision;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(id)_currentSnapshot;
-(BOOL)removing;
-(BOOL)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)setRemoving:(BOOL)arg1 ;
-(id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned)arg3 ;
-(unsigned long long)countsSeqno;
-(void)setCountsSeqno:(unsigned long long)arg1 ;
-(unsigned long long)descriptorSeqno;
-(void)setDescriptorSeqno:(unsigned long long)arg1 ;
-(BOOL)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(BOOL)handleCounts:(const nstat_counts*)arg1 ;
@end

