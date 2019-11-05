/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSString, NSDictionary, ICUserIdentity;

@interface MPCAssistantPlaybackQueue : NSObject {

	BOOL _shouldOverrideManuallyCuratedQueue;
	BOOL _shouldImmediatelyStartPlayback;
	NSString* _contextID;
	NSString* _siriRecommendationID;
	NSString* _siriAssetInfo;
	NSDictionary* _siriWHAMetricsInfo;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,copy,readonly) NSString * contextID;                          //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) BOOL supportedOnCurrentPlatform; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;              //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldImmediatelyStartPlayback;                  //@synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback - In the implementation block
@property (nonatomic,copy) NSString * siriRecommendationID;                        //@synthesize siriRecommendationID=_siriRecommendationID - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                               //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                      //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;                          //@synthesize userIdentity=_userIdentity - In the implementation block
-(NSString *)contextID;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
-(NSString *)siriAssetInfo;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(id)initWithContextID:(id)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)supportedOnCurrentPlatform;
-(BOOL)shouldImmediatelyStartPlayback;
-(void)setShouldImmediatelyStartPlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationID;
-(void)setSiriRecommendationID:(NSString *)arg1 ;
@end

