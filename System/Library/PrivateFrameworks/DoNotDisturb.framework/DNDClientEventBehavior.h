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

@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding> {

	DNDClientEventDetails* _eventDetails;
	unsigned long long _interruptionSuppression;

}

@property (nonatomic,copy,readonly) DNDClientEventDetails * eventDetails;               //@synthesize eventDetails=_eventDetails - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DNDClientEventDetails *)eventDetails;
-(unsigned long long)interruptionSuppression;
-(id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2 ;
@end

