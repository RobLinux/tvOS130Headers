/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSNumber, NSData;

@interface IDSKeyTransparencyVerificationState : NSObject {

	NSNumber* _transparencyStatus;
	NSData* _transparencyBlob;

}

@property (nonatomic,readonly) NSNumber * transparencyStatus;              //@synthesize transparencyStatus=_transparencyStatus - In the implementation block
@property (nonatomic,readonly) NSData * transparencyBlob;                  //@synthesize transparencyBlob=_transparencyBlob - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithTransparencyStatus:(id)arg1 transparencyBlob:(id)arg2 ;
-(NSNumber *)transparencyStatus;
-(NSData *)transparencyBlob;
-(BOOL)isEqualToKeyTransparencyVerificationState:(id)arg1 ;
@end

