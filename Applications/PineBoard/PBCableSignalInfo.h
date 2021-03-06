/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <PineBoard/NSSecureCoding.h>
#import <PineBoard/NSCopying.h>

@class NSDate;

@interface PBCableSignalInfo : NSObject <NSSecureCoding, NSCopying> {

	int _linkQuality;
	NSDate* _date;
	double _cableCheckTime;

}

@property (assign,nonatomic) int linkQuality;                      //@synthesize linkQuality=_linkQuality - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double cableCheckTime;              //@synthesize cableCheckTime=_cableCheckTime - In the implementation block
@property (nonatomic,readonly) long long cableStatus; 
+(BOOL)supportsSecureCoding;
+(int)_linkQuality;
+(id)currentInfoWithLastCableCheckTime:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(id)initWithDate:(id)arg1 cableCheckTime:(double)arg2 linkQuality:(int)arg3 ;
-(double)cableCheckTime;
-(long long)cableStatus;
@end

