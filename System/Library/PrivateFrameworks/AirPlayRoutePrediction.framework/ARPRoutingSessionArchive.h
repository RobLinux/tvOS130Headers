/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <AirPlayRoutePrediction/NSCopying.h>
#import <AirPlayRoutePrediction/NSSecureCoding.h>

@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sessions;
	double _routingSessionTimeout;

}

@property (nonatomic,readonly) NSArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) double routingSessionTimeout;              //@synthesize routingSessionTimeout=_routingSessionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sessions;
-(id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2 ;
-(double)routingSessionTimeout;
@end

