/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, NSString;

@interface MediaSocialStatusPollRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _activityIdentifier;
	double _pollingDuration;
	double _pollingInterval;
	long long _postIdentifier;
	NSString* _sourceApplicationIdentifier;
	double _postCreateTime;

}

@property (nonatomic,copy) NSString * activityIdentifier;                       //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) double pollingDuration;                            //@synthesize pollingDuration=_pollingDuration - In the implementation block
@property (assign,nonatomic) double pollingInterval;                            //@synthesize pollingInterval=_pollingInterval - In the implementation block
@property (assign,nonatomic) long long postIdentifier;                          //@synthesize postIdentifier=_postIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationIdentifier;              //@synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier - In the implementation block
@property (assign,nonatomic) double postCreateTime;                             //@synthesize postCreateTime=_postCreateTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(double)pollingInterval;
-(void)setSourceApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationIdentifier;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setPollingInterval:(double)arg1 ;
-(void)setPollingDuration:(double)arg1 ;
-(void)setPostIdentifier:(long long)arg1 ;
-(void)setPostCreateTime:(double)arg1 ;
-(double)pollingDuration;
-(long long)postIdentifier;
-(double)postCreateTime;
@end

