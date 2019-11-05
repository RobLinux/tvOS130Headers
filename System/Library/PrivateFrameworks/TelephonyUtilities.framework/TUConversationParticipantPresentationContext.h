/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/NSSecureCoding.h>

@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding> {

	unsigned long long _participantIdentifier;
	unsigned long long _videoQuality;
	NSNumber* _visibility;
	NSNumber* _prominence;

}

@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoQuality;                       //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,readonly) NSNumber * visibility;                                 //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) NSNumber * prominence;                                 //@synthesize prominence=_prominence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)visibility;
-(unsigned long long)participantIdentifier;
-(unsigned long long)videoQuality;
-(NSNumber *)prominence;
-(id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 ;
@end

