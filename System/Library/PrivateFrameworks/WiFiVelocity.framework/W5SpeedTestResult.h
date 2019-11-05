/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <WiFiVelocity/NSCopying.h>
#import <WiFiVelocity/NSSecureCoding.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding> {

	long long _direction;
	long long _size;
	CLLocation* _location;
	NSError* _error;
	double _speed;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double speed;                     //@synthesize speed=_speed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)size;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(double)speed;
-(void)setSpeed:(double)arg1 ;
-(CLLocation *)location;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end
