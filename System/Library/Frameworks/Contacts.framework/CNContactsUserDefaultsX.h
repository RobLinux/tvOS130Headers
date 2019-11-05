/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults {

	CNFoundationUserDefaults* _foundationUserDefaults;

}

@property (retain) CNFoundationUserDefaults * foundationUserDefaults;              //@synthesize foundationUserDefaults=_foundationUserDefaults - In the implementation block
-(id)init;
-(id)countryCode;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(long long)sortOrder;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(long long)displayNameOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(id)initWithFoundationUserDefaults:(id)arg1 ;
-(CNFoundationUserDefaults *)foundationUserDefaults;
-(void)setFoundationUserDefaults:(CNFoundationUserDefaults *)arg1 ;
@end

