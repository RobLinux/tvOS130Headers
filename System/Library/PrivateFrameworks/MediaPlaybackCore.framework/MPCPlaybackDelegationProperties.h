/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/NSCopying.h>
#import <MediaPlaybackCore/NSMutableCopying.h>
#import <MediaPlaybackCore/NSSecureCoding.h>

@class NSString, MPCPrivateListeningStateSource, NSTimeZone;

@interface MPCPlaybackDelegationProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _deviceGUID;
	NSString* _deviceName;
	MPCPrivateListeningStateSource* _privateListeningStateSource;
	long long _systemReleaseType;
	NSString* _requestUserAgent;
	unsigned long long _storeAccountID;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) unsigned long long storeAccountID;                                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;                                                     //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) MPCPrivateListeningStateSource * privateListeningStateSource;              //@synthesize privateListeningStateSource=_privateListeningStateSource - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                    //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestUserAgent;                                               //@synthesize requestUserAgent=_requestUserAgent - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timeZone;                                                     //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSString *)deviceName;
-(long long)systemReleaseType;
-(NSString *)deviceGUID;
-(unsigned long long)storeAccountID;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(MPCPrivateListeningStateSource *)privateListeningStateSource;
-(id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2 privateListeningStateSource:(id)arg3 ;
-(NSString *)requestUserAgent;
@end

