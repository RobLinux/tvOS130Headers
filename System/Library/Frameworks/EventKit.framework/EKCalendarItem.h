/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSData, NSString, NSArray, EKCalendar, NSURL, NSDate, NSTimeZone;

@interface EKCalendarItem : EKObject

@property (nonatomic,copy) NSData * structuredData; 
@property (nonatomic,copy) NSData * localStructuredData; 
@property (nonatomic,retain) NSString * calendarItemIdentifier; 
@property (nonatomic,retain) NSArray * attachments; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarItemExternalIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL hasAlarms; 
@property (nonatomic,readonly) BOOL hasRecurrenceRules; 
@property (nonatomic,readonly) BOOL hasAttendees; 
@property (nonatomic,readonly) BOOL hasNotes; 
@property (nonatomic,readonly) NSArray * attendees; 
@property (nonatomic,copy) NSArray * alarms; 
@property (nonatomic,copy) NSArray * recurrenceRules; 
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)timeZoneFromTimeZoneName:(id)arg1 withFloatingTimeZone:(id)arg2 ;
+(id)timeZoneNameFromTimeZone:(id)arg1 ;
+(BOOL)_shouldDeleteAndAddForMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
+(id)knownRelationshipWeakKeys;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSURL *)URL;
-(NSString *)UUID;
-(void)setURL:(NSURL *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)uniqueID;
-(NSDate *)creationDate;
-(int)sequenceNumber;
-(id)uniqueId;
-(NSDate *)lastModifiedDate;
-(id)action;
-(void)setAction:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)isEditable;
-(void)willSave;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setUniqueID:(id)arg1 ;
-(NSString *)location;
-(id)clientLocation;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(id)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)organizer;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(long long)selfParticipantStatus;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(BOOL)isAllDay;
-(void)setOrganizer:(id)arg1 ;
-(NSData *)localStructuredData;
-(NSData *)structuredData;
-(id)_structuredDataDictionaryFromData:(id)arg1 ;
-(id)_dataFromStructuredDataDictionary:(id)arg1 ;
-(void)setLocalStructuredData:(NSData *)arg1 ;
-(void)setStructuredData:(NSData *)arg1 ;
-(id)_customObjectForKey:(id)arg1 local:(BOOL)arg2 ;
-(void)_setCustomObject:(id)arg1 forKey:(id)arg2 local:(BOOL)arg3 ;
-(id)customObjectForKey:(id)arg1 ;
-(void)setCustomObject:(id)arg1 forKey:(id)arg2 ;
-(id)localCustomObjectForKey:(id)arg1 ;
-(void)setLocalCustomObject:(id)arg1 forKey:(id)arg2 ;
-(id)structuredLocation;
-(void)setStructuredLocation:(id)arg1 ;
-(id)allAlarms;
-(NSArray *)recurrenceRules;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(id)externalURI;
-(id)exceptionDates;
-(id)detachedItems;
-(BOOL)hasRecurrenceRules;
-(BOOL)isFloating;
-(id)externalScheduleID;
-(void)setExternalScheduleID:(id)arg1 ;
-(id)startTimeZone;
-(void)setStartTimeZone:(id)arg1 ;
-(id)endTimeZone;
-(NSString *)calendarItemIdentifier;
-(id)preferredLocation;
-(void)setStructuredLocationWithoutPrediction:(id)arg1 ;
-(id)structuredLocationWithoutPrediction;
-(void)_updateDefaultAlarms;
-(id)appLinkData;
-(void)setAppLinkData:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(id)defaultAlarms;
-(BOOL)defaultAlarmWasDeleted;
-(void)_removeDefaultAlarms;
-(void)_addDefaultAlarms;
-(void)setEndTimeZone:(id)arg1 ;
-(id)startTimeZoneName;
-(void)setStartTimeZoneName:(id)arg1 ;
-(id)endTimeZoneName;
-(void)setEndTimeZoneName:(id)arg1 ;
-(BOOL)hasAttendees;
-(BOOL)_isExternallyOrganizedInvitationWithAttendees:(BOOL)arg1 ;
-(BOOL)isOrganizedBySharedCalendarOwner;
-(BOOL)isSelfOrganized;
-(BOOL)isExternallyOrganizedInvitation;
-(id)externalData;
-(BOOL)_excludeAlarmDueToConnectionTrigger:(id)arg1 ;
-(id)sortedAlarms;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(id)attendeesRaw;
-(id)filterAttendeesPendingDeletion:(id)arg1 ;
-(id)selfAttendee;
-(void)_setSelfAttendee:(id)arg1 ;
-(void)_removeAttendee:(id)arg1 ;
-(int)selfParticipantStatusRaw;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedTimeZoneName;
-(void)setSharedItemCreatedTimeZoneName:(id)arg1 ;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedTimeZoneName;
-(void)setSharedItemModifiedTimeZoneName:(id)arg1 ;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(id)travelStartLocation;
-(void)_moveToCalendar:(id)arg1 forCommittingItem:(id)arg2 ;
-(id)originalItem;
-(void)_recursivelyPerformBlockOnSelfAndDetachedItems:(/*^block*/id)arg1 forCommittingItem:(id)arg2 ;
-(void)setOriginalItem:(id)arg1 ;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3 ;
-(void)_clearFieldsAfterMovingToNewCalendarOnSameSource;
-(void)_setCalendarRecursively:(id)arg1 forCommittingItem:(id)arg2 ;
-(void)setExternalData:(id)arg1 ;
-(void)_deletePersistentItemAndDetachedItems:(id)arg1 forCommittingItem:(id)arg2 ;
-(id)ekExceptionDates;
-(void)setEkExceptionDates:(id)arg1 ;
-(void)setDetachedItems:(id)arg1 ;
-(void)setAppLink:(id)arg1 ;
-(BOOL)isOnlyAlarmAcknowledgedPropertyDirty;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(id)_generateNewUniqueID;
-(void)_updateHasRecurrenceRulesIfNeeded;
-(void)_updateHasAttendeesIfNeeded;
-(void)_updateHasNotesIfNeeded;
-(void)setUniqueId:(id)arg1 ;
-(void)setCalendarItemIdentifier:(NSString *)arg1 ;
-(NSString *)calendarItemExternalIdentifier;
-(BOOL)hasNotes;
-(void)setClientLocation:(id)arg1 ;
-(void)setTravelStartLocation:(id)arg1 ;
-(id)calendarScale;
-(void)setCalendarScale:(id)arg1 ;
-(id)appLink;
-(void)setDefaultAlarmWasDeleted:(BOOL)arg1 ;
-(id)exportToICS;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)isSelfOrganizedInvitation;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)allowsAlarmModifications;
-(BOOL)allowsAttendeesModifications;
-(unsigned long long)actionsState;
-(BOOL)hasAlarms;
-(long long)indexForAlarm:(id)arg1 ;
-(void)setAllAlarms:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(BOOL)_hadRecurrenceRules;
-(void)removeRecurrenceRule:(id)arg1 ;
-(id)startDateForRecurrence;
-(BOOL)_hadAttendees;
-(void)removeAttendee:(id)arg1 ;
-(void)setSelfAttendee:(id)arg1 ;
-(id)attendeeForMe;
-(id)participantMatchingContact:(id)arg1 ;
-(id)attendeeMatchingEmailAddress:(id)arg1 ;
-(id)sharedItemCreatedByDisplayName;
-(void)setSharedItemCreatedByDisplayName:(id)arg1 ;
-(id)sharedItemCreatedByAddress;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(id)arg1 ;
-(void)setSharedItemCreatedByLastName:(id)arg1 ;
-(id)sharedItemCreatedDate;
-(void)setSharedItemCreatedDate:(id)arg1 ;
-(id)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(id)arg1 ;
-(id)sharedItemModifiedByDisplayName;
-(void)setSharedItemModifiedByDisplayName:(id)arg1 ;
-(id)sharedItemModifiedByAddress;
-(void)setSharedItemModifiedByAddress:(id)arg1 ;
-(void)setSharedItemModifiedByFirstName:(id)arg1 ;
-(void)setSharedItemModifiedByLastName:(id)arg1 ;
-(id)sharedItemModifiedDate;
-(void)setSharedItemModifiedDate:(id)arg1 ;
-(id)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(id)arg1 ;
-(void)_addAttachment:(id)arg1 ;
-(void)_removeAttachment:(id)arg1 ;
-(BOOL)canMoveToCalendar:(id)arg1 error:(id*)arg2 ;
-(void)moveToCalendar:(id)arg1 ;
-(void)_addDetachedItem:(id)arg1 ;
-(void)_removeDetachedItem:(id)arg1 ;
-(void)_deleteSelfAndDetached;
-(void)setExceptionDates:(id)arg1 ;
-(void)_addExceptionDate:(id)arg1 ;
-(void)_removeExceptionDate:(id)arg1 ;
-(void)updateWithAppLink:(id)arg1 usedSelectedText:(BOOL*)arg2 ;
-(void)_updateModifiedAlarmByAcknowledging;
-(BOOL)_validateDeletable:(id*)arg1 ;
-(void)_willCommit;
@end

