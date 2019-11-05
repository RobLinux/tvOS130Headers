/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/NSCopying.h>
#import <DoNotDisturb/NSSecureCoding.h>

@class NSUUID, NSDate, DNDModeAssertionDetails, DNDModeAssertionSource;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	DNDModeAssertionDetails* _details;
	DNDModeAssertionSource* _source;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                                  //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DNDModeAssertionSource *)source;
-(NSUUID *)UUID;
-(NSDate *)startDate;
-(DNDModeAssertionDetails *)details;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4 ;
@end
