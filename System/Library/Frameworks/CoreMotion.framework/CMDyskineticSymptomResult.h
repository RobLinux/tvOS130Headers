/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSCopying.h>
#import <CoreMotion/NSSecureCoding.h>

@class NSDate;

@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding> {

	float _percentUnlikely;
	float _percentLikely;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) float percentUnlikely;                //@synthesize percentUnlikely=_percentUnlikely - In the implementation block
@property (nonatomic,readonly) float percentLikely;                  //@synthesize percentLikely=_percentLikely - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4 ;
-(float)percentUnlikely;
-(float)percentLikely;
-(id)initWithParkinsonsResult:(const ParkinsonsResult*)arg1 ;
@end

