/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject {

	long long _year;
	NSMutableSet* _months;

}

@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) NSMutableSet * months;              //@synthesize months=_months - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSMutableSet *)months;
-(id)initWithYear:(long long)arg1 ;
@end

