/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {

	CNVCardDateComponentsFormatter* _formatter;
	NSCalendar* _gregorianCalendar;

}
-(id)init;
-(id)gregorianDateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2 ;
-(id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2 ;
@end

