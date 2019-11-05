/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, ICConnectionConfiguration, NSNumber, ICCloudContentTasteUpdateResponse;

@interface ICCloudContentTasteUpdateOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSArray* _contentTasteItems;
	ICConnectionConfiguration* _configuration;
	BOOL _invalidateLocalCache;
	NSNumber* _DSID;
	ICCloudContentTasteUpdateResponse* _contentTasteUpdateResponse;

}

@property (nonatomic,retain) ICCloudContentTasteUpdateResponse * contentTasteUpdateResponse;              //@synthesize contentTasteUpdateResponse=_contentTasteUpdateResponse - In the implementation block
-(id)init;
-(void)execute;
-(void)_getPBData:(id*)arg1 includedContentTasteItemUpdates:(id*)arg2 fromContentTasteUpdateItems:(id)arg3 ;
-(id)_prepareCachedResponseFromResponse:(id)arg1 byAddingResponseTimeIntervalKey:(BOOL)arg2 withResponseTimeInterval:(id)arg3 ;
-(void)_setCachedContentTasteResponseForActiveAccount:(id)arg1 forUserIdentity:(id)arg2 ;
-(id)_contentTasteUpdateResponseWithServerResponse:(id)arg1 expirationDate:(id)arg2 revisionID:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 ;
-(void)_prepareContentTasteResponse:(id*)arg1 withContentTasteItems:(id*)arg2 fromCachedContentTasteResponseItems:(id)arg3 includedContentTasteItems:(id)arg4 ;
-(void)_getStoreAdamIDLikedState:(id*)arg1 playlistGlobalIDLikedState:(id*)arg2 ;
-(void)_updateContentTasteForMediaItems:(id)arg1 ;
-(void)_updateContentTasteForGlobalPlaylists:(id)arg1 ;
-(void)_setLikedState:(id)arg1 forEntity:(id)arg2 ;
-(id)initWithContentTasteUpdateItems:(id)arg1 invalidateLocalCache:(BOOL)arg2 configuration:(id)arg3 ;
-(ICCloudContentTasteUpdateResponse *)contentTasteUpdateResponse;
-(void)setContentTasteUpdateResponse:(ICCloudContentTasteUpdateResponse *)arg1 ;
@end
