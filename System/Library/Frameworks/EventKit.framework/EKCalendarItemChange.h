/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObjectChange.h>

@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange {

	BOOL _titleChanged;
	BOOL _locationChanged;
	BOOL _startDateChanged;
	BOOL _startTimezoneChanged;
	BOOL _endDateChanged;
	BOOL _endTimezoneChanged;
	BOOL _notesChanged;
	BOOL _allDayChanged;
	EKObjectID* _calendarID;
	EKObjectID* _oldCalendarID;
	NSString* _externalID;
	NSString* _oldExternalID;

}

@property (nonatomic,readonly) EKObjectID * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) EKObjectID * oldCalendarID;              //@synthesize oldCalendarID=_oldCalendarID - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * oldExternalID;                //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (nonatomic,readonly) BOOL titleChanged;                       //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,readonly) BOOL locationChanged;                    //@synthesize locationChanged=_locationChanged - In the implementation block
@property (nonatomic,readonly) BOOL startDateChanged;                   //@synthesize startDateChanged=_startDateChanged - In the implementation block
@property (nonatomic,readonly) BOOL startTimezoneChanged;               //@synthesize startTimezoneChanged=_startTimezoneChanged - In the implementation block
@property (nonatomic,readonly) BOOL endDateChanged;                     //@synthesize endDateChanged=_endDateChanged - In the implementation block
@property (nonatomic,readonly) BOOL endTimezoneChanged;                 //@synthesize endTimezoneChanged=_endTimezoneChanged - In the implementation block
@property (nonatomic,readonly) BOOL notesChanged;                       //@synthesize notesChanged=_notesChanged - In the implementation block
@property (nonatomic,readonly) BOOL allDayChanged;                      //@synthesize allDayChanged=_allDayChanged - In the implementation block
+(int)entityType;
+(void)fetchCalendarItemChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)calendarID;
-(NSString *)externalID;
-(BOOL)locationChanged;
-(BOOL)titleChanged;
-(id)initWithChangeProperties:(id)arg1 ;
-(EKObjectID *)oldCalendarID;
-(NSString *)oldExternalID;
-(BOOL)startDateChanged;
-(BOOL)startTimezoneChanged;
-(BOOL)endDateChanged;
-(BOOL)endTimezoneChanged;
-(BOOL)notesChanged;
-(BOOL)allDayChanged;
@end

