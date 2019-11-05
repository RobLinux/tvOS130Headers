/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class NSError, NSOperation, TVHDMediaServerLoginSession, TVHDMediaServerRequestSession;

@interface TVHDMediaServerDPAPStateOperation : TVHSAsynchronousOperation {

	BOOL _importingDatabase;
	unsigned _databaseID;
	unsigned _basePlaylistID;
	unsigned long long _databasePersistentID;
	unsigned long long _basePlaylistPersistentID;
	NSError* _error;
	NSOperation* _currentSubOperation;
	TVHDMediaServerLoginSession* _loginSession;
	TVHDMediaServerRequestSession* _requestSession;

}

@property (assign,nonatomic) unsigned databaseID;                                            //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long databasePersistentID;                        //@synthesize databasePersistentID=_databasePersistentID - In the implementation block
@property (assign,nonatomic) unsigned basePlaylistID;                                        //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistPersistentID;                    //@synthesize basePlaylistPersistentID=_basePlaylistPersistentID - In the implementation block
@property (assign,getter=isImportingDatabase,nonatomic) BOOL importingDatabase;              //@synthesize importingDatabase=_importingDatabase - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                              //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,copy) TVHDMediaServerLoginSession * loginSession;                       //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,retain) TVHDMediaServerRequestSession * requestSession;                 //@synthesize requestSession=_requestSession - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)setDatabaseID:(unsigned)arg1 ;
-(unsigned)databaseID;
-(void)executionDidBegin;
-(void)setLoginSession:(TVHDMediaServerLoginSession *)arg1 ;
-(TVHDMediaServerLoginSession *)loginSession;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(unsigned)basePlaylistID;
-(void)setBasePlaylistID:(unsigned)arg1 ;
-(void)_startSubOperation:(id)arg1 ;
-(TVHDMediaServerRequestSession *)requestSession;
-(void)setRequestSession:(TVHDMediaServerRequestSession *)arg1 ;
-(void)_startDatabasesOperation;
-(id)initWithLoginSession:(id)arg1 requestSession:(id)arg2 ;
-(unsigned long long)databasePersistentID;
-(void)_startBasePlaylistOperation;
-(BOOL)isImportingDatabase;
-(void)setImportingDatabase:(BOOL)arg1 ;
-(unsigned long long)basePlaylistPersistentID;
-(void)setDatabasePersistentID:(unsigned long long)arg1 ;
-(void)setBasePlaylistPersistentID:(unsigned long long)arg1 ;
@end

