/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GEONavdCacheDBWriter, GEONavdCacheDBReader, NSObject;

@interface GEONavdCachePersistenceManager : NSObject {

	GEONavdCacheDBWriter* _writer;
	GEONavdCacheDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)tearDown;
-(void)_removeOldFormatCacheFromPath:(id)arg1 ;
-(long long)_threadUnsafeRowIdOfKey:(id)arg1 ;
-(void)_deleteFromDiskWithKey:(id)arg1 ;
-(long long)_numberOfEntries;
-(double)_nextTimeStampForRefreshTimer;
-(id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(long long)_rowIdOfKey:(id)arg1 ;
-(id)_entryWithRowId:(long long)arg1 ;
-(long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2 ;
-(id)_readValueWithKey:(id)arg1 ;
-(void)_deleteRowWithRowId:(long long)arg1 ;
-(void)_enumerateAllEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_removeAllEntries;
@end

