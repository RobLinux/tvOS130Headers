/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOSQLiteDB, _GEOTileDBWriteQueue, GEOCountryConfiguration, GEOResourceManifestManager, geo_isolater, NSString, NSMutableDictionary, NSURL;

@interface GEOTileDB : NSObject {

	GEOSQLiteDB* _db;
	_GEOTileDBWriteQueue* _writeQueue;
	unsigned long long _maxDatabaseSize;
	unsigned long long _tileDataSize;
	BOOL _tileDataSizeIsValid;
	GEOCountryConfiguration* _countryConfiguration;
	GEOResourceManifestManager* _manifestManager;
	geo_isolater* _infrequentlyChangingMetadataIsolater;
	SCD_Struct_GE59* _expirationRecords;
	unsigned long long _expirationRecordsCount;
	BOOL _preloading;
	NSString* _devicePostureLocale;
	NSString* _devicePostureCountry;
	NSString* _devicePostureRegion;
	NSMutableDictionary* _editionsMap;
	NSURL* _baseDirectory;
	NSURL* _externalDataDirectory;

}

@property (nonatomic,readonly) NSString * devicePostureCountry; 
@property (nonatomic,readonly) NSString * devicePostureRegion; 
-(id)init;
-(void)tearDown;
-(BOOL)_setup:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)endPreloadSession;
-(unsigned long long)calculateFreeableSizeSync;
-(void)_performOnDBQueue:(/*^block*/id)arg1 ;
-(void)_performInTransaction:(/*^block*/id)arg1 ;
-(void)_evictIfNecessary;
-(id)initWithBaseDirectory:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 maximumDatabaseSize:(unsigned long long)arg4 ;
-(id)_setupDB:(id)arg1 ;
-(void)_deviceLocked:(id)arg1 ;
-(void)_countryChanged:(id)arg1 ;
-(void)_editionUpdate:(id)arg1 ;
-(void)_flushPendingWrites;
-(BOOL)_deleteAndRecreateDB;
-(void)_updateDevicePosture;
-(void)flushPendingWritesWithGroup:(id)arg1 ;
-(void)_invalidateAllTileData;
-(void)_invalidateTileSet:(unsigned)arg1 ;
-(void)_deleteTileSet:(unsigned)arg1 ;
-(void)_setEdition:(unsigned)arg1 forTileSet:(unsigned)arg2 ;
-(unsigned long long)_shrinkToSize:(unsigned long long)arg1 ;
-(unsigned long long)_shrinkBySize:(unsigned long long)arg1 ;
-(unsigned long long)_allTileDataSize;
-(unsigned long long)_shrinkBySizeSlow:(unsigned long long)arg1 ;
-(void)_evictVeryOldTiles;
-(void)_cleanUpOrphanedExternalResources;
-(void)_decrementCalculatedTileDataSize:(unsigned long long)arg1 ;
-(BOOL)_isTileSetTTLExpired:(unsigned)arg1 age:(double)arg2 ;
-(BOOL)_dataForKeyOnDBQueue:(const GEOTileKey*)arg1 reason:(unsigned char)arg2 callbackQueue:(id)arg3 dataHandler:(/*^block*/id)arg4 ;
-(void)addData:(id)arg1 forKey:(const GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(BOOL)arg8 ;
-(void)_incrementCalculatedTileDataSize:(unsigned long long)arg1 ;
-(void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg1 newDevicePostureRegion:(id)arg2 oldDevicePostureCountry:(id)arg3 oldDevicePostureRegion:(id)arg4 ;
-(void)_enumerateAllKeysOnQueueIncludingData:(BOOL)arg1 dataHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)initWithBaseDirectory:(id)arg1 ;
-(NSString *)devicePostureCountry;
-(NSString *)devicePostureRegion;
-(void)setExpirationRecords:(SCD_Struct_GE59*)arg1 count:(unsigned long long)arg2 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)shrinkToSize:(unsigned long long)arg1 queue:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)shrinkBySize:(unsigned long long)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(unsigned long long)shrinkToSizeSync:(unsigned long long)arg1 ;
-(unsigned long long)shrinkBySizeSync:(unsigned long long)arg1 ;
-(void)calculateFreeableSizeWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataForKeys:(id)arg1 reason:(unsigned char)arg2 group:(id)arg3 callbackQueue:(id)arg4 dataHandler:(/*^block*/id)arg5 ;
-(void)addData:(id)arg1 forKey:(const GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 reason:(unsigned char)arg7 ;
-(void)getLastAccessTimestampForKey:(const GEOTileKey*)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)getStaleTileKeysUsedSince:(double)arg1 fromTileSets:(id)arg2 maxCount:(unsigned long long)arg3 maxTotalSize:(unsigned long long)arg4 queue:(id)arg5 callback:(/*^block*/id)arg6 ;
-(BOOL)_markExistingTileDataAsCurrentOnDBQueue:(const GEOTileKey*)arg1 reason:(unsigned char)arg2 ;
-(void)_addDataOnDBQueueWithData:(id)arg1 key:(const GEOTileKey*)arg2 tileSet:(unsigned)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 ;
-(void)_setLastAccessTimeOnDBQueue:(double)arg1 forKey:(const GEOTileKey*)arg2 ;
-(void)deleteDataForKey:(const GEOTileKey*)arg1 ;
-(void)_deleteDataOnDBQueueForKey:(const GEOTileKey*)arg1 ;
-(void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1 ;
-(void)evictVeryOldTilesWithGroup:(id)arg1 ;
-(void)enumerateAllKeysIncludingData:(BOOL)arg1 onQueue:(id)arg2 group:(id)arg3 dataHandler:(/*^block*/id)arg4 ;
@end

