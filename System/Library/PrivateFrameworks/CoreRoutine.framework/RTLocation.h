/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/NSCopying.h>
#import <CoreRoutine/NSSecureCoding.h>

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _uncertainty;
	NSDate* _date;
	double _speed;

}

@property (nonatomic,readonly) double speed;                    //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;              //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)speed;
-(double)latitude;
-(double)longitude;
-(int)referenceFrame;
-(double)uncertainty;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 speed:(double)arg6 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(id)coordinateToString;
@end

