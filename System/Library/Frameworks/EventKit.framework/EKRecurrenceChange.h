/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObjectChange.h>
#import <EventKit/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKRecurrenceChange : EKObjectChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchRecurrenceChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchRecurrenceChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchRecurrenceChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end

