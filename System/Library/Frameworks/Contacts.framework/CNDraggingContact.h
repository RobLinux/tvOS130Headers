/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject {

	CNContact* _contact;
	CNContactStore* _contactStore;
	NSURL* _cachedFileURLRepresentation;

}

@property (nonatomic,retain) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSURL * cachedFileURLRepresentation;              //@synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation - In the implementation block
+(id)os_log;
+(id)availableDataRepresentationTypes;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSURL *)cachedFileURLRepresentation;
-(id)fetchContactWithKeys:(id)arg1 ;
-(id)serializeContactToVCard:(id)arg1 ;
-(id)fileNameForContact:(id)arg1 ;
-(void)setCachedFileURLRepresentation:(NSURL *)arg1 ;
-(id)initWithContact:(id)arg1 contactStore:(id)arg2 ;
-(id)fileURLRepresentation;
-(void)cleanupFileURLRepresentation;
-(id)dataRepresentationForType:(id)arg1 ;
@end

