/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HIDAnalytics/HIDAnalytics-Structs.h>
@class NSMutableDictionary, NSString, NSDictionary;

@interface HIDAnalyticsEvent : NSObject {

	NSMutableDictionary* _fields;
	BOOL _isUpdated;
	NSString* _name;
	NSDictionary* _desc;

}

@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * desc;              //@synthesize desc=_desc - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)addField:(id)arg1 ;
-(void)activate;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(NSDictionary *)desc;
-(void)setDesc:(NSDictionary *)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
@end

