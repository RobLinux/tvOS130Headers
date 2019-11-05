/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/NSCopying.h>

@class NSDate, NSDictionary;

@interface TSTAIUTCValue : NSObject <NSCopying> {

	NSDate* _utcDate;
	NSDate* _taiDate;
	unsigned long long _modifiedJulianDay;
	double _constant;
	double _coefficient;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSDate * utcDate;                                  //@synthesize utcDate=_utcDate - In the implementation block
@property (nonatomic,retain) NSDate * taiDate;                                  //@synthesize taiDate=_taiDate - In the implementation block
@property (assign,nonatomic) unsigned long long modifiedJulianDay;              //@synthesize modifiedJulianDay=_modifiedJulianDay - In the implementation block
@property (assign,nonatomic) double constant;                                   //@synthesize constant=_constant - In the implementation block
@property (assign,nonatomic) double coefficient;                                //@synthesize coefficient=_coefficient - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                         //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(double)constant;
-(void)setConstant:(double)arg1 ;
-(double)coefficient;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(NSDate *)utcDate;
-(NSDate *)taiDate;
-(unsigned long long)modifiedJulianDay;
-(void)setUtcDate:(NSDate *)arg1 ;
-(void)setTaiDate:(NSDate *)arg1 ;
-(void)setModifiedJulianDay:(unsigned long long)arg1 ;
-(void)setCoefficient:(double)arg1 ;
@end

