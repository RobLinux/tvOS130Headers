/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSURL * calendarPunchoutURI; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSString * selfParticipantStatus; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)status;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setReadOnly:(NSNumber *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSArray *)alerts;
-(void)setAlerts:(NSArray *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(NSNumber *)readOnly;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSURL *)calendarId;
-(void)setCalendarId:(NSURL *)arg1 ;
-(NSURL *)calendarPunchoutURI;
-(void)setCalendarPunchoutURI:(NSURL *)arg1 ;
-(NSNumber *)includeRecurrences;
-(void)setIncludeRecurrences:(NSNumber *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)selfParticipantStatus;
-(void)setSelfParticipantStatus:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
@end

