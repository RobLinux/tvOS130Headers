/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKMediaEntityFetchRequest, TVHSMediaServerIdentifier, TVHSMediaServerProtocolVersion, TVHKMediaEntityFetchResponse, NSError, NSArray, NSPredicate;

@interface TVHKMediaEntityFetchOperation : TVHSAsynchronousOperation {

	BOOL _processRangeAfterFetch;
	TVHKMediaEntityFetchRequest* _request;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	TVHSMediaServerProtocolVersion* _protocolVersion;
	unsigned long long _databaseID;
	unsigned long long _basePlaylistID;
	unsigned long long _currentServerRevision;
	TVHKMediaEntityFetchResponse* _response;
	NSError* _error;
	NSArray* _postFetchSortDescriptors;
	NSPredicate* _postFetchPredicate;

}

@property (nonatomic,copy) TVHKMediaEntityFetchRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * response;                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSArray * postFetchSortDescriptors;                             //@synthesize postFetchSortDescriptors=_postFetchSortDescriptors - In the implementation block
@property (nonatomic,copy) NSPredicate * postFetchPredicate;                               //@synthesize postFetchPredicate=_postFetchPredicate - In the implementation block
@property (assign,nonatomic) BOOL processRangeAfterFetch;                                  //@synthesize processRangeAfterFetch=_processRangeAfterFetch - In the implementation block
@property (nonatomic,copy) TVHSMediaServerProtocolVersion * protocolVersion;               //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistID;                            //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long currentServerRevision;                     //@synthesize currentServerRevision=_currentServerRevision - In the implementation block
-(id)init;
-(NSError *)error;
-(TVHKMediaEntityFetchRequest *)request;
-(void)setRequest:(TVHKMediaEntityFetchRequest *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaEntityFetchResponse *)response;
-(void)setResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)setProtocolVersion:(TVHSMediaServerProtocolVersion *)arg1 ;
-(TVHSMediaServerProtocolVersion *)protocolVersion;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 ;
-(void)setPostFetchPredicate:(NSPredicate *)arg1 ;
-(id)_processFetchedMediaEntities:(id)arg1 ;
-(unsigned long long)basePlaylistID;
-(NSPredicate *)postFetchPredicate;
-(NSArray *)postFetchSortDescriptors;
-(BOOL)processRangeAfterFetch;
-(id)_mediaEntities:(id)arg1 subarrayWithRange:(NSRange)arg2 ;
-(void)setBasePlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)currentServerRevision;
-(void)setCurrentServerRevision:(unsigned long long)arg1 ;
-(void)setPostFetchSortDescriptors:(NSArray *)arg1 ;
-(void)setProcessRangeAfterFetch:(BOOL)arg1 ;
@end

