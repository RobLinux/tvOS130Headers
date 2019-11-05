/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNUIPeopleSource.h>

@class _DECConsumer, CNContactStore, NSArray, NSUUID, NSString;

@interface CNUIDuetPeopleSource : NSObject <CNUIPeopleSource> {

	_DECConsumer* _duetConsumer;
	CNContactStore* _contactStore;
	NSArray* _duetResults;
	NSArray* _cachedPeople;
	NSUUID* _currentFetchUUID;

}

@property (nonatomic,retain) _DECConsumer * duetConsumer;                //@synthesize duetConsumer=_duetConsumer - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * duetResults;                      //@synthesize duetResults=_duetResults - In the implementation block
@property (nonatomic,retain) NSArray * cachedPeople;                     //@synthesize cachedPeople=_cachedPeople - In the implementation block
@property (nonatomic,retain) NSUUID * currentFetchUUID;                  //@synthesize currentFetchUUID=_currentFetchUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceKind;
+(id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(id)groups;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(_DECConsumer *)duetConsumer;
-(void)setDuetConsumer:(_DECConsumer *)arg1 ;
-(NSArray *)duetResults;
-(void)fetchDuetResults;
-(NSArray *)cachedPeople;
-(void)setCachedPeople:(NSArray *)arg1 ;
-(NSUUID *)currentFetchUUID;
-(void)setCurrentFetchUUID:(NSUUID *)arg1 ;
-(void)setDuetResults:(NSArray *)arg1 ;
-(id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2 ;
@end

