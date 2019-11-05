/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSString, NSURL, NSSet;

@interface EKPersistentCalendar : EKPersistentObject

@property (nonatomic,retain) EKPersistentSource * source; 
@property (nonatomic,retain) NSString * UUID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,nonatomic) int displayOrder; 
@property (nonatomic,copy) NSString * colorString; 
@property (assign,getter=isColorDisplayOnly,nonatomic) BOOL colorDisplayOnly; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) unsigned long long sharingStatus; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSURL * sharedOwnerAddress; 
@property (assign,nonatomic) unsigned long long sharingInvitationResponse; 
@property (nonatomic,copy) NSSet * sharees; 
@property (nonatomic,copy) NSString * publishedURL; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,copy) NSString * selfIdentityDisplayName; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (nonatomic,copy) NSString * selfIdentityPhoneNumber; 
@property (nonatomic,copy) NSURL * selfIdentityAddress; 
@property (nonatomic,copy) NSString * selfIdentityFirstName; 
@property (nonatomic,copy) NSString * selfIdentityLastName; 
@property (nonatomic,copy) NSString * ownerIdentityDisplayName; 
@property (nonatomic,copy) NSString * ownerIdentityEmail; 
@property (nonatomic,copy) NSString * ownerIdentityPhoneNumber; 
@property (nonatomic,copy) NSURL * ownerIdentityAddress; 
@property (nonatomic,copy) NSString * ownerIdentityFirstName; 
@property (nonatomic,copy) NSString * ownerIdentityLastName; 
@property (nonatomic,copy) NSString * bulkRequests; 
@property (nonatomic,copy) NSString * subcalAccountID; 
@property (nonatomic,copy) NSString * pushKey; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(Class)meltedClass;
+(id)calendarWithRandomUUID;
-(id)description;
-(void)setSource:(EKPersistentSource *)arg1 ;
-(int)flags;
-(EKPersistentSource *)source;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)entityType;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(id)externalRepresentation;
-(void)setExternalRepresentation:(id)arg1 ;
-(void)setNotifications:(id)arg1 ;
-(id)notifications;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(NSString *)pushKey;
-(NSString *)bulkRequests;
-(id)syncToken;
-(void)setPushKey:(NSString *)arg1 ;
-(void)setBulkRequests:(NSString *)arg1 ;
-(void)setSyncToken:(id)arg1 ;
-(NSString *)colorString;
-(NSSet *)sharees;
-(id)externalIDTag;
-(void)setExternalIDTag:(id)arg1 ;
-(BOOL)isColorDisplayOnly;
-(void)setColorDisplayOnly:(BOOL)arg1 ;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)setColorString:(NSString *)arg1 ;
-(int)displayOrder;
-(void)setDisplayOrder:(int)arg1 ;
-(unsigned long long)sharingStatus;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(NSString *)sharedOwnerName;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(NSURL *)sharedOwnerAddress;
-(void)setSharedOwnerAddress:(NSURL *)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(NSString *)publishedURL;
-(void)setPublishedURL:(NSString *)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isPublished;
-(void)setPublished:(BOOL)arg1 ;
-(void)setSharees:(NSSet *)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(int)allowedEntities;
-(void)setAllowedEntities:(int)arg1 ;
-(NSString *)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(NSString *)arg1 ;
-(NSString *)selfIdentityEmail;
-(void)setSelfIdentityEmail:(NSString *)arg1 ;
-(NSString *)selfIdentityPhoneNumber;
-(void)setSelfIdentityPhoneNumber:(NSString *)arg1 ;
-(NSURL *)selfIdentityAddress;
-(void)setSelfIdentityAddress:(NSURL *)arg1 ;
-(NSString *)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(NSString *)arg1 ;
-(NSString *)selfIdentityLastName;
-(void)setSelfIdentityLastName:(NSString *)arg1 ;
-(NSString *)ownerIdentityDisplayName;
-(int)ownerIdentityId;
-(void)setOwnerIdentityId:(int)arg1 ;
-(void)setOwnerIdentityDisplayName:(NSString *)arg1 ;
-(NSString *)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(NSString *)arg1 ;
-(NSString *)ownerIdentityPhoneNumber;
-(void)setOwnerIdentityPhoneNumber:(NSString *)arg1 ;
-(NSURL *)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(NSURL *)arg1 ;
-(NSString *)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(NSString *)arg1 ;
-(NSString *)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(NSString *)arg1 ;
-(NSString *)subcalAccountID;
-(void)setSubcalAccountID:(NSString *)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
@end

