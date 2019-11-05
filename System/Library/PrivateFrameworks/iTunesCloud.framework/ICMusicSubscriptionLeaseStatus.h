/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/NSCopying.h>

@class ICStoreDialogResponse, NSDictionary;

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying> {

	BOOL _shouldPlaybackRequireOnlineKeys;
	BOOL _hasOnlinePlaybackKeys;
	BOOL _hasOfflinePlaybackKeys;
	BOOL _hasPendingLeaseAcquisition;
	long long _leaseState;
	ICStoreDialogResponse* _stateReasonDialog;
	NSDictionary* _stateReasonDialogMetricsDictionary;

}

@property (assign,nonatomic) BOOL hasOnlinePlaybackKeys;                                   //@synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasOfflinePlaybackKeys;                                  //@synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasPendingLeaseAcquisition;                              //@synthesize hasPendingLeaseAcquisition=_hasPendingLeaseAcquisition - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaybackRequireOnlineKeys;                         //@synthesize shouldPlaybackRequireOnlineKeys=_shouldPlaybackRequireOnlineKeys - In the implementation block
@property (assign,nonatomic) long long leaseState;                                         //@synthesize leaseState=_leaseState - In the implementation block
@property (nonatomic,copy) ICStoreDialogResponse * stateReasonDialog;                      //@synthesize stateReasonDialog=_stateReasonDialog - In the implementation block
@property (nonatomic,copy) NSDictionary * stateReasonDialogMetricsDictionary;              //@synthesize stateReasonDialogMetricsDictionary=_stateReasonDialogMetricsDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)shouldPlaybackRequireOnlineKeys;
-(BOOL)hasOnlinePlaybackKeys;
-(BOOL)hasOfflinePlaybackKeys;
-(BOOL)hasPendingLeaseAcquisition;
-(long long)leaseState;
-(ICStoreDialogResponse *)stateReasonDialog;
-(NSDictionary *)stateReasonDialogMetricsDictionary;
-(void)setShouldPlaybackRequireOnlineKeys:(BOOL)arg1 ;
-(void)setHasOnlinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasOfflinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasPendingLeaseAcquisition:(BOOL)arg1 ;
-(void)setLeaseState:(long long)arg1 ;
-(void)setStateReasonDialog:(ICStoreDialogResponse *)arg1 ;
-(void)setStateReasonDialogMetricsDictionary:(NSDictionary *)arg1 ;
@end

