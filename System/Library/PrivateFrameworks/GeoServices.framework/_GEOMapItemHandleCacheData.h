/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSData;

@interface _GEOMapItemHandleCacheData : NSObject {

	NSDate* _timestamp;
	NSData* _data;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long cost; 
-(NSData *)data;
-(NSDate *)timestamp;
-(id)initWithTimestamp:(id)arg1 data:(id)arg2 ;
-(unsigned long long)cost;
@end

