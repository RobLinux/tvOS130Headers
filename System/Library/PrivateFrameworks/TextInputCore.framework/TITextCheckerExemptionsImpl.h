/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject {

	/*^block*/id _contactObserver;
	id _userDictionaryObserver;
	unsigned long long _observerAssertionCount;
	NSSet* _addressBookTokens;
	NSSet* _userDictionaryTokens;
	NSUUID* _userDictionaryUUID;

}

@property (nonatomic,retain) NSSet * addressBookTokens;                 //@synthesize addressBookTokens=_addressBookTokens - In the implementation block
@property (nonatomic,retain) NSSet * userDictionaryTokens;              //@synthesize userDictionaryTokens=_userDictionaryTokens - In the implementation block
@property (nonatomic,copy) NSUUID * userDictionaryUUID;                 //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
+(id)sharedTextCheckerExemptionsImpl;
-(void)dealloc;
-(BOOL)stringIsExemptFromChecker:(id)arg1 ;
-(void)addObserverAssertion;
-(void)removeObserverAssertion;
-(NSSet *)addressBookTokens;
-(void)setAddressBookTokens:(NSSet *)arg1 ;
-(NSSet *)userDictionaryTokens;
-(void)setUserDictionaryTokens:(NSSet *)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
@end

