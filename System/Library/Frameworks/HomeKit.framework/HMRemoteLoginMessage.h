/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKit/NSSecureCoding.h>

@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding> {

	NSString* _sessionID;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
-(id)initNewMessage;
@end

