/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, SSVSecureKeyDeliveryRequestOperationDelegate;
@class NSObject, NSURL, AVAssetResourceLoadingRequest, NSDictionary, NSData, NSNumber;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSURL* _certificateURL;
	NSURL* _keyServerURL;
	AVAssetResourceLoadingRequest* _resourceLoadingRequest;
	/*^block*/id _responseBlock;
	BOOL _iTunesStoreRequest;
	BOOL _shouldIncludeGUID;
	NSDictionary* _URLBagDictionary;
	NSData* _persistentContentKeyContext;
	NSData* _serverPlaybackContextData;
	BOOL _skippedRentalCheckout;
	BOOL _offline;
	NSNumber* _rentalId;
	long long _leaseAction;
	double _expirationTime;
	double _playbackStartTime;
	id<SSVSecureKeyDeliveryRequestOperationDelegate> _serverPlaybackContextDataDelegate;

}

@property (nonatomic,copy,readonly) NSData * persistentContentKeyContext;                                                            //@synthesize persistentContentKeyContext=_persistentContentKeyContext - In the implementation block
@property (assign,nonatomic) long long leaseAction;                                                                                  //@synthesize leaseAction=_leaseAction - In the implementation block
@property (assign) BOOL offline;                                                                                                     //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) double expirationTime;                                                                                //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,readonly) double playbackStartTime;                                                                             //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<SSVSecureKeyDeliveryRequestOperationDelegate> serverPlaybackContextDataDelegate;              //@synthesize serverPlaybackContextDataDelegate=_serverPlaybackContextDataDelegate - In the implementation block
@property (nonatomic,retain) NSData * serverPlaybackContextData;                                                                     //@synthesize serverPlaybackContextData=_serverPlaybackContextData - In the implementation block
@property (retain) NSURL * certificateURL;                                                                                           //@synthesize certificateURL=_certificateURL - In the implementation block
@property (retain) NSURL * keyServerURL;                                                                                             //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;                                                           //@synthesize resourceLoadingRequest=_resourceLoadingRequest - In the implementation block
@property (copy) NSNumber * rentalId;                                                                                                //@synthesize rentalId=_rentalId - In the implementation block
@property (assign) BOOL skippedRentalCheckout;                                                                                       //@synthesize skippedRentalCheckout=_skippedRentalCheckout - In the implementation block
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest; 
@property (assign,nonatomic) BOOL shouldIncludeGUID; 
@property (copy) id responseBlock;                                                                                                   //@synthesize responseBlock=_responseBlock - In the implementation block
-(id)init;
-(void)start;
-(void)main;
-(void)setOffline:(BOOL)arg1 ;
-(BOOL)offline;
-(double)expirationTime;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(void)_sendResponseBlockWithError:(id)arg1 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(void)setServerPlaybackContextData:(NSData *)arg1 ;
-(id<SSVSecureKeyDeliveryRequestOperationDelegate>)serverPlaybackContextDataDelegate;
-(id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3 ;
-(id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1 ;
-(id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 renewAfter:(double*)arg3 error:(id*)arg4 ;
-(double)_expirationTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 ;
-(double)_playbackStartTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 ;
-(void)setPersistentContentKeyContext:(NSData *)arg1 ;
-(double)_timeIntervalForStreamingKeyID:(long long)arg1 responseKey:(id)arg2 streamingKeyDictionaries:(id)arg3 ;
-(NSNumber *)rentalId;
-(BOOL)skippedRentalCheckout;
-(BOOL)shouldIncludeGUID;
-(long long)leaseAction;
-(NSURL *)certificateURL;
-(NSURL *)keyServerURL;
-(NSData *)persistentContentKeyContext;
-(AVAssetResourceLoadingRequest *)resourceLoadingRequest;
-(id)responseBlock;
-(NSData *)serverPlaybackContextData;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)setResourceLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)setShouldIncludeGUID:(BOOL)arg1 ;
-(BOOL)isITunesStoreRequest;
-(void)setRentalId:(NSNumber *)arg1 ;
-(void)setSkippedRentalCheckout:(BOOL)arg1 ;
-(void)setLeaseAction:(long long)arg1 ;
-(double)playbackStartTime;
-(void)setServerPlaybackContextDataDelegate:(id<SSVSecureKeyDeliveryRequestOperationDelegate>)arg1 ;
@end

