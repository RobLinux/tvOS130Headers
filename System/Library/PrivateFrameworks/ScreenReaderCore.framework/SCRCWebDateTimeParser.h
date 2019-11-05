/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCRCWebDateTimeParser : NSObject {

	NSMutableDictionary* _expressions;
	NSMutableDictionary* _dateFormats;

}
+(id)sharedInstance;
-(id)init;
-(id)_expressionForRule:(id)arg1 ;
-(id)_cachedDateFormatterForFormat:(id)arg1 ;
-(id)_handleDuration:(id)arg1 ;
-(id)_handleTimes:(id)arg1 ;
-(id)_handleDatesAndTimes:(id)arg1 ;
-(id)spokenStringForDateTimeAttribute:(id)arg1 ;
@end

