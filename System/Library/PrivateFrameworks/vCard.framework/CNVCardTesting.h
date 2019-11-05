/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVCardTesting : NSObject
+(id)parseCardWithBodyLines:(id)arg1 ;
+(id)parseCardWithBodyLines:(id)arg1 version:(id)arg2 encoding:(unsigned long long)arg3 ;
+(id)cardDataWithBodyLines:(id)arg1 version:(id)arg2 encoding:(unsigned long long)arg3 ;
+(id)parseCardWithData:(id)arg1 ;
+(id)complexValueWithValue:(id)arg1 label:(id)arg2 isPrimary:(BOOL)arg3 ;
+(id)linesUsingAdapter:(id)arg1 options:(id)arg2 ;
+(id)linesUsingAdapter:(id)arg1 ;
+(id)version30DataUsingAdapter:(id)arg1 ;
+(id)version21DataUsingAdapter:(id)arg1 ;
+(id)itemWithValue:(id)arg1 label:(id)arg2 ;
+(id)parseCardWithBodyLine:(id)arg1 ;
+(id)parseCardWithData:(id)arg1 options:(id)arg2 ;
+(id)resultWithProperty:(id)arg1 value:(id)arg2 label:(id)arg3 isPrimary:(BOOL)arg4 ;
+(id)unknownPropertyWithName:(id)arg1 line:(id)arg2 ;
+(BOOL)version30CardForPerson:(id)arg1 containsLine:(id)arg2 ;
+(BOOL)version30CardForPerson:(id)arg1 containsString:(id)arg2 ;
+(BOOL)version30DataUsingAdapter:(id)arg1 containsData:(id)arg2 ;
+(BOOL)version21DataUsingAdapter:(id)arg1 containsData:(id)arg2 ;
+(id)emailItemWithAddress:(id)arg1 label:(id)arg2 ;
+(id)instantMessagingItemWithUsername:(id)arg1 service:(id)arg2 label:(id)arg3 ;
+(id)gregorianDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
+(id)chineseDateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 ;
+(id)activityAlertResultWithTypes:(id)arg1 sounds:(id)arg2 vibrations:(id)arg3 ;
@end

