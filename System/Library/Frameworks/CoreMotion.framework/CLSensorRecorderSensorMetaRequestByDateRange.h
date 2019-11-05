/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/NSSecureCoding.h>

@interface CLSensorRecorderSensorMetaRequestByDateRange : NSObject <NSSecureCoding> {

	int _dataType;
	double _startTime;
	double _endTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign) int dataType;                  //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
@end

