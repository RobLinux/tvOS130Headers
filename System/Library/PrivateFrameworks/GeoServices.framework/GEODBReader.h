/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface GEODBReader : NSObject {

	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSString* _path;
	NSDictionary* _pragmaOverrides;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	SCD_Struct_GE59* _expirationRecords;
	unsigned long long _expirationRecordCount;

}

@property (assign) BOOL closed; 
-(void)dealloc;
-(void)_closeDB;
-(id)initWithPath:(id)arg1 ;
-(BOOL)closed;
-(void)setExpirationRecords:(SCD_Struct_GE59*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 ;
-(void)_databaseReset:(id)arg1 ;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(void)_openDB;
-(id)_dataForA:(unsigned)arg1 andB:(unsigned)arg2 andC:(unsigned)arg3 andD:(unsigned)arg4 isCurrent:(BOOL*)arg5 eTag:(id*)arg6 ;
-(id)_dataForKey:(GEOTileKey)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(void)setClosed:(BOOL)arg1 ;
-(id)dataForKey:(GEOTileKey*)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(void)dataForKeys:(GEOTileKeyList*)arg1 callbackQueue:(id)arg2 asyncHandler:(/*^block*/id)arg3 ;
@end

