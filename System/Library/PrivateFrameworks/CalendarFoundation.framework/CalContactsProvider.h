/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalContactsProviderProtocol.h>

@protocol OS_dispatch_queue;
@class CNContact, CNContactStore, CNReputationStore, NSObject, NSString, NSMutableSet, NSArray;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {

	CNContact* _meContact;
	CNContactStore* _store;
	CNReputationStore* _reputationStore;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSString* _testMeContactIdentifer;
	NSMutableSet* _delegates;
	NSArray* _unitTestEmails;

}

@property (retain) CNContactStore * store;                              //@synthesize store=_store - In the implementation block
@property (retain) CNReputationStore * reputationStore;                 //@synthesize reputationStore=_reputationStore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) CNContact * meContact; 
@property (retain) NSString * testMeContactIdentifer;                   //@synthesize testMeContactIdentifer=_testMeContactIdentifer - In the implementation block
@property (retain) NSMutableSet * delegates;                            //@synthesize delegates=_delegates - In the implementation block
@property (retain) NSArray * unitTestEmails;                            //@synthesize unitTestEmails=_unitTestEmails - In the implementation block
+(id)defaultProvider;
+(id)reputationForHandle:(id)arg1 inStore:(id)arg2 ;
+(BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2 ;
+(BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 inReputationStore:(id)arg2 ;
+(BOOL)isCalendarIslamic:(id)arg1 ;
+(BOOL)birthdayIsYearless:(id)arg1 ;
+(id)birthdayStringForContactName:(id)arg1 eventDate:(id)arg2 birthDate:(id)arg3 lunarCalendar:(id)arg4 ;
-(id)init;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStore *)store;
-(id)_lastHistoryToken;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)contactStore;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(void)contactsChanged:(id)arg1 ;
-(id)_fetchedUnifiedMeContact;
-(void)setMeContact:(CNContact *)arg1 ;
-(void)setUnitTestEmails:(NSArray *)arg1 ;
-(void)_syncContacts;
-(void)_setLastHistoryToken:(id)arg1 ;
-(NSString *)testMeContactIdentifer;
-(id)_meWithKeys:(id)arg1 ;
-(void)setTestMeContactIdentifer:(NSString *)arg1 ;
-(CNContact *)meContact;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 ;
-(id)myNameWithStyle:(long long)arg1 ;
-(id)myAddressForLabel:(id)arg1 ;
-(NSArray *)unitTestEmails;
-(id)myEmailAddresses;
-(BOOL)matchesOneOfMyEmails:(id)arg1 ;
-(CNReputationStore *)reputationStore;
-(void)registerForContactChangeNotifications:(id)arg1 ;
-(void)deregisterForContactChangeNotifications:(id)arg1 ;
-(void)setMeCardEmailsForUnitTesting:(id)arg1 ;
-(void)setTestMeContactIdentifier:(id)arg1 ;
-(id)unifiedMeContact;
-(id)unifiedContactWithEmailAddress:(id)arg1 ;
-(id)unifiedContactWithPhoneNumber:(id)arg1 ;
-(id)unifiedContactWithIdentifier:(id)arg1 ;
-(id)unifiedContactMatchingName:(id)arg1 email:(id)arg2 url:(id)arg3 keysToFetch:(id)arg4 ;
-(id)contactsFromContactIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(id)myAvatarEncodedString;
-(void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2 ;
-(BOOL)contactIdentifierIsMe:(id)arg1 ;
-(id)myShortDisplayName;
-(id)myFullName;
-(id)myHomeAddress;
-(id)myWorkAddress;
-(id)myEmailAddress;
-(BOOL)urlMatchesOneOfMyEmails:(id)arg1 ;
-(BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 ;
-(BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 ;
-(void)setReputationStore:(CNReputationStore *)arg1 ;
@end

